#include "peano/kernel/regulargrid/tests/records/TestState.h"

peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::PersistentRecords() {
   
}


peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells),
_gridIsStationary(gridIsStationary) {
   
}


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::getGridIsStationary() const {
   return _gridIsStationary;
}



void peano::kernel::regulargrid::tests::records::TestState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   _gridIsStationary = gridIsStationary;
}


peano::kernel::regulargrid::tests::records::TestState::TestState() {
   
}


peano::kernel::regulargrid::tests::records::TestState::TestState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
   
}


peano::kernel::regulargrid::tests::records::TestState::TestState(const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   
}


peano::kernel::regulargrid::tests::records::TestState::~TestState() { }


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestState::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::kernel::regulargrid::tests::records::TestState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::kernel::regulargrid::tests::records::TestState::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::kernel::regulargrid::tests::records::TestState::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::kernel::regulargrid::tests::records::TestState::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::kernel::regulargrid::tests::records::TestState::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::kernel::regulargrid::tests::records::TestState::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::kernel::regulargrid::tests::records::TestState::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::kernel::regulargrid::tests::records::TestState::getGridIsStationary() const {
   return _persistentRecords._gridIsStationary;
}



void peano::kernel::regulargrid::tests::records::TestState::setGridIsStationary(const bool& gridIsStationary) {
   _persistentRecords._gridIsStationary = gridIsStationary;
}




std::string peano::kernel::regulargrid::tests::records::TestState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::kernel::regulargrid::tests::records::TestState::toString (std::ostream& out) const {
   out << "("; 
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


peano::kernel::regulargrid::tests::records::TestState::PersistentRecords peano::kernel::regulargrid::tests::records::TestState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::kernel::regulargrid::tests::records::TestState::Packed peano::kernel::regulargrid::tests::records::TestState::convert() const{
   return TestState::Packed(
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
   
   tarch::logging::Log peano::kernel::regulargrid::tests::records::TestState::_log( "peano::kernel::regulargrid::tests::records::TestState" );
   
   MPI_Datatype peano::kernel::regulargrid::tests::records::TestState::Datatype = 0;
   
   
   void peano::kernel::regulargrid::tests::records::TestState::initDatatype() {
      const int Attributes = 8;
      MPI_Datatype subtypes[Attributes] = {
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
      TestState dummyTestState[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]._persistentRecords._meshWidth[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]._persistentRecords._numberOfInnerCells))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]._persistentRecords._numberOfOuterCells))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestState[0]._persistentRecords._gridIsStationary))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyTestState[1]._persistentRecords._meshWidth[0])),     &disp[7] );
//      MPI_Address( const_cast<void*>(static_cast<const void*>(dummyTestState[1]._persistentRecords._meshWidth.data())), 		&disp[7] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestState::Datatype );
      MPI_Type_commit( &TestState::Datatype );
      
   }
   
   
   void peano::kernel::regulargrid::tests::records::TestState::shutdownDatatype() {
      MPI_Type_free( &TestState::Datatype );
      
   }
   
   void peano::kernel::regulargrid::tests::records::TestState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::kernel::regulargrid::tests::records::TestState "
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
            msg << "testing for finished send task for peano::kernel::regulargrid::tests::records::TestState "
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
            "peano::kernel::regulargrid::tests::records::TestState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::tests::records::TestState",
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
   
   
   
   void peano::kernel::regulargrid::tests::records::TestState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::kernel::regulargrid::tests::records::TestState from node "
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
            msg << "testing for finished receive task for peano::kernel::regulargrid::tests::records::TestState failed: "
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
            "peano::kernel::regulargrid::tests::records::TestState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::tests::records::TestState",
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
   
   
   
   bool peano::kernel::regulargrid::tests::records::TestState::isMessageInQueue(int tag) {
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
   
   int peano::kernel::regulargrid::tests::records::TestState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells) {
   setGridIsStationary(gridIsStationary);
   assertion((1 < (8 * sizeof(short int))));
   
}


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::kernel::regulargrid::tests::records::TestStatePacked::TestStatePacked() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::kernel::regulargrid::tests::records::TestStatePacked::TestStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::kernel::regulargrid::tests::records::TestStatePacked::TestStatePacked(const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::kernel::regulargrid::tests::records::TestStatePacked::~TestStatePacked() { }


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::tests::records::TestState::Packed::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::kernel::regulargrid::tests::records::TestState::Packed::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::kernel::regulargrid::tests::records::TestState::Packed::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::kernel::regulargrid::tests::records::TestState::Packed::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::kernel::regulargrid::tests::records::TestState::Packed::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::kernel::regulargrid::tests::records::TestState::Packed::toString (std::ostream& out) const {
   out << "("; 
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


peano::kernel::regulargrid::tests::records::TestState::Packed::PersistentRecords peano::kernel::regulargrid::tests::records::TestState::Packed::getPersistentRecords() const {
   return _persistentRecords;
}

peano::kernel::regulargrid::tests::records::TestState peano::kernel::regulargrid::tests::records::TestState::Packed::convert() const{
   return TestState(
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
   
   tarch::logging::Log peano::kernel::regulargrid::tests::records::TestState::Packed::_log( "peano::kernel::regulargrid::tests::records::TestState::Packed" );
   
   MPI_Datatype peano::kernel::regulargrid::tests::records::TestState::Packed::Datatype = 0;
   
   
   void peano::kernel::regulargrid::tests::records::TestState::Packed::initDatatype() {
      const int Attributes = 8;
      MPI_Datatype subtypes[Attributes] = {
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
      TestState::Packed dummyTestStatePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyTestStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyTestStatePacked[1]._persistentRecords._meshWidth[0])),     &disp[7] );
//      MPI_Address( const_cast<void*>(static_cast<const void*>(dummyTestStatePacked[1]._persistentRecords._meshWidth.data())), 		&disp[7] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &TestState::Packed::Datatype );
      MPI_Type_commit( &TestState::Packed::Datatype );
      
   }
   
   
   void peano::kernel::regulargrid::tests::records::TestState::Packed::shutdownDatatype() {
      MPI_Type_free( &TestState::Packed::Datatype );
      
   }
   
   void peano::kernel::regulargrid::tests::records::TestState::Packed::send(int destination, int tag) {
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
         msg << "was not able to send message peano::kernel::regulargrid::tests::records::TestState::Packed "
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
            msg << "testing for finished send task for peano::kernel::regulargrid::tests::records::TestState::Packed "
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
            "peano::kernel::regulargrid::tests::records::TestState::Packed",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::tests::records::TestState::Packed",
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
   
   
   
   void peano::kernel::regulargrid::tests::records::TestState::Packed::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::kernel::regulargrid::tests::records::TestState::Packed from node "
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
            msg << "testing for finished receive task for peano::kernel::regulargrid::tests::records::TestState::Packed failed: "
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
            "peano::kernel::regulargrid::tests::records::TestState::Packed",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::tests::records::TestState::Packed",
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
   
   
   
   bool peano::kernel::regulargrid::tests::records::TestState::Packed::isMessageInQueue(int tag) {
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
   
   int peano::kernel::regulargrid::tests::records::TestState::Packed::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



