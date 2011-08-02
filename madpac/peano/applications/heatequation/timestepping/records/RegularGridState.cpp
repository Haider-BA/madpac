#include "peano/applications/heatequation/timestepping/records/RegularGridState.h"

peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_omega(omega),
_updateUMax(updateUMax),
_updateUH(updateUH),
_uMax(uMax),
_uH(uH),
_uGlobalMax(uGlobalMax),
_uGlobalH(uGlobalH),
_timeStep(timeStep),
_timeStepSize(timeStepSize),
_time(time),
_numberOfStencilUpdates(numberOfStencilUpdates),
_minimalAllowedMeshSize(minimalAllowedMeshSize),
_maximalAllowedMeshSize(maximalAllowedMeshSize),
_activeLevel(activeLevel),
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells),
_gridIsStationary(gridIsStationary) {
   
}


double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getOmega() const {
   return _omega;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setOmega(const double& omega) {
   _omega = omega;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getUpdateUMax() const {
   return _updateUMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setUpdateUMax(const double& updateUMax) {
   _updateUMax = updateUMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getUpdateUH() const {
   return _updateUH;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setUpdateUH(const double& updateUH) {
   _updateUH = updateUH;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getUMax() const {
   return _uMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setUMax(const double& uMax) {
   _uMax = uMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getUH() const {
   return _uH;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setUH(const double& uH) {
   _uH = uH;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getUGlobalMax() const {
   return _uGlobalMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setUGlobalMax(const double& uGlobalMax) {
   _uGlobalMax = uGlobalMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getUGlobalH() const {
   return _uGlobalH;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setUGlobalH(const double& uGlobalH) {
   _uGlobalH = uGlobalH;
}



int peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getTimeStep() const {
   return _timeStep;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setTimeStep(const int& timeStep) {
   _timeStep = timeStep;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getTimeStepSize() const {
   return _timeStepSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setTimeStepSize(const double& timeStepSize) {
   _timeStepSize = timeStepSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getTime() const {
   return _time;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setTime(const double& time) {
   _time = time;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getNumberOfStencilUpdates() const {
   return _numberOfStencilUpdates;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
   _numberOfStencilUpdates = numberOfStencilUpdates;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getMinimalAllowedMeshSize() const {
   return _minimalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
   _minimalAllowedMeshSize = minimalAllowedMeshSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getMaximalAllowedMeshSize() const {
   return _maximalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
   _maximalAllowedMeshSize = maximalAllowedMeshSize;
}



int peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getActiveLevel() const {
   return _activeLevel;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setActiveLevel(const int& activeLevel) {
   _activeLevel = activeLevel;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::getGridIsStationary() const {
   return _gridIsStationary;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   _gridIsStationary = gridIsStationary;
}


peano::applications::heatequation::timestepping::records::RegularGridState::RegularGridState() {
   
}


peano::applications::heatequation::timestepping::records::RegularGridState::RegularGridState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._omega, persistentRecords._updateUMax, persistentRecords._updateUH, persistentRecords._uMax, persistentRecords._uH, persistentRecords._uGlobalMax, persistentRecords._uGlobalH, persistentRecords._timeStep, persistentRecords._timeStepSize, persistentRecords._time, persistentRecords._numberOfStencilUpdates, persistentRecords._minimalAllowedMeshSize, persistentRecords._maximalAllowedMeshSize, persistentRecords._activeLevel, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
   
}


peano::applications::heatequation::timestepping::records::RegularGridState::RegularGridState(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(omega, updateUMax, updateUH, uMax, uH, uGlobalMax, uGlobalH, timeStep, timeStepSize, time, numberOfStencilUpdates, minimalAllowedMeshSize, maximalAllowedMeshSize, activeLevel, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   
}


peano::applications::heatequation::timestepping::records::RegularGridState::~RegularGridState() { }


double peano::applications::heatequation::timestepping::records::RegularGridState::getOmega() const {
   return _persistentRecords._omega;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setOmega(const double& omega) {
   _persistentRecords._omega = omega;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getUpdateUMax() const {
   return _persistentRecords._updateUMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setUpdateUMax(const double& updateUMax) {
   _persistentRecords._updateUMax = updateUMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getUpdateUH() const {
   return _persistentRecords._updateUH;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setUpdateUH(const double& updateUH) {
   _persistentRecords._updateUH = updateUH;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getUMax() const {
   return _persistentRecords._uMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setUMax(const double& uMax) {
   _persistentRecords._uMax = uMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getUH() const {
   return _persistentRecords._uH;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setUH(const double& uH) {
   _persistentRecords._uH = uH;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getUGlobalMax() const {
   return _persistentRecords._uGlobalMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setUGlobalMax(const double& uGlobalMax) {
   _persistentRecords._uGlobalMax = uGlobalMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getUGlobalH() const {
   return _persistentRecords._uGlobalH;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setUGlobalH(const double& uGlobalH) {
   _persistentRecords._uGlobalH = uGlobalH;
}



int peano::applications::heatequation::timestepping::records::RegularGridState::getTimeStep() const {
   return _persistentRecords._timeStep;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setTimeStep(const int& timeStep) {
   _persistentRecords._timeStep = timeStep;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getTimeStepSize() const {
   return _persistentRecords._timeStepSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setTimeStepSize(const double& timeStepSize) {
   _persistentRecords._timeStepSize = timeStepSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getTime() const {
   return _persistentRecords._time;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setTime(const double& time) {
   _persistentRecords._time = time;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getNumberOfStencilUpdates() const {
   return _persistentRecords._numberOfStencilUpdates;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
   _persistentRecords._numberOfStencilUpdates = numberOfStencilUpdates;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getMinimalAllowedMeshSize() const {
   return _persistentRecords._minimalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
   _persistentRecords._minimalAllowedMeshSize = minimalAllowedMeshSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getMaximalAllowedMeshSize() const {
   return _persistentRecords._maximalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
   _persistentRecords._maximalAllowedMeshSize = maximalAllowedMeshSize;
}



int peano::applications::heatequation::timestepping::records::RegularGridState::getActiveLevel() const {
   return _persistentRecords._activeLevel;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setActiveLevel(const int& activeLevel) {
   _persistentRecords._activeLevel = activeLevel;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridState::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::heatequation::timestepping::records::RegularGridState::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::heatequation::timestepping::records::RegularGridState::getGridIsStationary() const {
   return _persistentRecords._gridIsStationary;
}



void peano::applications::heatequation::timestepping::records::RegularGridState::setGridIsStationary(const bool& gridIsStationary) {
   _persistentRecords._gridIsStationary = gridIsStationary;
}




std::string peano::applications::heatequation::timestepping::records::RegularGridState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridState::toString (std::ostream& out) const {
   out << "("; 
   out << "omega:" << getOmega();
   out << ",";
   out << "updateUMax:" << getUpdateUMax();
   out << ",";
   out << "updateUH:" << getUpdateUH();
   out << ",";
   out << "uMax:" << getUMax();
   out << ",";
   out << "uH:" << getUH();
   out << ",";
   out << "uGlobalMax:" << getUGlobalMax();
   out << ",";
   out << "uGlobalH:" << getUGlobalH();
   out << ",";
   out << "timeStep:" << getTimeStep();
   out << ",";
   out << "timeStepSize:" << getTimeStepSize();
   out << ",";
   out << "time:" << getTime();
   out << ",";
   out << "numberOfStencilUpdates:" << getNumberOfStencilUpdates();
   out << ",";
   out << "minimalAllowedMeshSize:" << getMinimalAllowedMeshSize();
   out << ",";
   out << "maximalAllowedMeshSize:" << getMaximalAllowedMeshSize();
   out << ",";
   out << "activeLevel:" << getActiveLevel();
   out << ",";
   out << "meshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMeshWidth(i) << ",";
   }
   out << getMeshWidth(DIMENSIONS-1) << "]";
   out << ",";
   out << "numberOfInnerVertices:" << getNumberOfInnerVertices();
   out << ",";
   out << "numberOfBoundaryVertices:" << getNumberOfBoundaryVertices();
   out << ",";
   out << "numberOfOuterVertices:" << getNumberOfOuterVertices();
   out << ",";
   out << "numberOfInnerCells:" << getNumberOfInnerCells();
   out << ",";
   out << "numberOfOuterCells:" << getNumberOfOuterCells();
   out << ",";
   out << "gridIsStationary:" << getGridIsStationary();
   out <<  ")";
}


peano::applications::heatequation::timestepping::records::RegularGridState::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridStatePacked peano::applications::heatequation::timestepping::records::RegularGridState::convert() const{
   return RegularGridStatePacked(
      getOmega(),
      getUpdateUMax(),
      getUpdateUH(),
      getUMax(),
      getUH(),
      getUGlobalMax(),
      getUGlobalH(),
      getTimeStep(),
      getTimeStepSize(),
      getTime(),
      getNumberOfStencilUpdates(),
      getMinimalAllowedMeshSize(),
      getMaximalAllowedMeshSize(),
      getActiveLevel(),
      getMeshWidth(),
      getNumberOfInnerVertices(),
      getNumberOfBoundaryVertices(),
      getNumberOfOuterVertices(),
      getNumberOfInnerCells(),
      getNumberOfOuterCells(),
      getGridIsStationary()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridState::_log( "peano::applications::heatequation::timestepping::records::RegularGridState" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridState::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridState::initDatatype() {
      const int Attributes = 22;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //omega
         MPI_DOUBLE,		 //updateUMax
         MPI_DOUBLE,		 //updateUH
         MPI_DOUBLE,		 //uMax
         MPI_DOUBLE,		 //uH
         MPI_DOUBLE,		 //uGlobalMax
         MPI_DOUBLE,		 //uGlobalH
         MPI_INT,		 //timeStep
         MPI_DOUBLE,		 //timeStepSize
         MPI_DOUBLE,		 //time
         MPI_DOUBLE,		 //numberOfStencilUpdates
         MPI_DOUBLE,		 //minimalAllowedMeshSize
         MPI_DOUBLE,		 //maximalAllowedMeshSize
         MPI_INT,		 //activeLevel
         MPI_DOUBLE,		 //meshWidth
         MPI_DOUBLE,		 //numberOfInnerVertices
         MPI_DOUBLE,		 //numberOfBoundaryVertices
         MPI_DOUBLE,		 //numberOfOuterVertices
         MPI_DOUBLE,		 //numberOfInnerCells
         MPI_DOUBLE,		 //numberOfOuterCells
         MPI_CHAR,		 //gridIsStationary
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //omega
         1,		 //updateUMax
         1,		 //updateUH
         1,		 //uMax
         1,		 //uH
         1,		 //uGlobalMax
         1,		 //uGlobalH
         1,		 //timeStep
         1,		 //timeStepSize
         1,		 //time
         1,		 //numberOfStencilUpdates
         1,		 //minimalAllowedMeshSize
         1,		 //maximalAllowedMeshSize
         1,		 //activeLevel
         DIMENSIONS,		 //meshWidth
         1,		 //numberOfInnerVertices
         1,		 //numberOfBoundaryVertices
         1,		 //numberOfOuterVertices
         1,		 //numberOfInnerCells
         1,		 //numberOfOuterCells
         1,		 //gridIsStationary
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridState dummyRegularGridState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._omega))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._updateUMax))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._updateUH))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._uMax))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._uH))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._uGlobalMax))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._uGlobalH))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._timeStep))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._timeStepSize))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._time))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfStencilUpdates))), 		&disp[10] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._minimalAllowedMeshSize))), 		&disp[11] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._maximalAllowedMeshSize))), 		&disp[12] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._activeLevel))), 		&disp[13] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._meshWidth[0]))), 		&disp[14] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[15] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[16] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[17] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfInnerCells))), 		&disp[18] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfOuterCells))), 		&disp[19] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._gridIsStationary))), 		&disp[20] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[1]._persistentRecords._omega))), 		&disp[21] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridState::Datatype );
      MPI_Type_commit( &RegularGridState::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridState::shutdownDatatype() {
      MPI_Type_free( &RegularGridState::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridState::send(int destination, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      #ifdef Asserts
      _senderRank = -1;
      #endif
      
      result = MPI_Isend(
         this, 1, Datatype, destination,
         tag, tarch::parallel::Node::getInstance().getCommunicator(),
         sendRequestHandle
      );
      if  (result!=MPI_SUCCESS) {
         std::ostringstream msg;
         msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridState "
         << toString()
         << " to node " << destination
         << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "send(int)",msg.str() );
      }
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridState "
            << toString()
            << " sent to node " << destination
            << " failed: " << tarch::parallel::MPIReturnValueToString(result);
            _log.error("send(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "peano::applications::heatequation::timestepping::records::RegularGridState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridState",
            "send(int)", destination
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      #ifdef Debug
      _log.debug("send(int,int)", "sent " + toString() );
      #endif
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridState::receive(int source, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      result = MPI_Irecv(
         this, 1, Datatype, source, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), sendRequestHandle
      );
      if ( result != MPI_SUCCESS ) {
         std::ostringstream msg;
         msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridState from node "
         << source << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "receive(int)", msg.str() );
      }
      
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridState failed: "
            << tarch::parallel::MPIReturnValueToString(result);
            _log.error("receive(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "peano::applications::heatequation::timestepping::records::RegularGridState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridState",
            "receive(int)", source
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      
      _senderRank = status.MPI_SOURCE;
      #ifdef Debug
      _log.debug("receive(int,int)", "received " + toString() ); 
      #endif
      
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::RegularGridState::isMessageInQueue(int tag) {
      MPI_Status status;
      int  flag        = 0;
      MPI_Iprobe(
         MPI_ANY_SOURCE, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), &flag, &status
      );
      if (flag) {
         int  messageCounter;
         MPI_Get_count(&status, Datatype, &messageCounter);
         return messageCounter > 0;
      }
      else return false;
      
   }
   
   int peano::applications::heatequation::timestepping::records::RegularGridState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::PersistentRecords(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_omega(omega),
_updateUMax(updateUMax),
_updateUH(updateUH),
_uMax(uMax),
_uH(uH),
_uGlobalMax(uGlobalMax),
_uGlobalH(uGlobalH),
_timeStep(timeStep),
_timeStepSize(timeStepSize),
_time(time),
_numberOfStencilUpdates(numberOfStencilUpdates),
_minimalAllowedMeshSize(minimalAllowedMeshSize),
_maximalAllowedMeshSize(maximalAllowedMeshSize),
_activeLevel(activeLevel),
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells) {
   setGridIsStationary(gridIsStationary);
   assertion((1 < (8 * sizeof(short int))));
   
}


double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getOmega() const {
   return _omega;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setOmega(const double& omega) {
   _omega = omega;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getUpdateUMax() const {
   return _updateUMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setUpdateUMax(const double& updateUMax) {
   _updateUMax = updateUMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getUpdateUH() const {
   return _updateUH;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setUpdateUH(const double& updateUH) {
   _updateUH = updateUH;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getUMax() const {
   return _uMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setUMax(const double& uMax) {
   _uMax = uMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getUH() const {
   return _uH;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setUH(const double& uH) {
   _uH = uH;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getUGlobalMax() const {
   return _uGlobalMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setUGlobalMax(const double& uGlobalMax) {
   _uGlobalMax = uGlobalMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getUGlobalH() const {
   return _uGlobalH;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setUGlobalH(const double& uGlobalH) {
   _uGlobalH = uGlobalH;
}



int peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getTimeStep() const {
   return _timeStep;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setTimeStep(const int& timeStep) {
   _timeStep = timeStep;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getTimeStepSize() const {
   return _timeStepSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setTimeStepSize(const double& timeStepSize) {
   _timeStepSize = timeStepSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getTime() const {
   return _time;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setTime(const double& time) {
   _time = time;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getNumberOfStencilUpdates() const {
   return _numberOfStencilUpdates;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
   _numberOfStencilUpdates = numberOfStencilUpdates;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getMinimalAllowedMeshSize() const {
   return _minimalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
   _minimalAllowedMeshSize = minimalAllowedMeshSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getMaximalAllowedMeshSize() const {
   return _maximalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
   _maximalAllowedMeshSize = maximalAllowedMeshSize;
}



int peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getActiveLevel() const {
   return _activeLevel;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setActiveLevel(const int& activeLevel) {
   _activeLevel = activeLevel;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::heatequation::timestepping::records::RegularGridStatePacked::RegularGridStatePacked() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridStatePacked::RegularGridStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._omega, persistentRecords._updateUMax, persistentRecords._updateUH, persistentRecords._uMax, persistentRecords._uH, persistentRecords._uGlobalMax, persistentRecords._uGlobalH, persistentRecords._timeStep, persistentRecords._timeStepSize, persistentRecords._time, persistentRecords._numberOfStencilUpdates, persistentRecords._minimalAllowedMeshSize, persistentRecords._maximalAllowedMeshSize, persistentRecords._activeLevel, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridStatePacked::RegularGridStatePacked(const double& omega, const double& updateUMax, const double& updateUH, const double& uMax, const double& uH, const double& uGlobalMax, const double& uGlobalH, const int& timeStep, const double& timeStepSize, const double& time, const double& numberOfStencilUpdates, const double& minimalAllowedMeshSize, const double& maximalAllowedMeshSize, const int& activeLevel, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(omega, updateUMax, updateUH, uMax, uH, uGlobalMax, uGlobalH, timeStep, timeStepSize, time, numberOfStencilUpdates, minimalAllowedMeshSize, maximalAllowedMeshSize, activeLevel, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::heatequation::timestepping::records::RegularGridStatePacked::~RegularGridStatePacked() { }


double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getOmega() const {
   return _persistentRecords._omega;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setOmega(const double& omega) {
   _persistentRecords._omega = omega;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getUpdateUMax() const {
   return _persistentRecords._updateUMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setUpdateUMax(const double& updateUMax) {
   _persistentRecords._updateUMax = updateUMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getUpdateUH() const {
   return _persistentRecords._updateUH;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setUpdateUH(const double& updateUH) {
   _persistentRecords._updateUH = updateUH;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getUMax() const {
   return _persistentRecords._uMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setUMax(const double& uMax) {
   _persistentRecords._uMax = uMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getUH() const {
   return _persistentRecords._uH;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setUH(const double& uH) {
   _persistentRecords._uH = uH;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getUGlobalMax() const {
   return _persistentRecords._uGlobalMax;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setUGlobalMax(const double& uGlobalMax) {
   _persistentRecords._uGlobalMax = uGlobalMax;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getUGlobalH() const {
   return _persistentRecords._uGlobalH;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setUGlobalH(const double& uGlobalH) {
   _persistentRecords._uGlobalH = uGlobalH;
}



int peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getTimeStep() const {
   return _persistentRecords._timeStep;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setTimeStep(const int& timeStep) {
   _persistentRecords._timeStep = timeStep;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getTimeStepSize() const {
   return _persistentRecords._timeStepSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setTimeStepSize(const double& timeStepSize) {
   _persistentRecords._timeStepSize = timeStepSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getTime() const {
   return _persistentRecords._time;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setTime(const double& time) {
   _persistentRecords._time = time;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getNumberOfStencilUpdates() const {
   return _persistentRecords._numberOfStencilUpdates;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setNumberOfStencilUpdates(const double& numberOfStencilUpdates) {
   _persistentRecords._numberOfStencilUpdates = numberOfStencilUpdates;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getMinimalAllowedMeshSize() const {
   return _persistentRecords._minimalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setMinimalAllowedMeshSize(const double& minimalAllowedMeshSize) {
   _persistentRecords._minimalAllowedMeshSize = minimalAllowedMeshSize;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getMaximalAllowedMeshSize() const {
   return _persistentRecords._maximalAllowedMeshSize;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setMaximalAllowedMeshSize(const double& maximalAllowedMeshSize) {
   _persistentRecords._maximalAllowedMeshSize = maximalAllowedMeshSize;
}



int peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getActiveLevel() const {
   return _persistentRecords._activeLevel;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setActiveLevel(const int& activeLevel) {
   _persistentRecords._activeLevel = activeLevel;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::heatequation::timestepping::records::RegularGridStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "omega:" << getOmega();
   out << ",";
   out << "updateUMax:" << getUpdateUMax();
   out << ",";
   out << "updateUH:" << getUpdateUH();
   out << ",";
   out << "uMax:" << getUMax();
   out << ",";
   out << "uH:" << getUH();
   out << ",";
   out << "uGlobalMax:" << getUGlobalMax();
   out << ",";
   out << "uGlobalH:" << getUGlobalH();
   out << ",";
   out << "timeStep:" << getTimeStep();
   out << ",";
   out << "timeStepSize:" << getTimeStepSize();
   out << ",";
   out << "time:" << getTime();
   out << ",";
   out << "numberOfStencilUpdates:" << getNumberOfStencilUpdates();
   out << ",";
   out << "minimalAllowedMeshSize:" << getMinimalAllowedMeshSize();
   out << ",";
   out << "maximalAllowedMeshSize:" << getMaximalAllowedMeshSize();
   out << ",";
   out << "activeLevel:" << getActiveLevel();
   out << ",";
   out << "meshWidth:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getMeshWidth(i) << ",";
   }
   out << getMeshWidth(DIMENSIONS-1) << "]";
   out << ",";
   out << "numberOfInnerVertices:" << getNumberOfInnerVertices();
   out << ",";
   out << "numberOfBoundaryVertices:" << getNumberOfBoundaryVertices();
   out << ",";
   out << "numberOfOuterVertices:" << getNumberOfOuterVertices();
   out << ",";
   out << "numberOfInnerCells:" << getNumberOfInnerCells();
   out << ",";
   out << "numberOfOuterCells:" << getNumberOfOuterCells();
   out << ",";
   out << "gridIsStationary:" << getGridIsStationary();
   out <<  ")";
}


peano::applications::heatequation::timestepping::records::RegularGridStatePacked::PersistentRecords peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::heatequation::timestepping::records::RegularGridState peano::applications::heatequation::timestepping::records::RegularGridStatePacked::convert() const{
   return RegularGridState(
      getOmega(),
      getUpdateUMax(),
      getUpdateUH(),
      getUMax(),
      getUH(),
      getUGlobalMax(),
      getUGlobalH(),
      getTimeStep(),
      getTimeStepSize(),
      getTime(),
      getNumberOfStencilUpdates(),
      getMinimalAllowedMeshSize(),
      getMaximalAllowedMeshSize(),
      getActiveLevel(),
      getMeshWidth(),
      getNumberOfInnerVertices(),
      getNumberOfBoundaryVertices(),
      getNumberOfOuterVertices(),
      getNumberOfInnerCells(),
      getNumberOfOuterCells(),
      getGridIsStationary()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::heatequation::timestepping::records::RegularGridStatePacked::_log( "peano::applications::heatequation::timestepping::records::RegularGridStatePacked" );
   
   MPI_Datatype peano::applications::heatequation::timestepping::records::RegularGridStatePacked::Datatype = 0;
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::initDatatype() {
      const int Attributes = 22;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //omega
         MPI_DOUBLE,		 //updateUMax
         MPI_DOUBLE,		 //updateUH
         MPI_DOUBLE,		 //uMax
         MPI_DOUBLE,		 //uH
         MPI_DOUBLE,		 //uGlobalMax
         MPI_DOUBLE,		 //uGlobalH
         MPI_INT,		 //timeStep
         MPI_DOUBLE,		 //timeStepSize
         MPI_DOUBLE,		 //time
         MPI_DOUBLE,		 //numberOfStencilUpdates
         MPI_DOUBLE,		 //minimalAllowedMeshSize
         MPI_DOUBLE,		 //maximalAllowedMeshSize
         MPI_INT,		 //activeLevel
         MPI_DOUBLE,		 //meshWidth
         MPI_DOUBLE,		 //numberOfInnerVertices
         MPI_DOUBLE,		 //numberOfBoundaryVertices
         MPI_DOUBLE,		 //numberOfOuterVertices
         MPI_DOUBLE,		 //numberOfInnerCells
         MPI_DOUBLE,		 //numberOfOuterCells
         MPI_SHORT,		 //_packedRecords0
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //omega
         1,		 //updateUMax
         1,		 //updateUH
         1,		 //uMax
         1,		 //uH
         1,		 //uGlobalMax
         1,		 //uGlobalH
         1,		 //timeStep
         1,		 //timeStepSize
         1,		 //time
         1,		 //numberOfStencilUpdates
         1,		 //minimalAllowedMeshSize
         1,		 //maximalAllowedMeshSize
         1,		 //activeLevel
         DIMENSIONS,		 //meshWidth
         1,		 //numberOfInnerVertices
         1,		 //numberOfBoundaryVertices
         1,		 //numberOfOuterVertices
         1,		 //numberOfInnerCells
         1,		 //numberOfOuterCells
         1,		 //_packedRecords0
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridStatePacked dummyRegularGridStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._omega))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._updateUMax))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._updateUH))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._uMax))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._uH))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._uGlobalMax))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._uGlobalH))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._timeStep))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._timeStepSize))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._time))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfStencilUpdates))), 		&disp[10] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._minimalAllowedMeshSize))), 		&disp[11] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._maximalAllowedMeshSize))), 		&disp[12] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._activeLevel))), 		&disp[13] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[14] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[15] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[16] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[17] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[18] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[19] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[20] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[1]._persistentRecords._omega))), 		&disp[21] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridStatePacked::Datatype );
      MPI_Type_commit( &RegularGridStatePacked::Datatype );
      
   }
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridStatePacked::Datatype );
      
   }
   
   void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::send(int destination, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      #ifdef Asserts
      _senderRank = -1;
      #endif
      
      result = MPI_Isend(
         this, 1, Datatype, destination,
         tag, tarch::parallel::Node::getInstance().getCommunicator(),
         sendRequestHandle
      );
      if  (result!=MPI_SUCCESS) {
         std::ostringstream msg;
         msg << "was not able to send message peano::applications::heatequation::timestepping::records::RegularGridStatePacked "
         << toString()
         << " to node " << destination
         << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "send(int)",msg.str() );
      }
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished send task for peano::applications::heatequation::timestepping::records::RegularGridStatePacked "
            << toString()
            << " sent to node " << destination
            << " failed: " << tarch::parallel::MPIReturnValueToString(result);
            _log.error("send(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "peano::applications::heatequation::timestepping::records::RegularGridStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridStatePacked",
            "send(int)", destination
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      #ifdef Debug
      _log.debug("send(int,int)", "sent " + toString() );
      #endif
      
   }
   
   
   
   void peano::applications::heatequation::timestepping::records::RegularGridStatePacked::receive(int source, int tag) {
      MPI_Request* sendRequestHandle = new MPI_Request();
      MPI_Status   status;
      int          flag = 0;
      int          result;
      
      clock_t      timeOutWarning   = -1;
      clock_t      timeOutShutdown  = -1;
      bool         triggeredTimeoutWarning = false;
      
      result = MPI_Irecv(
         this, 1, Datatype, source, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), sendRequestHandle
      );
      if ( result != MPI_SUCCESS ) {
         std::ostringstream msg;
         msg << "failed to start to receive peano::applications::heatequation::timestepping::records::RegularGridStatePacked from node "
         << source << ": " << tarch::parallel::MPIReturnValueToString(result);
         _log.error( "receive(int)", msg.str() );
      }
      
      result = MPI_Test( sendRequestHandle, &flag, &status );
      while (!flag) {
         if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
         if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
         result = MPI_Test( sendRequestHandle, &flag, &status );
         if (result!=MPI_SUCCESS) {
            std::ostringstream msg;
            msg << "testing for finished receive task for peano::applications::heatequation::timestepping::records::RegularGridStatePacked failed: "
            << tarch::parallel::MPIReturnValueToString(result);
            _log.error("receive(int)", msg.str() );
         }
         
         // deadlock aspect
         if (
            tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
            (clock()>timeOutWarning) &&
            (!triggeredTimeoutWarning)
         ) {
            tarch::parallel::Node::getInstance().writeTimeOutWarning(
            "peano::applications::heatequation::timestepping::records::RegularGridStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::heatequation::timestepping::records::RegularGridStatePacked",
            "receive(int)", source
            );
         }
         tarch::parallel::Node::getInstance().receiveDanglingMessages();
      }
      
      delete sendRequestHandle;
      
      _senderRank = status.MPI_SOURCE;
      #ifdef Debug
      _log.debug("receive(int,int)", "received " + toString() ); 
      #endif
      
   }
   
   
   
   bool peano::applications::heatequation::timestepping::records::RegularGridStatePacked::isMessageInQueue(int tag) {
      MPI_Status status;
      int  flag        = 0;
      MPI_Iprobe(
         MPI_ANY_SOURCE, tag,
         tarch::parallel::Node::getInstance().getCommunicator(), &flag, &status
      );
      if (flag) {
         int  messageCounter;
         MPI_Get_count(&status, Datatype, &messageCounter);
         return messageCounter > 0;
      }
      else return false;
      
   }
   
   int peano::applications::heatequation::timestepping::records::RegularGridStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



