#include "peano/geometry/builtin/Tube.h"

tarch::logging::Log peano::geometry::builtin::Tube::_log("peano::geometry::builtin::Tube");


peano::geometry::builtin::Tube::Tube(
  const tarch::la::Vector<DIMENSIONS,double>& p1,
  const tarch::la::Vector<DIMENSIONS,double>& p2,
  double radius,bool isInverted
):
peano::geometry::GeometryObject(),
_p1(p1),_p2(p2),
_middleLine(p2-p1),
_radius(radius),
_isInverted(isInverted),
_isAlignedAxis(isAlignedAxis(p2-p1)){}


peano::geometry::builtin::Tube::~Tube(){}


bool peano::geometry::builtin::Tube::
isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  if (_isInverted){
    return isCompletelyInsideNotInverted(x,resolution);
  } else {
    return isCompletelyOutsideNotInverted(x,resolution);
  }
}


bool peano::geometry::builtin::Tube::
isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  if (_isInverted){
    return isCompletelyOutsideNotInverted(x,resolution);
  } else {
    return isCompletelyInsideNotInverted(x,resolution);
  }
}


bool peano::geometry::builtin::Tube::
isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ){
  if (_isInverted){
    return isOutsideClosedDomainInverted(x);
  } else {
    return isOutsideClosedDomainNotInverted(x);
  }
}



bool peano::geometry::builtin::Tube::
isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution )
{
  // enumerator for the corners
  tarch::la::Vector<DIMENSIONS,int> corner(0);
  // true if all corner nodes lie outside the tube
  bool isOutside = true;
  // to each corner node: next closest point on the surface of the tube
  tarch::la::Vector<TWO_POWER_D,tarch::la::Vector<DIMENSIONS,double> > contactPoints;

  // loop over the corners
  for (int i = 0; i < TWO_POWER_D; i++){

    // coordinates of the corner nodes of the respective box
    tarch::la::Vector<DIMENSIONS,double> coords;

    // compute corner position
    for (int d = 0; d < DIMENSIONS; d++){
      coords(d) = (2*corner(d)-1)*resolution(d);
    }
    coords = coords + x;


    // let N be the point on the middle line of the tube, such that (x-N) is orthogonal to the middle line.
    // Then N = P1 + lambda*(P2-P1)
    double lambda = tarch::la::dot( coords-_p1,_middleLine)/(tarch::la::dot(_middleLine,_middleLine));
    tarch::la::Vector<DIMENSIONS,double> N(_p1 + lambda*_middleLine);

    // compute distance between corner and point N on the tube rotation axis
    double norm = std::sqrt(tarch::la::dot(coords-N,coords-N));

    // now: search for contact point on tube surface. If the norm is zero, the corner lies on the rotation axis of the tube.
    if (tarch::la::equals(norm,0.0)){
      // So, we can safely return false, if this point is already inside the tube
      if ( (lambda > 0.0) && (lambda < 1.0) ){
        return false;
      // otherwise: search for the closest contact point. This can only be _p1 or _p2!
      } else {
        if (lambda < 0.0){
          contactPoints(i) = _p1;
        } else {
          contactPoints(i) = _p2;
        }
      }
    // if we are not already on the rotation axis...
    } else {
      // ...compute contact point on the surface of the tube (assuming that the tube is infinitely long!)
      contactPoints(i) = N + _radius/norm*(coords-N);

      // if we are not on the (finite-sized) tube yet, we need to walk down until we reach the plane with _p1 or _p2
      if (lambda < 0.0){
        double mu = tarch::la::dot(_p1 - contactPoints(i),_middleLine)/tarch::la::dot(_middleLine,_middleLine);
        contactPoints(i) = contactPoints(i) + mu*_middleLine;
      } else if (lambda > 1.0){
        double mu = tarch::la::dot(_p2 - contactPoints(i),_middleLine)/tarch::la::dot(_middleLine,_middleLine);
        contactPoints(i) = contactPoints(i) + mu*_middleLine;
      }
    }


    // compute distance of corner node from rotational axis
    double distance = tarch::la::dot(coords - N,coords - N);
    // accumulate isOutside flag (determine, whether all corner nodes are outside the tube)
    isOutside = isOutside && ( (!(distance<_radius*_radius))
                || (!(lambda>0.0)) || (!(lambda<1.0)) );


    // go to next corner node
    peano::utils::dInc(corner,2);
  }
  // if not all vertices are outside the tube, return false
  if (!isOutside){
    return false;
  }

  // if one of the contact points is inside the hexahedron, the tube is not completely outside
  for (int i = 0; i < TWO_POWER_D; i++){
    bool isInsideHexahedron = true;
    for (int d = 0; d < DIMENSIONS; d++){
      isInsideHexahedron = isInsideHexahedron
                           && (contactPoints(i)(d) > x(d)-resolution(d))
                           && (contactPoints(i)(d) < x(d)+resolution(d));
    }
    if (isInsideHexahedron){
      return false;
    }
  }

  // case: the tube is parallel with one of the coordinate axes.
  // Then, it can happen that all contactPoints lie on the planes of the hexahedron! Check that!
  if (_isAlignedAxis > -1){
    bool p1OnPlane = false;
    bool p2OnPlane = false;
#if (DIMENSIONS==2)
    switch(_isAlignedAxis){
      case 0:
        p1OnPlane =    tarch::la::equals(contactPoints(0)(0),x(0)-resolution(0))
                    || tarch::la::equals(contactPoints(2)(0),x(0)-resolution(0));
        p2OnPlane =    tarch::la::equals(contactPoints(1)(0),x(0)+resolution(0))
                    || tarch::la::equals(contactPoints(3)(0),x(0)+resolution(0));
        break;
      case 1:
        p1OnPlane =    tarch::la::equals(contactPoints(0)(1),x(1)-resolution(1))
                    || tarch::la::equals(contactPoints(1)(1),x(1)-resolution(1));
        p2OnPlane =    tarch::la::equals(contactPoints(2)(1),x(1)+resolution(1))
                    || tarch::la::equals(contactPoints(3)(1),x(1)+resolution(1));
        break;
      default:
        assertion1(false,"_isAlignedAxis is " << _isAlignedAxis);
    }
#elif (DIMENSIONS==3)
    switch(_isAlignedAxis){
      case 0:
        p1OnPlane =    tarch::la::equals(contactPoints(0)(0),x(0)-resolution(0))
                    || tarch::la::equals(contactPoints(2)(0),x(0)-resolution(0))
                    || tarch::la::equals(contactPoints(4)(0),x(0)-resolution(0))
                    || tarch::la::equals(contactPoints(6)(0),x(0)-resolution(0));
        p2OnPlane =    tarch::la::equals(contactPoints(1)(0),x(0)+resolution(0))
                    || tarch::la::equals(contactPoints(3)(0),x(0)+resolution(0))
                    || tarch::la::equals(contactPoints(5)(0),x(0)+resolution(0))
                    || tarch::la::equals(contactPoints(7)(0),x(0)+resolution(0));
        break;
      case 1:
        p1OnPlane =    tarch::la::equals(contactPoints(0)(1),x(1)-resolution(1))
                    || tarch::la::equals(contactPoints(1)(1),x(1)-resolution(1))
                    || tarch::la::equals(contactPoints(4)(1),x(1)-resolution(1))
                    || tarch::la::equals(contactPoints(5)(1),x(1)-resolution(1));
        p2OnPlane =    tarch::la::equals(contactPoints(2)(1),x(1)+resolution(1))
                    || tarch::la::equals(contactPoints(3)(1),x(1)+resolution(1))
                    || tarch::la::equals(contactPoints(6)(1),x(1)+resolution(1))
                    || tarch::la::equals(contactPoints(7)(1),x(1)+resolution(1));
        break;
      case 2:
        p1OnPlane =    tarch::la::equals(contactPoints(0)(2),x(2)-resolution(2))
                    || tarch::la::equals(contactPoints(1)(2),x(2)-resolution(2))
                    || tarch::la::equals(contactPoints(2)(2),x(2)-resolution(2))
                    || tarch::la::equals(contactPoints(3)(2),x(2)-resolution(2));
        p2OnPlane =    tarch::la::equals(contactPoints(4)(2),x(2)+resolution(2))
                    || tarch::la::equals(contactPoints(5)(2),x(2)+resolution(2))
                    || tarch::la::equals(contactPoints(6)(2),x(2)+resolution(2))
                    || tarch::la::equals(contactPoints(7)(2),x(2)+resolution(2));
        break;
      default:
        assertion1(false, "_isAlignedAxis is " << _isAlignedAxis);
    }
#else
 assertion1(false, "Only supported for 2D/ 3D!");
#endif

    // if both contact points are on the respective planes, the tube passes right through
    // this cell. Thus, return false.
    if (p1OnPlane && p2OnPlane){
      return false;
    }
  }

  return true;
}


bool peano::geometry::builtin::Tube::
isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  tarch::la::Vector<DIMENSIONS,double> coords(0.0);
  tarch::la::Vector<DIMENSIONS,int> corner(0);
  bool isInside = true;

  // loop over the corners
  for (int i = 0; i < TWO_POWER_D; i++){
    for (int d = 0; d < DIMENSIONS; d++){
      coords(d) = (2*corner(d)-1)*resolution(d);
    }
    coords = coords + x;
    // let N be the point on the middle line of the tube, such that (x-N) is orthogonal to the middle line.
    // Then N = P1 + lambda*(P2-P1)
    double lambda = tarch::la::dot( (coords-_p1),_middleLine)/(tarch::la::dot(_middleLine,_middleLine));

    tarch::la::Vector<DIMENSIONS,double> N(_p1 + lambda*_middleLine);
    // compute distance from middle line
    double distance = tarch::la::dot(coords-N,coords-N);

    isInside = isInside && (!(distance > _radius*_radius))
               && (!(lambda<0.0)) && (!(lambda>1.0));

    // go to next corner node
    peano::utils::dInc(corner,2);
  }

  return isInside;
}

bool peano::geometry::builtin::Tube::
isOutsideClosedDomainInverted(const tarch::la::Vector<DIMENSIONS,double>& x){
  // let N be the point on the middle line of the tube, such that (x-N) is orthogonal to the middle line.
  // Then N = P1 + lambda*(P2-P1)
  double lambda = tarch::la::dot( (x-_p1),_middleLine)/(tarch::la::dot(_middleLine,_middleLine));
  tarch::la::Vector<DIMENSIONS,double> N(_p1 + lambda*_middleLine);
  // compute distance from middle line
  double distance = tarch::la::dot(x-N,x-N);

  // if the (squared) distance is smaller than the radius^2 and the lambda is in the range from 0 to 1,
  // this point is inside the tube structure. As in the inverted case, the inside of the tube is declared
  // as outside, we return true and false otherwise
  return ( (distance<_radius*_radius) && (lambda>0.0) && (lambda<1.0) );
}


bool peano::geometry::builtin::Tube::
isOutsideClosedDomainNotInverted(const tarch::la::Vector<DIMENSIONS,double>& x){
  // let N be the point on the middle line of the tube, such that (x-N) is orthogonal to the middle line.
  // Then N = P1 + lambda*(P2-P1)
  double lambda = tarch::la::dot( (x-_p1),_middleLine)/(tarch::la::dot(_middleLine,_middleLine));

  // compute distance from middle line
  tarch::la::Vector<DIMENSIONS,double> N(_p1 + lambda*_middleLine);
  double distance = tarch::la::dot(x-N,x-N);
  return ( (distance>_radius*_radius) || (lambda < 0.0) || (lambda > 1.0) );
}


int peano::geometry::builtin::Tube::
isAlignedAxis(tarch::la::Vector<DIMENSIONS,double> axis) const {
  int index = -1;
  for (int i = 0; i < DIMENSIONS; i++){
    bool allZero = true;
    for (int j = 0; j < DIMENSIONS; j++){
      if (j != i){
        allZero = allZero && tarch::la::equals(axis(j),0.0);
      }
    }
    if (allZero){
      logInfo("isAlignedAxis()", "Tube is aligned with axis " << i);
      index = i;
      return index;
    }
  }

  return index;
}
