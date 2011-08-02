#include "peano/kernel/regulargrid/SingleElementVertexEnumerator.h"

peano::kernel::regulargrid::SingleElementVertexEnumerator::SingleElementVertexEnumerator(
  const Vector &  cellSize,
  const Vector &  cellOffset
):
  _cellSize( cellSize ),
  _cellOffset( cellOffset ) {
}


int peano::kernel::regulargrid::SingleElementVertexEnumerator::operator() (int localVertexNumber) const {
  assertion1(localVertexNumber>=0, localVertexNumber);
  assertion1(localVertexNumber<TWO_POWER_D, localVertexNumber);
  return localVertexNumber;
}


void peano::kernel::regulargrid::SingleElementVertexEnumerator::setCellOffset( const Vector &  cellOffset ) {
  _cellOffset = cellOffset;
}


int peano::kernel::regulargrid::SingleElementVertexEnumerator::operator() (const LocalVertexIntegerIndex&  localVertexNumber ) const {
  int result = 0;
  int offset = 1;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion1( localVertexNumber(d)>=0, localVertexNumber );
    assertion1( localVertexNumber(d)<=1, localVertexNumber );
    result += localVertexNumber(d)*offset;
    offset *=2;
  }
  return result;
}


int peano::kernel::regulargrid::SingleElementVertexEnumerator::operator() (const LocalVertexBitsetIndex&   localVertexNumber ) const {
  return localVertexNumber.to_ulong();
}


std::string peano::kernel::regulargrid::SingleElementVertexEnumerator::toString() const {
  std::ostringstream msg;
  msg << "(cell-size:" << _cellSize
      << ",cell-offset:" << _cellOffset
      << ")";
  return msg.str();
}


peano::kernel::regulargrid::SingleElementVertexEnumerator::Vector
peano::kernel::regulargrid::SingleElementVertexEnumerator::getVertexPosition(
  int            localVertexNumber
) const {
  Vector result = _cellOffset;
  assertion(false); // not implemented yet
  return result;
}


int peano::kernel::regulargrid::SingleElementVertexEnumerator::getLevel() const {
  return 0;
}


peano::kernel::regulargrid::SingleElementVertexEnumerator::Vector
peano::kernel::regulargrid::SingleElementVertexEnumerator::getVertexPosition(
  const LocalVertexIntegerIndex&  localVertexNumber
) const {
  Vector result = _cellOffset;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( localVertexNumber(d)==0 || localVertexNumber(d)==1 );
    if (localVertexNumber(d)==1) {
      result(d) += _cellSize(d);
    }
  }
  return result;
}


peano::kernel::gridinterface::VertexEnumerator::Vector peano::kernel::regulargrid::SingleElementVertexEnumerator::getCellSize() const {
  return _cellSize;
}


peano::kernel::gridinterface::VertexEnumerator::Vector peano::kernel::regulargrid::SingleElementVertexEnumerator::getCellCenter() const {
  return getVertexPosition() + _cellSize/2.0;
}


peano::kernel::regulargrid::SingleElementVertexEnumerator::Vector
peano::kernel::regulargrid::SingleElementVertexEnumerator::getVertexPosition(
  const LocalVertexBitsetIndex& localVertexNumber
) const {
  Vector result = _cellOffset;
  for (int d=0; d<DIMENSIONS; d++) {
    if (localVertexNumber[d]) {
      result(d) += _cellSize(d);
    }
  }
  return result;
}


peano::kernel::regulargrid::SingleElementVertexEnumerator::Vector
peano::kernel::regulargrid::SingleElementVertexEnumerator::getVertexPosition() const {
  return _cellOffset;
}
