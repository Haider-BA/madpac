#include "peano/integration/partitioncoupling/builtin/records/ForceTorque.h"

peano::integration::partitioncoupling::builtin::records::ForceTorque::PersistentRecords::PersistentRecords() {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorque::PersistentRecords::PersistentRecords(const tarch::la::Vector<3,double>& translationalForce, const tarch::la::Vector<3,double>& torque):
_translationalForce(translationalForce),
_torque(torque) {
   
}


tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorque::PersistentRecords::getTranslationalForce() const {
   return _translationalForce;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorque::PersistentRecords::setTranslationalForce(const tarch::la::Vector<3,double>& translationalForce) {
   _translationalForce = (translationalForce);
}



tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorque::PersistentRecords::getTorque() const {
   return _torque;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorque::PersistentRecords::setTorque(const tarch::la::Vector<3,double>& torque) {
   _torque = (torque);
}


peano::integration::partitioncoupling::builtin::records::ForceTorque::ForceTorque() {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorque::ForceTorque(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._translationalForce, persistentRecords._torque) {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorque::ForceTorque(const tarch::la::Vector<3,double>& translationalForce, const tarch::la::Vector<3,double>& torque):
_persistentRecords(translationalForce, torque) {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorque::~ForceTorque() { }


tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorque::getTranslationalForce() const {
   return _persistentRecords._translationalForce;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorque::setTranslationalForce(const tarch::la::Vector<3,double>& translationalForce) {
   _persistentRecords._translationalForce = (translationalForce);
}



double peano::integration::partitioncoupling::builtin::records::ForceTorque::getTranslationalForce(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   return _persistentRecords._translationalForce[elementIndex];
   
}



void peano::integration::partitioncoupling::builtin::records::ForceTorque::setTranslationalForce(int elementIndex, const double& translationalForce) {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   _persistentRecords._translationalForce[elementIndex]= translationalForce;
   
}



tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorque::getTorque() const {
   return _persistentRecords._torque;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorque::setTorque(const tarch::la::Vector<3,double>& torque) {
   _persistentRecords._torque = (torque);
}



double peano::integration::partitioncoupling::builtin::records::ForceTorque::getTorque(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   return _persistentRecords._torque[elementIndex];
   
}



void peano::integration::partitioncoupling::builtin::records::ForceTorque::setTorque(int elementIndex, const double& torque) {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   _persistentRecords._torque[elementIndex]= torque;
   
}




std::string peano::integration::partitioncoupling::builtin::records::ForceTorque::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::integration::partitioncoupling::builtin::records::ForceTorque::toString (std::ostream& out) const {
   out << "("; 
   out << "_translationalForce:[";
   for (int i = 0; i < 3-1; i++) {
      out << getTranslationalForce(i) << ",";
   }
   out << getTranslationalForce(3-1) << "]";
   out << ",";
   out << "_torque:[";
   for (int i = 0; i < 3-1; i++) {
      out << getTorque(i) << ",";
   }
   out << getTorque(3-1) << "]";
   out <<  ")";
}


peano::integration::partitioncoupling::builtin::records::ForceTorque::PersistentRecords peano::integration::partitioncoupling::builtin::records::ForceTorque::getPersistentRecords() const {
   return _persistentRecords;
}

peano::integration::partitioncoupling::builtin::records::ForceTorquePacked peano::integration::partitioncoupling::builtin::records::ForceTorque::convert() const{
   return ForceTorquePacked(
      getTranslationalForce(),
      getTorque()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::integration::partitioncoupling::builtin::records::ForceTorque::_log( "peano::integration::partitioncoupling::builtin::records::ForceTorque" );
   
   MPI_Datatype peano::integration::partitioncoupling::builtin::records::ForceTorque::Datatype = 0;
   
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorque::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_translationalForce
         MPI_DOUBLE,		 //_torque
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         3,		 //_translationalForce
         3,		 //_torque
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      ForceTorque dummyForceTorque[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForceTorque[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForceTorque[0]._persistentRecords._translationalForce[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForceTorque[0]._persistentRecords._torque[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyForceTorque[1]._persistentRecords._translationalForce[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ForceTorque::Datatype );
      MPI_Type_commit( &ForceTorque::Datatype );
      
   }
   
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorque::shutdownDatatype() {
      MPI_Type_free( &ForceTorque::Datatype );
      
   }
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorque::send(int destination, int tag) {
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
         msg << "was not able to send message peano::integration::partitioncoupling::builtin::records::ForceTorque "
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
            msg << "testing for finished send task for peano::integration::partitioncoupling::builtin::records::ForceTorque "
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
            "peano::integration::partitioncoupling::builtin::records::ForceTorque",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::partitioncoupling::builtin::records::ForceTorque",
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
   
   
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorque::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::integration::partitioncoupling::builtin::records::ForceTorque from node "
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
            msg << "testing for finished receive task for peano::integration::partitioncoupling::builtin::records::ForceTorque failed: "
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
            "peano::integration::partitioncoupling::builtin::records::ForceTorque",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::partitioncoupling::builtin::records::ForceTorque",
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
   
   
   
   bool peano::integration::partitioncoupling::builtin::records::ForceTorque::isMessageInQueue(int tag) {
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
   
   int peano::integration::partitioncoupling::builtin::records::ForceTorque::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::PersistentRecords::PersistentRecords() {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<3,double>& translationalForce, const tarch::la::Vector<3,double>& torque):
_translationalForce(translationalForce),
_torque(torque) {
   
}


tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::PersistentRecords::getTranslationalForce() const {
   return _translationalForce;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::PersistentRecords::setTranslationalForce(const tarch::la::Vector<3,double>& translationalForce) {
   _translationalForce = (translationalForce);
}



tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::PersistentRecords::getTorque() const {
   return _torque;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::PersistentRecords::setTorque(const tarch::la::Vector<3,double>& torque) {
   _torque = (torque);
}


peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::ForceTorquePacked() {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::ForceTorquePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._translationalForce, persistentRecords._torque) {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::ForceTorquePacked(const tarch::la::Vector<3,double>& translationalForce, const tarch::la::Vector<3,double>& torque):
_persistentRecords(translationalForce, torque) {
   
}


peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::~ForceTorquePacked() { }


tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::getTranslationalForce() const {
   return _persistentRecords._translationalForce;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::setTranslationalForce(const tarch::la::Vector<3,double>& translationalForce) {
   _persistentRecords._translationalForce = (translationalForce);
}



double peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::getTranslationalForce(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   return _persistentRecords._translationalForce[elementIndex];
   
}



void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::setTranslationalForce(int elementIndex, const double& translationalForce) {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   _persistentRecords._translationalForce[elementIndex]= translationalForce;
   
}



tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::getTorque() const {
   return _persistentRecords._torque;
}



void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::setTorque(const tarch::la::Vector<3,double>& torque) {
   _persistentRecords._torque = (torque);
}



double peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::getTorque(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   return _persistentRecords._torque[elementIndex];
   
}



void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::setTorque(int elementIndex, const double& torque) {
   assertion(elementIndex>=0);
   assertion(elementIndex<3);
   _persistentRecords._torque[elementIndex]= torque;
   
}




std::string peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "_translationalForce:[";
   for (int i = 0; i < 3-1; i++) {
      out << getTranslationalForce(i) << ",";
   }
   out << getTranslationalForce(3-1) << "]";
   out << ",";
   out << "_torque:[";
   for (int i = 0; i < 3-1; i++) {
      out << getTorque(i) << ",";
   }
   out << getTorque(3-1) << "]";
   out <<  ")";
}


peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::PersistentRecords peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::integration::partitioncoupling::builtin::records::ForceTorque peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::convert() const{
   return ForceTorque(
      getTranslationalForce(),
      getTorque()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::_log( "peano::integration::partitioncoupling::builtin::records::ForceTorquePacked" );
   
   MPI_Datatype peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::Datatype = 0;
   
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_translationalForce
         MPI_DOUBLE,		 //_torque
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         3,		 //_translationalForce
         3,		 //_torque
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      ForceTorquePacked dummyForceTorquePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForceTorquePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForceTorquePacked[0]._persistentRecords._translationalForce[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForceTorquePacked[0]._persistentRecords._torque[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyForceTorquePacked[1]._persistentRecords._translationalForce[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ForceTorquePacked::Datatype );
      MPI_Type_commit( &ForceTorquePacked::Datatype );
      
   }
   
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::shutdownDatatype() {
      MPI_Type_free( &ForceTorquePacked::Datatype );
      
   }
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::integration::partitioncoupling::builtin::records::ForceTorquePacked "
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
            msg << "testing for finished send task for peano::integration::partitioncoupling::builtin::records::ForceTorquePacked "
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
            "peano::integration::partitioncoupling::builtin::records::ForceTorquePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::partitioncoupling::builtin::records::ForceTorquePacked",
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
   
   
   
   void peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::integration::partitioncoupling::builtin::records::ForceTorquePacked from node "
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
            msg << "testing for finished receive task for peano::integration::partitioncoupling::builtin::records::ForceTorquePacked failed: "
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
            "peano::integration::partitioncoupling::builtin::records::ForceTorquePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::partitioncoupling::builtin::records::ForceTorquePacked",
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
   
   
   
   bool peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::isMessageInQueue(int tag) {
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
   
   int peano::integration::partitioncoupling::builtin::records::ForceTorquePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



