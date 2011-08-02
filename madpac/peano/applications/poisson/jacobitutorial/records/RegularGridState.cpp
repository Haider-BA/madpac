#include "peano/applications/poisson/jacobitutorial/records/RegularGridState.h"

peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::PersistentRecords(const double& omega, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_omega(omega),
_fileNumber(fileNumber),
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells),
_gridIsStationary(gridIsStationary) {
   
}


double peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getOmega() const {
   return _omega;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setOmega(const double& omega) {
   _omega = omega;
}



int peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getFileNumber() const {
   return _fileNumber;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setFileNumber(const int& fileNumber) {
   _fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::getGridIsStationary() const {
   return _gridIsStationary;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   _gridIsStationary = gridIsStationary;
}


peano::applications::poisson::jacobitutorial::records::RegularGridState::RegularGridState() {
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridState::RegularGridState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._omega, persistentRecords._fileNumber, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridState::RegularGridState(const double& omega, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(omega, fileNumber, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridState::~RegularGridState() { }


double peano::applications::poisson::jacobitutorial::records::RegularGridState::getOmega() const {
   return _persistentRecords._omega;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setOmega(const double& omega) {
   _persistentRecords._omega = omega;
}



int peano::applications::poisson::jacobitutorial::records::RegularGridState::getFileNumber() const {
   return _persistentRecords._fileNumber;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setFileNumber(const int& fileNumber) {
   _persistentRecords._fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::jacobitutorial::records::RegularGridState::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridState::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::poisson::jacobitutorial::records::RegularGridState::getGridIsStationary() const {
   return _persistentRecords._gridIsStationary;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridState::setGridIsStationary(const bool& gridIsStationary) {
   _persistentRecords._gridIsStationary = gridIsStationary;
}




std::string peano::applications::poisson::jacobitutorial::records::RegularGridState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::jacobitutorial::records::RegularGridState::toString (std::ostream& out) const {
   out << "("; 
   out << "omega:" << getOmega();
   out << ",";
   out << "fileNumber:" << getFileNumber();
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


peano::applications::poisson::jacobitutorial::records::RegularGridState::PersistentRecords peano::applications::poisson::jacobitutorial::records::RegularGridState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked peano::applications::poisson::jacobitutorial::records::RegularGridState::convert() const{
   return RegularGridStatePacked(
      getOmega(),
      getFileNumber(),
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
   
   tarch::logging::Log peano::applications::poisson::jacobitutorial::records::RegularGridState::_log( "peano::applications::poisson::jacobitutorial::records::RegularGridState" );
   
   MPI_Datatype peano::applications::poisson::jacobitutorial::records::RegularGridState::Datatype = 0;
   
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridState::initDatatype() {
      const int Attributes = 10;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //omega
         MPI_INT,		 //fileNumber
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
         1,		 //fileNumber
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
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._fileNumber))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._meshWidth[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfInnerCells))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfOuterCells))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._gridIsStationary))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[1]._persistentRecords._omega))), 		&disp[9] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridState::Datatype );
      MPI_Type_commit( &RegularGridState::Datatype );
      
   }
   
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridState::shutdownDatatype() {
      MPI_Type_free( &RegularGridState::Datatype );
      
   }
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::jacobitutorial::records::RegularGridState "
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
            msg << "testing for finished send task for peano::applications::poisson::jacobitutorial::records::RegularGridState "
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
            "peano::applications::poisson::jacobitutorial::records::RegularGridState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::jacobitutorial::records::RegularGridState",
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
   
   
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::jacobitutorial::records::RegularGridState from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::jacobitutorial::records::RegularGridState failed: "
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
            "peano::applications::poisson::jacobitutorial::records::RegularGridState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::jacobitutorial::records::RegularGridState",
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
   
   
   
   bool peano::applications::poisson::jacobitutorial::records::RegularGridState::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::jacobitutorial::records::RegularGridState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::PersistentRecords(const double& omega, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_omega(omega),
_fileNumber(fileNumber),
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells) {
   setGridIsStationary(gridIsStationary);
   assertion((1 < (8 * sizeof(short int))));
   
}


double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getOmega() const {
   return _omega;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setOmega(const double& omega) {
   _omega = omega;
}



int peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getFileNumber() const {
   return _fileNumber;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
   _fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::RegularGridStatePacked() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::RegularGridStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._omega, persistentRecords._fileNumber, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::RegularGridStatePacked(const double& omega, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(omega, fileNumber, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::~RegularGridStatePacked() { }


double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getOmega() const {
   return _persistentRecords._omega;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setOmega(const double& omega) {
   _persistentRecords._omega = omega;
}



int peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getFileNumber() const {
   return _persistentRecords._fileNumber;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setFileNumber(const int& fileNumber) {
   _persistentRecords._fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "omega:" << getOmega();
   out << ",";
   out << "fileNumber:" << getFileNumber();
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


peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::PersistentRecords peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::poisson::jacobitutorial::records::RegularGridState peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::convert() const{
   return RegularGridState(
      getOmega(),
      getFileNumber(),
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
   
   tarch::logging::Log peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::_log( "peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked" );
   
   MPI_Datatype peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::Datatype = 0;
   
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::initDatatype() {
      const int Attributes = 10;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //omega
         MPI_INT,		 //fileNumber
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
         1,		 //fileNumber
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
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._fileNumber))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[1]._persistentRecords._omega))), 		&disp[9] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridStatePacked::Datatype );
      MPI_Type_commit( &RegularGridStatePacked::Datatype );
      
   }
   
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridStatePacked::Datatype );
      
   }
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked "
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
            msg << "testing for finished send task for peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked "
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
            "peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked",
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
   
   
   
   void peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked failed: "
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
            "peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked",
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
   
   
   
   bool peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::poisson::jacobitutorial::records::RegularGridStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



