#include "peano/kernel/regulargrid/parallel/messages/ForkMessage.h"

peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::PersistentRecords() {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& domainOffset, const tarch::la::Vector<DIMENSIONS,double>& h, const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks):
_domainOffset(domainOffset),
_h(h),
_numberOfGridPoints(numberOfGridPoints),
_neighbourRanks(neighbourRanks) {
   
}


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::getDomainOffset() const {
   return _domainOffset;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::setDomainOffset(const tarch::la::Vector<DIMENSIONS,double>& domainOffset) {
   _domainOffset = (domainOffset);
}



tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::getH() const {
   return _h;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::setH(const tarch::la::Vector<DIMENSIONS,double>& h) {
   _h = (h);
}



tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::getNumberOfGridPoints() const {
   return _numberOfGridPoints;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::setNumberOfGridPoints(const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints) {
   _numberOfGridPoints = (numberOfGridPoints);
}



tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int> peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::getNeighbourRanks() const {
   return _neighbourRanks;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords::setNeighbourRanks(const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks) {
   _neighbourRanks = (neighbourRanks);
}


peano::kernel::regulargrid::parallel::messages::ForkMessage::ForkMessage() {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessage::ForkMessage(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._domainOffset, persistentRecords._h, persistentRecords._numberOfGridPoints, persistentRecords._neighbourRanks) {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessage::ForkMessage(const tarch::la::Vector<DIMENSIONS,double>& domainOffset, const tarch::la::Vector<DIMENSIONS,double>& h, const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks):
_persistentRecords(domainOffset, h, numberOfGridPoints, neighbourRanks) {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessage::~ForkMessage() { }


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessage::getDomainOffset() const {
   return _persistentRecords._domainOffset;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setDomainOffset(const tarch::la::Vector<DIMENSIONS,double>& domainOffset) {
   _persistentRecords._domainOffset = (domainOffset);
}



double peano::kernel::regulargrid::parallel::messages::ForkMessage::getDomainOffset(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._domainOffset[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setDomainOffset(int elementIndex, const double& domainOffset) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._domainOffset[elementIndex]= domainOffset;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessage::getH() const {
   return _persistentRecords._h;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setH(const tarch::la::Vector<DIMENSIONS,double>& h) {
   _persistentRecords._h = (h);
}



double peano::kernel::regulargrid::parallel::messages::ForkMessage::getH(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._h[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setH(int elementIndex, const double& h) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._h[elementIndex]= h;
   
}



tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::parallel::messages::ForkMessage::getNumberOfGridPoints() const {
   return _persistentRecords._numberOfGridPoints;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setNumberOfGridPoints(const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints) {
   _persistentRecords._numberOfGridPoints = (numberOfGridPoints);
}



int peano::kernel::regulargrid::parallel::messages::ForkMessage::getNumberOfGridPoints(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._numberOfGridPoints[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setNumberOfGridPoints(int elementIndex, const int& numberOfGridPoints) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._numberOfGridPoints[elementIndex]= numberOfGridPoints;
   
}



tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int> peano::kernel::regulargrid::parallel::messages::ForkMessage::getNeighbourRanks() const {
   return _persistentRecords._neighbourRanks;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setNeighbourRanks(const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks) {
   _persistentRecords._neighbourRanks = (neighbourRanks);
}



int peano::kernel::regulargrid::parallel::messages::ForkMessage::getNeighbourRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D_TIMES_TWO_POWER_D);
   return _persistentRecords._neighbourRanks[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessage::setNeighbourRanks(int elementIndex, const int& neighbourRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D_TIMES_TWO_POWER_D);
   _persistentRecords._neighbourRanks[elementIndex]= neighbourRanks;
   
}




std::string peano::kernel::regulargrid::parallel::messages::ForkMessage::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::kernel::regulargrid::parallel::messages::ForkMessage::toString (std::ostream& out) const {
   out << "("; 
   out << "domainOffset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getDomainOffset(i) << ",";
   }
   out << getDomainOffset(DIMENSIONS-1) << "]";
   out << ",";
   out << "h:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getH(i) << ",";
   }
   out << getH(DIMENSIONS-1) << "]";
   out << ",";
   out << "numberOfGridPoints:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getNumberOfGridPoints(i) << ",";
   }
   out << getNumberOfGridPoints(DIMENSIONS-1) << "]";
   out << ",";
   out << "neighbourRanks:[";
   for (int i = 0; i < TWO_POWER_D_TIMES_TWO_POWER_D-1; i++) {
      out << getNeighbourRanks(i) << ",";
   }
   out << getNeighbourRanks(TWO_POWER_D_TIMES_TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::kernel::regulargrid::parallel::messages::ForkMessage::PersistentRecords peano::kernel::regulargrid::parallel::messages::ForkMessage::getPersistentRecords() const {
   return _persistentRecords;
}

peano::kernel::regulargrid::parallel::messages::ForkMessagePacked peano::kernel::regulargrid::parallel::messages::ForkMessage::convert() const{
   return ForkMessagePacked(
      getDomainOffset(),
      getH(),
      getNumberOfGridPoints(),
      getNeighbourRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::kernel::regulargrid::parallel::messages::ForkMessage::_log( "peano::kernel::regulargrid::parallel::messages::ForkMessage" );
   
   MPI_Datatype peano::kernel::regulargrid::parallel::messages::ForkMessage::Datatype = 0;
   
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessage::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //domainOffset
         MPI_DOUBLE,		 //h
         MPI_INT,		 //numberOfGridPoints
         MPI_INT,		 //neighbourRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //domainOffset
         DIMENSIONS,		 //h
         DIMENSIONS,		 //numberOfGridPoints
         TWO_POWER_D_TIMES_TWO_POWER_D,		 //neighbourRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      ForkMessage dummyForkMessage[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessage[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessage[0]._persistentRecords._domainOffset[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessage[0]._persistentRecords._h[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessage[0]._persistentRecords._numberOfGridPoints[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessage[0]._persistentRecords._neighbourRanks[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyForkMessage[1]._persistentRecords._domainOffset[0])),    &disp[4] );
//      MPI_Address( const_cast<void*>(static_cast<const void*>(dummyForkMessage[1]._persistentRecords._domainOffset.data())), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ForkMessage::Datatype );
      MPI_Type_commit( &ForkMessage::Datatype );
      
   }
   
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessage::shutdownDatatype() {
      MPI_Type_free( &ForkMessage::Datatype );
      
   }
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessage::send(int destination, int tag) {
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
         msg << "was not able to send message peano::kernel::regulargrid::parallel::messages::ForkMessage "
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
            msg << "testing for finished send task for peano::kernel::regulargrid::parallel::messages::ForkMessage "
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
            "peano::kernel::regulargrid::parallel::messages::ForkMessage",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::parallel::messages::ForkMessage",
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
   
   
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessage::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::kernel::regulargrid::parallel::messages::ForkMessage from node "
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
            msg << "testing for finished receive task for peano::kernel::regulargrid::parallel::messages::ForkMessage failed: "
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
            "peano::kernel::regulargrid::parallel::messages::ForkMessage",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::parallel::messages::ForkMessage",
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
   
   
   
   bool peano::kernel::regulargrid::parallel::messages::ForkMessage::isMessageInQueue(int tag) {
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
   
   int peano::kernel::regulargrid::parallel::messages::ForkMessage::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::PersistentRecords() {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<DIMENSIONS,double>& domainOffset, const tarch::la::Vector<DIMENSIONS,double>& h, const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks):
_domainOffset(domainOffset),
_h(h),
_numberOfGridPoints(numberOfGridPoints),
_neighbourRanks(neighbourRanks) {
   
}


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::getDomainOffset() const {
   return _domainOffset;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::setDomainOffset(const tarch::la::Vector<DIMENSIONS,double>& domainOffset) {
   _domainOffset = (domainOffset);
}



tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::getH() const {
   return _h;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::setH(const tarch::la::Vector<DIMENSIONS,double>& h) {
   _h = (h);
}



tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::getNumberOfGridPoints() const {
   return _numberOfGridPoints;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::setNumberOfGridPoints(const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints) {
   _numberOfGridPoints = (numberOfGridPoints);
}



tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::getNeighbourRanks() const {
   return _neighbourRanks;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords::setNeighbourRanks(const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks) {
   _neighbourRanks = (neighbourRanks);
}


peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::ForkMessagePacked() {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::ForkMessagePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._domainOffset, persistentRecords._h, persistentRecords._numberOfGridPoints, persistentRecords._neighbourRanks) {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::ForkMessagePacked(const tarch::la::Vector<DIMENSIONS,double>& domainOffset, const tarch::la::Vector<DIMENSIONS,double>& h, const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks):
_persistentRecords(domainOffset, h, numberOfGridPoints, neighbourRanks) {
   
}


peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::~ForkMessagePacked() { }


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getDomainOffset() const {
   return _persistentRecords._domainOffset;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setDomainOffset(const tarch::la::Vector<DIMENSIONS,double>& domainOffset) {
   _persistentRecords._domainOffset = (domainOffset);
}



double peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getDomainOffset(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._domainOffset[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setDomainOffset(int elementIndex, const double& domainOffset) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._domainOffset[elementIndex]= domainOffset;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getH() const {
   return _persistentRecords._h;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setH(const tarch::la::Vector<DIMENSIONS,double>& h) {
   _persistentRecords._h = (h);
}



double peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getH(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._h[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setH(int elementIndex, const double& h) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._h[elementIndex]= h;
   
}



tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getNumberOfGridPoints() const {
   return _persistentRecords._numberOfGridPoints;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setNumberOfGridPoints(const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints) {
   _persistentRecords._numberOfGridPoints = (numberOfGridPoints);
}



int peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getNumberOfGridPoints(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._numberOfGridPoints[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setNumberOfGridPoints(int elementIndex, const int& numberOfGridPoints) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._numberOfGridPoints[elementIndex]= numberOfGridPoints;
   
}



tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int> peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getNeighbourRanks() const {
   return _persistentRecords._neighbourRanks;
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setNeighbourRanks(const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>& neighbourRanks) {
   _persistentRecords._neighbourRanks = (neighbourRanks);
}



int peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getNeighbourRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D_TIMES_TWO_POWER_D);
   return _persistentRecords._neighbourRanks[elementIndex];
   
}



void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::setNeighbourRanks(int elementIndex, const int& neighbourRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D_TIMES_TWO_POWER_D);
   _persistentRecords._neighbourRanks[elementIndex]= neighbourRanks;
   
}




std::string peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "domainOffset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getDomainOffset(i) << ",";
   }
   out << getDomainOffset(DIMENSIONS-1) << "]";
   out << ",";
   out << "h:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getH(i) << ",";
   }
   out << getH(DIMENSIONS-1) << "]";
   out << ",";
   out << "numberOfGridPoints:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getNumberOfGridPoints(i) << ",";
   }
   out << getNumberOfGridPoints(DIMENSIONS-1) << "]";
   out << ",";
   out << "neighbourRanks:[";
   for (int i = 0; i < TWO_POWER_D_TIMES_TWO_POWER_D-1; i++) {
      out << getNeighbourRanks(i) << ",";
   }
   out << getNeighbourRanks(TWO_POWER_D_TIMES_TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::PersistentRecords peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::kernel::regulargrid::parallel::messages::ForkMessage peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::convert() const{
   return ForkMessage(
      getDomainOffset(),
      getH(),
      getNumberOfGridPoints(),
      getNeighbourRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::_log( "peano::kernel::regulargrid::parallel::messages::ForkMessagePacked" );
   
   MPI_Datatype peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::Datatype = 0;
   
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::initDatatype() {
      const int Attributes = 5;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //domainOffset
         MPI_DOUBLE,		 //h
         MPI_INT,		 //numberOfGridPoints
         MPI_INT,		 //neighbourRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //domainOffset
         DIMENSIONS,		 //h
         DIMENSIONS,		 //numberOfGridPoints
         TWO_POWER_D_TIMES_TWO_POWER_D,		 //neighbourRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      ForkMessagePacked dummyForkMessagePacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessagePacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessagePacked[0]._persistentRecords._domainOffset[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessagePacked[0]._persistentRecords._h[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessagePacked[0]._persistentRecords._numberOfGridPoints[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyForkMessagePacked[0]._persistentRecords._neighbourRanks[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyForkMessagePacked[1]._persistentRecords._domainOffset[0])),    &disp[4] );
//      MPI_Address( const_cast<void*>(static_cast<const void*>(dummyForkMessagePacked[1]._persistentRecords._domainOffset.data())), 		&disp[4] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &ForkMessagePacked::Datatype );
      MPI_Type_commit( &ForkMessagePacked::Datatype );
      
   }
   
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::shutdownDatatype() {
      MPI_Type_free( &ForkMessagePacked::Datatype );
      
   }
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::kernel::regulargrid::parallel::messages::ForkMessagePacked "
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
            msg << "testing for finished send task for peano::kernel::regulargrid::parallel::messages::ForkMessagePacked "
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
            "peano::kernel::regulargrid::parallel::messages::ForkMessagePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::parallel::messages::ForkMessagePacked",
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
   
   
   
   void peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::kernel::regulargrid::parallel::messages::ForkMessagePacked from node "
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
            msg << "testing for finished receive task for peano::kernel::regulargrid::parallel::messages::ForkMessagePacked failed: "
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
            "peano::kernel::regulargrid::parallel::messages::ForkMessagePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::kernel::regulargrid::parallel::messages::ForkMessagePacked",
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
   
   
   
   bool peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::isMessageInQueue(int tag) {
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
   
   int peano::kernel::regulargrid::parallel::messages::ForkMessagePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



