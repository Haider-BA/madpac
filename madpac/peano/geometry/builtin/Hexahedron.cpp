#include "peano/geometry/builtin/Hexahedron.h"
#include "peano/utils/Loop.h"


tarch::logging::Log peano::geometry::builtin::Hexahedron::_log( "peano::geometry::builtin::Hexahedron" );


peano::geometry::builtin::Hexahedron::Hexahedron(
  bool          isInverted,
  const tarch::la::Vector<DIMENSIONS,double>& width,
  const tarch::la::Vector<DIMENSIONS,double>& offset
):
  AbstractGeometry(isInverted),
  _offset(offset),
  _width(width){

  logDebug(
    "Hexahedron(...)",
    "created hexahedron with width " << _width
      << " at " << _offset << " (left bottom (front) point)"
  );
}


peano::geometry::builtin::Hexahedron::~Hexahedron() {}


bool peano::geometry::builtin::Hexahedron::isInsideOpenHexahedron( const tarch::la::Vector<DIMENSIONS,double>& x ) const {
  bool result = true;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( _width(d) >= 0.0 );
    result &= tarch::la::greater(x(d),_offset(d));
    result &= tarch::la::smaller(x(d),_offset(d)+_width(d));
  }
  return result;
}


bool peano::geometry::builtin::Hexahedron::isInsideClosedHexahedron( const tarch::la::Vector<DIMENSIONS,double>& x ) const {
  bool result = true;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( _width(d) >= 0.0 );
    result &= !tarch::la::smaller(x(d),_offset(d));
    result &= !tarch::la::greater(x(d),_offset(d)+_width(d));
  }
  return result;
}


tarch::la::Vector<DIMENSIONS,double> peano::geometry::builtin::Hexahedron::getOffset() const {
  return _offset;
}


tarch::la::Vector<DIMENSIONS,double> peano::geometry::builtin::Hexahedron::getBoundingBox() const {
  return _width;
}


bool peano::geometry::builtin::Hexahedron::isOutsideClosedDomainNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  return !isInsideClosedHexahedron(x);
}


bool peano::geometry::builtin::Hexahedron::isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {


  bool result = false;
  for( int i = 0; i < DIMENSIONS; i++ ){
    bool dimResult = true;
    dimResult &= !(tarch::la::smaller(x(i) - resolution(i), _offset(i) + _width(i)) &&
                tarch::la::greater(x(i) - resolution(i), _offset(i)));
    dimResult &= !(tarch::la::smaller(x(i) + resolution(i), _offset(i) + _width(i)) &&
                tarch::la::greater(x(i) + resolution(i), _offset(i)));
    dimResult &= !(!tarch::la::greater(x(i) - resolution(i), _offset(i)) &&
                !tarch::la::smaller(x(i) + resolution(i), _offset(i) + _width(i)));
    result |= dimResult;
  }

  return result;
}


bool peano::geometry::builtin::Hexahedron::isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  bool result = isInsideOpenHexahedron(x);

  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentPoint0;
    tarch::la::Vector<DIMENSIONS,double> currentPoint1;
    for (int d=0; d<DIMENSIONS; d++) {
      currentPoint0(d) = (i(d)==0) ? x(d)-0.5*resolution(d) : x(d)+0.5*resolution(d);
      currentPoint1(d) = (i(d)==0) ? x(d)-1.0*resolution(d) : x(d)+1.0*resolution(d);
    }
    result &= isInsideClosedHexahedron(currentPoint0);
    result &= isInsideClosedHexahedron(currentPoint1);
   enddforx

  return result;
}
