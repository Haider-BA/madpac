#include "peano/kernel/regulargrid/RegularGridVertexEnumerator.h"
#include "peano/utils/Loop.h"
#include "tarch/Assertions.h"
//#include "tarch/la/Utilities.h"


tarch::logging::Log peano::kernel::regulargrid::RegularGridVertexEnumerator::_log( "peano::kernel::regulargrid::RegularGridVertexEnumerator" );


peano::kernel::regulargrid::RegularGridVertexEnumerator::RegularGridVertexEnumerator(
  const LocalVertexIntegerIndex&  numberOfGridPoints,
  const LocalVertexIntegerIndex&  gridPointOffset,
  const Vector&                   cellSize,
  const Vector&                   domainOffset
):
  _numberOfGridPoints(numberOfGridPoints),
  _cellSize(cellSize),
  _domainOffset(domainOffset) {
  setOffset( gridPointOffset );
}


int peano::kernel::regulargrid::RegularGridVertexEnumerator::getFlattenedIndex(const LocalVertexIntegerIndex&  position) const {
  int result = 0;
  int offset = 1;
  for (int d = 0; d < DIMENSIONS; d++) {
    assertion3( position(d) <= _numberOfGridPoints(d), d, position(d), _numberOfGridPoints(d) );
    result += position(d) * offset;
    offset *= _numberOfGridPoints(d);
  }
  return result;
}


void peano::kernel::regulargrid::RegularGridVertexEnumerator::setOffset( const LocalVertexIntegerIndex& offset ) {
  _offset = offset;
}


int peano::kernel::regulargrid::RegularGridVertexEnumerator::operator() (int localVertexNumber) const {
  assertion1(localVertexNumber>=0, localVertexNumber);
  assertion1(localVertexNumber<TWO_POWER_D, localVertexNumber);
  int offset = tarch::la::aPowI( DIMENSIONS-1, 2 );
  tarch::la::Vector<DIMENSIONS,int> position;
  for (int d=DIMENSIONS-1; d>=0; d--) {
    position(d)        = localVertexNumber / offset;
    localVertexNumber -= position(d) * offset;
    offset /= 2;
  }
  return (*this)(position);
}


std::string peano::kernel::regulargrid::RegularGridVertexEnumerator::toString() const {
  std::ostringstream msg;
  msg << "(no-of-grid-points:" << _numberOfGridPoints
      << ",offset:" << _offset
      << ",cell-size:" << _cellSize
      << ",domain-offset:" << _domainOffset
      << ")";
  return msg.str();
}


int peano::kernel::regulargrid::RegularGridVertexEnumerator::operator() (const LocalVertexIntegerIndex&  localVertexNumber ) const {
  for (int d=0; d<DIMENSIONS; d++) {
    assertion1( localVertexNumber(d)>=0, localVertexNumber );
    assertion1( localVertexNumber(d)<=1, localVertexNumber );
  }

  return getFlattenedIndex( _offset +  localVertexNumber );
}


peano::kernel::regulargrid::RegularGridVertexEnumerator::Vector
peano::kernel::regulargrid::RegularGridVertexEnumerator::getVertexPosition(
  int localVertexNumber
) const {
  return getVertexPosition( peano::utils::dDelinearised(localVertexNumber,2));
}


int peano::kernel::regulargrid::RegularGridVertexEnumerator::getLevel() const {
  return 0;
}


peano::kernel::regulargrid::RegularGridVertexEnumerator::Vector
peano::kernel::regulargrid::RegularGridVertexEnumerator::getVertexPosition(
  const LocalVertexIntegerIndex& localVertexNumber
) const {
  logTraceInWith4Arguments( "getVertexPosition(vector)", localVertexNumber,_offset,_domainOffset,_cellSize );
  Vector result = _domainOffset;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion1(localVertexNumber(d)>=0, localVertexNumber);
    assertion1(localVertexNumber(d)<=1, localVertexNumber);
    double delta = localVertexNumber(d) + _offset(d);
    result(d) += delta * _cellSize(d);
  }
  logTraceOutWith1Argument( "getVertexPosition(vector)", result);
  return result;
}


peano::kernel::regulargrid::RegularGridVertexEnumerator::Vector
peano::kernel::regulargrid::RegularGridVertexEnumerator::getVertexPosition() const {
  Vector result = _domainOffset;
  for (int d=0; d<DIMENSIONS; d++) {
    double delta = _offset(d);
    result(d) += delta * _cellSize(d);
  }
  return result;
}


peano::kernel::regulargrid::RegularGridVertexEnumerator::Vector
peano::kernel::regulargrid::RegularGridVertexEnumerator::getVertexPosition(
  const LocalVertexBitsetIndex& localVertexNumber
) const {
  return getVertexPosition(localVertexNumber.to_ulong());
}


peano::kernel::gridinterface::VertexEnumerator::Vector peano::kernel::regulargrid::RegularGridVertexEnumerator::getCellSize() const {
  return _cellSize;
}


peano::kernel::gridinterface::VertexEnumerator::Vector peano::kernel::regulargrid::RegularGridVertexEnumerator::getCellCenter() const {
  return getVertexPosition() + _cellSize/2.0;
}


int peano::kernel::regulargrid::RegularGridVertexEnumerator::operator() (const LocalVertexBitsetIndex&  localVertexNumber ) const {
  tarch::la::Vector<DIMENSIONS,int> position;
  for (int d=0; d<DIMENSIONS; d++) {
    position(d) = localVertexNumber[d] ? 1 : 0;
  }
  return (*this)(position);
}
