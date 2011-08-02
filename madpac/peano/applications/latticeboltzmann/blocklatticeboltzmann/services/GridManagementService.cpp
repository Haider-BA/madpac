#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GridManagementService.h"

#include "tarch/services/ServiceFactory.h"
registerService(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService)


peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
GridManagementService():
_vertexData(),
_vertexCounter(0),
_tmpVertexIndex(0),
_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService"){}

peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
~GridManagementService(){
  _vertexData.clear();
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance(){
  static GridManagementService singleton;
  return singleton;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::init(){
  // clear all vertex data
  _vertexData.clear();

  // init temporary vertices (2^D)
  for (unsigned int v = 0; v < TWO_POWER_D; v++){
    _vertexData[v] = VertexData();
    std::map<unsigned int, VertexData>::iterator it = _vertexData.find(v);

    for (unsigned int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
      for (unsigned int j = 0; j < LB_CURRENT_DIR; j++){
        it->second._pdf(i*LB_CURRENT_DIR+j) = -1.0;
      }
      it->second._density(i) = 0.0;
      for (unsigned int d = 0; d < DIMENSIONS; d++){
        it->second._velocity(i*DIMENSIONS+d) = 0.0;
      }
      it->second._inner[i] = true;
      it->second._boundary[i] = false;
    }

    _vertexCounter++;
  }

  // set iterator to first vertex
  _vertexDataBuffer = _vertexData.find(0);
  // set tmp-vertex index to first vertex
  _tmpVertexIndex = 0;
}


unsigned int peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
createVertex(const tarch::la::Vector<DIMENSIONS,double>&x, const tarch::la::Vector<DIMENSIONS,double> &h){
  tarch::la::Vector<DIMENSIONS,double> position(0.0);
  tarch::la::Vector<DIMENSIONS,double> meshSize ((1.0/((double) LB_BLOCKSIZE))*h(0));
#if Debug
  for (int d = 1; d < DIMENSIONS; d++){
    assertion2(tarch::la::equals(h(d),h(0)), h(0), h(d));
  }
#endif
  int cellCounter = 0;


  _vertexData[_vertexCounter] = VertexData();
  _vertexDataBuffer = _vertexData.find(_vertexCounter);

  // initialise nonlocalstreaming
  for (int i = 0; i < TWO_POWER_D; i++){
    _vertexDataBuffer->second._isNonLocalStreamingFinished[i] = false;
  }


  // initialise boundary flags

  // for boundary vertices: check for boundary states
#if (DIMENSIONS == 3)
  for (int zv = 0; zv < LB_BLOCKSIZE; zv++){
    position(2) = x(2) - 0.5*h(2) + 0.5*meshSize(2) + zv*meshSize(2);
#endif
    for (int yv = 0; yv < LB_BLOCKSIZE; yv++){
      position(1) = x(1) - 0.5*h(1) + 0.5*meshSize(1) + yv*meshSize(1);
      for (int xv = 0; xv < LB_BLOCKSIZE; xv++){
        position(0) = x(0) - 0.5*h(0) + 0.5*meshSize(0) + xv*meshSize(0);

        // if the cell is inner, do the same as in createInnerVertex
        if (peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(position,meshSize)){
          logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is completely inside");
          _vertexDataBuffer->second._inner[cellCounter] = true;
          _vertexDataBuffer->second._boundary[cellCounter] = false;
        } else {
          // for outer cells: set inner-flag to false
          if (peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(position)){
            _vertexDataBuffer->second._inner[cellCounter] = false;
            logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is outside closed domain");
          } else {
            _vertexDataBuffer->second._inner[cellCounter] = true;
            logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is not outside closed domain");
          }

          // if the cell is outside and away from the boundary, set boundary flag to false, otherwise true
          if (peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyOutside(position,meshSize)){
            _vertexDataBuffer->second._boundary[cellCounter] = false;
            logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is completely outside");
          } else {
            _vertexDataBuffer->second._boundary[cellCounter] = true;
            logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is not completely outside");
          }
        }
        cellCounter++;
      }
    }
#if (DIMENSIONS == 3)
  }
#endif

  // initialise velocity, density and pdfs
  for (unsigned int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
    // set values to unit density, lattice weights and zero velocity for inner cells
    if (_vertexDataBuffer->second._inner[i]){
      _vertexDataBuffer->second._density(i) = 1.0;

      for (int d = 0; d < DIMENSIONS; d++){
        _vertexDataBuffer->second._velocity(i*DIMENSIONS+d) = 0.0;
        _vertexDataBuffer->second._pdf(i*LB_CURRENT_DIR+d) = peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[d];
      }

      for (int d = DIMENSIONS; d < LB_CURRENT_DIR; d++){
        _vertexDataBuffer->second._pdf(i*LB_CURRENT_DIR+d) = peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[d];
      }
    // set density to zero, velocity to zero and pdfs to zero for outer cells
    } else {
      _vertexDataBuffer->second._density(i) = 0.0;

      for (int d = 0; d < DIMENSIONS; d++){
        _vertexDataBuffer->second._velocity(i*DIMENSIONS+d) = 0.0;
        _vertexDataBuffer->second._pdf(i*LB_CURRENT_DIR+d) = 0.0;
      }

      for (int d = DIMENSIONS; d < LB_CURRENT_DIR; d++){
        _vertexDataBuffer->second._pdf(i*LB_CURRENT_DIR+d) = 0.0;
      }
    }
  }

  // increment vertex counter
  _vertexCounter++;
  return _vertexCounter-1;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
setBoundaryFlagsAndInitialiseUnknownPdfs(
  const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &h,
  const int level,
  const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData){

  // if there is no dynamic change in geometry, do nothing
  if (!multiLevelSimData.getSimData(level).hasDynamicGeometry()){
    return;
  }

  tarch::la::Vector<DIMENSIONS,double> position(0.0);
  tarch::la::Vector<DIMENSIONS,double> meshSize ((1.0/((double) LB_BLOCKSIZE))*h(0));
#if Debug
  for (int d = 1; d < DIMENSIONS; d++){
    assertion(h(d) == h(0));
  }
#endif
  int cellCounter = 0;

  // true, if the pdf values need to be reconstructed
  bool setPdfValues = false;
  // timestep (for rescaling the velocity coming from the ReceiveDataService
  const double dt = multiLevelSimData.getSimData(level).getDt();
  // velocity from ReceiveDataService
  tarch::la::Vector<DIMENSIONS,double> velocityL(0.0);
  // for equilibrium distribution
  tarch::la::Vector<LB_CURRENT_DIR,double> feq(0.0);

  // for boundary vertices: check for boundary states
#if (DIMENSIONS == 3)
  for (int zv = 0; zv < LB_BLOCKSIZE; zv++){
    position(2) = x(2) - 0.5*h(2) + 0.5*meshSize(2) + zv*meshSize(2);
#endif
    for (int yv = 0; yv < LB_BLOCKSIZE; yv++){
      position(1) = x(1) - 0.5*h(1) + 0.5*meshSize(1) + yv*meshSize(1);
      for (int xv = 0; xv < LB_BLOCKSIZE; xv++){
        position(0) = x(0) - 0.5*h(0) + 0.5*meshSize(0) + xv*meshSize(0);

        // check, if we need to consider reflagging at all; if necessary do so.
        // this step is not necessary from the algorithmic point of view. However,
        // otherwise we would need to send geometry queries for each point in the
        // computational domain. Thus, this if-statement saves us from doing so
        // (assuming, that the reflag(x,h) statement has been done in a clever way ;-) )
        if (peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().getReceiveData().reflag(position,meshSize)){

          setPdfValues = false;

          // if the cell is inner, do the same as in createInnerVertex
          if (peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(position,meshSize)){
            logDebug("setBoundaryFlagsAndInitialisePdfs()", "Cell " << cellCounter << ", position " << position << " is completely inside");
            // if this cell changed to an inner cell, compute pdfs
            if ( (!_vertexDataBuffer->second._inner[cellCounter])){
              logDebug("setBoundaryFlagsAndInitialisePdfs()", "Cell " << cellCounter << "changed to inner");
              setPdfValues = true;
            }

            _vertexDataBuffer->second._inner[cellCounter] = true;
            _vertexDataBuffer->second._boundary[cellCounter] = false;
          } else {
            // for outer cells: set inner-flag to false
            if (peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(position)){
              _vertexDataBuffer->second._inner[cellCounter] = false;
              logDebug("setBoundaryFlagsAndInitialisePdfs()", "Cell " << cellCounter << ", position " << position << " is outside closed domain");
            } else {
              // if this cell changed to an inner cell, compute pdfs
              if ( (!_vertexDataBuffer->second._inner[cellCounter])){
                logDebug("setBoundaryFlagsAndInitialisePdfs()", "Cell " << cellCounter << "changed to inner");
                setPdfValues = true;
              }
              _vertexDataBuffer->second._inner[cellCounter] = true;
              logDebug("setBoundaryFlagsAndInitialisePdfs()", "Cell " << cellCounter << ", position " << position << " is not outside closed domain");
            }

            // if the cell is outside and away from the boundary, set boundary flag to false, otherwise true
            if (peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyOutside(position,meshSize)){
              _vertexDataBuffer->second._boundary[cellCounter] = false;
              logDebug("setBoundaryFlagsAndInitialisePdfs()", "Cell " << cellCounter << ", position " << position << " is completely outside");
            } else {
              _vertexDataBuffer->second._boundary[cellCounter] = true;
              logDebug("setBoundaryFlagsAndInitialisePdfs()", "Cell " << cellCounter << ", position " << position << " is not completely outside");
            }
          }

          // set initialise pdf values
          if (setPdfValues){
            // set density to unity, if we could not obtain it from interpolation
            if (tarch::la::equals(_vertexDataBuffer->second._density(cellCounter),0.0)){
              // set density value to unity
              _vertexDataBuffer->second._density(cellCounter) = 1.0;
            }
            // velocity value -> from ReceiveDataService, set it
            velocityL = peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().getReceiveData().getVelocity(position);
            velocityL = velocityL* (dt/meshSize(0));
            for (int d = 0; d < DIMENSIONS; d++){
              _vertexDataBuffer->second._velocity(cellCounter*DIMENSIONS+d) = velocityL(d);
            }

            // compute equilibrium distribution
            peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeFeq(
              _vertexDataBuffer->second._density(cellCounter),velocityL,feq
            );

            // set equ. distribution
            for (int i = 0; i < LB_CURRENT_DIR; i++){
              _vertexDataBuffer->second._pdf(cellCounter*LB_CURRENT_DIR+i) = feq(i);
            }

          } // reconstruction of pdfs (setPdfValues)

          // reset density to 0.0 in near-boundary cells. Important in parallel case.
          // If we do not do this, we may accumulate to much density in these cells when
          // communicating the densityOnBoundary-data of the respective vertex!
          if (   (!_vertexDataBuffer->second._inner[cellCounter])
              && _vertexDataBuffer->second._boundary[cellCounter] ){
            _vertexDataBuffer->second._density(cellCounter) = 0.0;
          }

        } // reflag

        cellCounter++;
      }
    }
#if (DIMENSIONS == 3)
  }
#endif
}



unsigned int peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
destroyVertex(unsigned int vertexNumber){
  _vertexData.erase(vertexNumber);

  return vertexNumber;
}


unsigned int peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
getVertexNumber() const {
  return _vertexDataBuffer->first;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
loadVertex(unsigned int vertexNumber){

  // if we need a temporary vertex...
  if (vertexNumber == 0){

    // take the next one according to the tmp-index and reset its values
    _vertexDataBuffer = _vertexData.find(_tmpVertexIndex);
    for (unsigned int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
      for (unsigned int j = 0; j < LB_CURRENT_DIR; j++){
        _vertexDataBuffer->second._pdf(i*LB_CURRENT_DIR+j) = -1.0;
      }
      _vertexDataBuffer->second._inner[i] = true;
      _vertexDataBuffer->second._boundary[i] = false;
    }

    // increment tmpVertexIndex for next load operation
    _tmpVertexIndex++;
    _tmpVertexIndex = _tmpVertexIndex%TWO_POWER_D;
  } else {
    _vertexDataBuffer = _vertexData.find(vertexNumber);
    if (_vertexDataBuffer == _vertexData.end()){
      logError("loadVertex()", "Could not find vertex " << vertexNumber << "!");
      assertion(false);
    }
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
resetNonLocalStreamingFinished(){
  for (unsigned int i = 0; i < TWO_POWER_D; i++){
    _vertexDataBuffer->second._isNonLocalStreamingFinished[i] = false;
  }
}


std::bitset<TWO_POWER_D>&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getNonLocalStreamingFinished(){
  return _vertexDataBuffer->second._isNonLocalStreamingFinished;
}


std::bitset<LB_BLOCK_NUMBER_OF_CELLS>&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
getBoundary(){
  return _vertexDataBuffer->second._boundary;
}

std::bitset<LB_BLOCK_NUMBER_OF_CELLS>&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
getInner(){
  return _vertexDataBuffer->second._inner;
}

tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
getVelocity(){
  return _vertexDataBuffer->second._velocity;
}


tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
getDensity(){
  return _vertexDataBuffer->second._density;
}


tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::
getPdf(){
  return _vertexDataBuffer->second._pdf;
}
