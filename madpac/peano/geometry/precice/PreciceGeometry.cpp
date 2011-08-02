#include "peano/geometry/precice/PreciceGeometry.h"

tarch::logging::Log peano::geometry::precice::PreciceGeometry::_log ("peano::geometry::precice::PreciceGeometry");


peano::geometry::precice::PreciceGeometry::PreciceGeometry (
  ::precice::SolverInterface &interface,
  const int buffersize
)
:
peano::geometry::Geometry(),
_interface(interface),
_buffersize(buffersize),
_meshIDsGeometry(interface.getMeshIDs()),
_counterVolumetricBuffer(0),
_counterPointBuffer(0)
{
  // clear maps
  _volumetricQueryBuffer.clear();
  _pointQueryBuffer.clear();

  // init vector structures
  for (int i = 0; i < _buffersize; i++){
    _volumetricGeometryInformation.push_back( ::precice::VoxelPosition() );
    _pointGeometryInformation.push_back(0);
  }

}


peano::geometry::precice::PreciceGeometry::~PreciceGeometry(){}


bool peano::geometry::precice::PreciceGeometry::isCompletelyOutside(
  const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution
){
  assertion (tarch::la::norm2(resolution) > 0.0);
  return (getGeometryInformationForVolumetricQuery(x,resolution) == ::precice::constants::positionInsideOfGeometry());
}



bool peano::geometry::precice::PreciceGeometry::isCompletelyInside(
   const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution
){
  assertion (tarch::la::norm2(resolution) > 0.0);
  return (getGeometryInformationForVolumetricQuery(x,resolution) == ::precice::constants::positionOutsideOfGeometry());
}



bool peano::geometry::precice::PreciceGeometry::isOutsideClosedDomain(
  const tarch::la::Vector<DIMENSIONS,double>& x
){
  return (getGeometryInformationForPointQuery(x) == ::precice::constants::positionInsideOfGeometry());
}


std::vector<int> peano::geometry::precice::PreciceGeometry::
getMeshIDs(const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &resolution){
  std::map<tarch::la::Vector<2*DIMENSIONS,double>, int, tarch::la::VectorCompare<2*DIMENSIONS> >::iterator it;
  tarch::la::Vector<2*DIMENSIONS,double> volumetricInformation;
  for (int d = 0; d < DIMENSIONS; d++){
    volumetricInformation(2*d) = x(d);
    volumetricInformation(2*d+1) = resolution(d);
  }

  // fill buffer if not already done
  getGeometryInformationForVolumetricQuery(x,resolution);

  // set iterator and return vector with mesh IDs
  it = _volumetricQueryBuffer.find(volumetricInformation);
  assertion(it != _volumetricQueryBuffer.end());
  return _volumetricGeometryInformation[it->second].meshIDs();
}


int peano::geometry::precice::PreciceGeometry::getGeometryInformationForVolumetricQuery(
const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &resolution){
  int geometryInformation;
  std::map<tarch::la::Vector<2*DIMENSIONS,double>, int, tarch::la::VectorCompare<2*DIMENSIONS> >::iterator it;
  tarch::la::Vector<2*DIMENSIONS,double> volumetricInformation;
  for (int d = 0; d < DIMENSIONS; d++){
    volumetricInformation(2*d) = x(d);
    volumetricInformation(2*d+1) = resolution(d);
  }

  // information is contained in buffer, return it
  it = _volumetricQueryBuffer.find(volumetricInformation);

  // if this voxel is contained, get information from buffer
  if (it != _volumetricQueryBuffer.end()){
    geometryInformation = _volumetricGeometryInformation[it->second].position();

  // otherwise, a query is necessary
  } else {

    // get information
    ::precice::VoxelPosition voxelPos =
        _interface.inquireVoxelPosition(tarch::la::raw(x), tarch::la::raw(resolution), false, _meshIDsGeometry);
    geometryInformation = voxelPos.position();

    // remove oldest entry from map
    for (std::map<tarch::la::Vector<2*DIMENSIONS,double>, int, tarch::la::VectorCompare<2*DIMENSIONS> >::iterator i= _volumetricQueryBuffer.begin(); i != _volumetricQueryBuffer.end(); i++){
      // if this is the oldest entry in buffer, remove it...
      if (i->second == _counterVolumetricBuffer){
        _volumetricQueryBuffer.erase(i);
        break;
      }
    }
    // ... and add the new voxel at the same position
    _volumetricQueryBuffer[volumetricInformation] = _counterVolumetricBuffer;
    _volumetricGeometryInformation[_counterVolumetricBuffer] = voxelPos;

    // increment counter TODO general buffer size
    _counterVolumetricBuffer++;
    _counterVolumetricBuffer = _counterVolumetricBuffer%_buffersize;
  }

  return geometryInformation;
}


int peano::geometry::precice::PreciceGeometry::getGeometryInformationForPointQuery(
const tarch::la::Vector<DIMENSIONS,double> &x){
  int geometryInformation;
  std::map<tarch::la::Vector<DIMENSIONS,double>,int>::iterator it;

  // information is contained in buffer, return it
  it = _pointQueryBuffer.find(x);

  // if this voxel is contained, get information from buffer
  if (it != _pointQueryBuffer.end()){
    geometryInformation = _pointGeometryInformation[it->second];

  // otherwise, a query is necessary
  } else {

    // get information
    geometryInformation = _interface.inquirePosition(tarch::la::raw(x),_meshIDsGeometry);

    // remove oldest entry from map
    for (std::map<tarch::la::Vector<DIMENSIONS,double>,int,tarch::la::VectorCompare<DIMENSIONS> >::iterator i= _pointQueryBuffer.begin(); i != _pointQueryBuffer.end(); i++){
      // if this is the oldest entry in buffer, remove it...
      if (i->second == _counterPointBuffer){
        _pointQueryBuffer.erase(i);
        break;
      }
    }
    // ... and add the new voxel at the same position
    _pointQueryBuffer[x] = _counterPointBuffer;
    _pointGeometryInformation[_counterPointBuffer] = geometryInformation;

    // increment counter TODO general buffer size
    _counterPointBuffer++;
    _counterPointBuffer = _counterPointBuffer%_buffersize;
  }

  return geometryInformation;
}
