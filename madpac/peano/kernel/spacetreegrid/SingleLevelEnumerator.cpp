#include "peano/kernel/spacetreegrid/SingleLevelEnumerator.h"


int peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseCellIndex( const LocalVertexIntegerIndex& cellPosition ) {
  int base   = 1;
  int result = 0;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion1(cellPosition(d)>=0,cellPosition);
    assertion1(cellPosition(d)<=2,cellPosition);
	  result += cellPosition(d)*base;
	  base   *= 3;
  }
  assertion( result>= 0 );
  assertion( result< THREE_POWER_D );
  return result;
}


int peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( const LocalVertexIntegerIndex& vertexPosition ) {
  int base   = 1;
  int result = 0;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion1(vertexPosition(d)>=0,vertexPosition);
    assertion1(vertexPosition(d)<=3,vertexPosition);
    result += vertexPosition(d)*base;
    base   *= 4;
  }
  assertion( result>= 0 );
  assertion( result< FOUR_POWER_D );
  return result;
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::SingleLevelEnumerator(
  const Vector&                   coarseGridCellSize,
  const Vector&                   domainOffset
):
  _discreteOffset(0),
  _fineGridCellSize(coarseGridCellSize/3.0),
  _domainOffset(domainOffset),
  _level(0) {
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::SingleLevelEnumerator(
  const Vector&                   coarseGridCellSize,
  const Vector&                   domainOffset,
  int                             level
):
  _discreteOffset(0),
  _fineGridCellSize(coarseGridCellSize/3.0),
  _domainOffset(domainOffset),
  _level(level+1) {
}


peano::kernel::spacetreegrid::SingleLevelEnumerator peano::kernel::spacetreegrid::SingleLevelEnumerator::getRefinedEnumerator() const {
  Vector subEnumeratorDomainOffset;
  for (int d=0; d<DIMENSIONS; d++) {
	subEnumeratorDomainOffset(d)  = _discreteOffset(d);
    subEnumeratorDomainOffset(d) *= _fineGridCellSize(d);
    subEnumeratorDomainOffset(d) += _domainOffset(d);
  }
  return SingleLevelEnumerator(_fineGridCellSize, subEnumeratorDomainOffset, _level );
}


void peano::kernel::spacetreegrid::SingleLevelEnumerator::setOffset(const LocalVertexIntegerIndex&  gridPointOffset) {
  for (int d=0; d<DIMENSIONS; d++) {
    assertion2( gridPointOffset(d)>=0, gridPointOffset, toString() );
    assertion2( gridPointOffset(d)<=3, gridPointOffset, toString() );
  }
  _discreteOffset = gridPointOffset;
}


int peano::kernel::spacetreegrid::SingleLevelEnumerator::operator() (int localVertexNumber) const {
  peano::kernel::spacetreegrid::SingleLevelEnumerator::LocalVertexIntegerIndex localOffset;
  int base   = TWO_POWER_D_DIVIDED_BY_TWO;
  for (int d=DIMENSIONS-1; d>=0; d--) {
	  localOffset(d)     = localVertexNumber / base;
	  assertion5( localOffset(d)>=0, localOffset, localVertexNumber, d, base, _discreteOffset );
	  assertion5( localOffset(d)<=1, localOffset, localVertexNumber, d, base, _discreteOffset );
	  localVertexNumber -= localOffset(d) * base;
    base              /= 2;
  }
  localOffset += _discreteOffset;
  return peano::kernel::spacetreegrid::SingleLevelEnumerator::lineariseVertexIndex( localOffset );
}


int peano::kernel::spacetreegrid::SingleLevelEnumerator::operator() (const LocalVertexIntegerIndex&  localVertexNumber ) const {
  return lineariseVertexIndex(localVertexNumber+_discreteOffset);
}


int peano::kernel::spacetreegrid::SingleLevelEnumerator::operator() (const LocalVertexBitsetIndex&   localVertexNumber ) const {
  return (*this)(localVertexNumber.to_ulong());
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPosition(int localVertexNumber) const {
  peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector result( _domainOffset );
  assertionMsg(false,"not implemented yet");
  return result;
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPosition(const LocalVertexIntegerIndex& localVertexNumber ) const {
  peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector result( _domainOffset );
  for(int d=0; d<DIMENSIONS;d++) {
	double delta = localVertexNumber(d) + _discreteOffset(d);
	result(d) += delta * _fineGridCellSize(d);
  }
  return result;
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPosition(const LocalVertexBitsetIndex& localVertexNumber ) const {
  return (*this)(localVertexNumber.to_ulong());
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPosition() const {
  return getVertexPosition(LocalVertexIntegerIndex(0));
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector peano::kernel::spacetreegrid::SingleLevelEnumerator::getCellCenter() const {
  return getVertexPosition() + _fineGridCellSize/2.0;
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::Vector peano::kernel::spacetreegrid::SingleLevelEnumerator::getCellSize() const {
  return _fineGridCellSize;
}


std::string peano::kernel::spacetreegrid::SingleLevelEnumerator::toString() const {
  std::ostringstream out;
  out << "(domain-offset:" << _domainOffset
	  << ",discrete-offset:" << _discreteOffset
	  << ",cell-size:" << _fineGridCellSize
	  << ",level:" << _level
	  << ")";
  return out.str();
}


int peano::kernel::spacetreegrid::SingleLevelEnumerator::getLevel() const {
  return _level;
}


peano::kernel::spacetreegrid::SingleLevelEnumerator::LocalVertexIntegerIndex
peano::kernel::spacetreegrid::SingleLevelEnumerator::getVertexPositionOnCoarserLevel(const LocalVertexIntegerIndex& index ) {
  assertion( isVertexPositionAtCoarseVertexsPosition(index) );
  peano::kernel::spacetreegrid::SingleLevelEnumerator::LocalVertexIntegerIndex result;
  for (int d=0; d<DIMENSIONS; d++ ) {
    result(d) = index(d)/3;
  }
  return result;
}


bool peano::kernel::spacetreegrid::SingleLevelEnumerator::isVertexPositionAtCoarseVertexsPosition(const LocalVertexIntegerIndex& index ) {
  bool result = true;
  for (int d=0; d<DIMENSIONS; d++ ) {
    result &= ((index(d)==0) || (index(d)==3));
  }
  return result;
}
