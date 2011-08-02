#include "peano/integration/dataqueries/DataQuery.h"

peano::integration::dataqueries::DataQuery::PersistentRecords::PersistentRecords() {
   
}


peano::integration::dataqueries::DataQuery::PersistentRecords::PersistentRecords(const int& id, const int& recordsPerEntry, const int& scope, const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset, const tarch::la::Vector<DIMENSIONS,double>& boundingBox, const tarch::la::Vector<DIMENSIONS,int>& resolution):
_id(id),
_recordsPerEntry(recordsPerEntry),
_scope(scope),
_boundingBoxOffset(boundingBoxOffset),
_boundingBox(boundingBox),
_resolution(resolution) {
   
}


int peano::integration::dataqueries::DataQuery::PersistentRecords::getId() const {
   return _id;
}



void peano::integration::dataqueries::DataQuery::PersistentRecords::setId(const int& id) {
   _id = id;
}



int peano::integration::dataqueries::DataQuery::PersistentRecords::getRecordsPerEntry() const {
   return _recordsPerEntry;
}



void peano::integration::dataqueries::DataQuery::PersistentRecords::setRecordsPerEntry(const int& recordsPerEntry) {
   _recordsPerEntry = recordsPerEntry;
}



int peano::integration::dataqueries::DataQuery::PersistentRecords::getScope() const {
   return _scope;
}



void peano::integration::dataqueries::DataQuery::PersistentRecords::setScope(const int& scope) {
   _scope = scope;
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQuery::PersistentRecords::getBoundingBoxOffset() const {
   return _boundingBoxOffset;
}



void peano::integration::dataqueries::DataQuery::PersistentRecords::setBoundingBoxOffset(const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset) {
   _boundingBoxOffset = (boundingBoxOffset);
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQuery::PersistentRecords::getBoundingBox() const {
   return _boundingBox;
}



void peano::integration::dataqueries::DataQuery::PersistentRecords::setBoundingBox(const tarch::la::Vector<DIMENSIONS,double>& boundingBox) {
   _boundingBox = (boundingBox);
}



tarch::la::Vector<DIMENSIONS,int> peano::integration::dataqueries::DataQuery::PersistentRecords::getResolution() const {
   return _resolution;
}



void peano::integration::dataqueries::DataQuery::PersistentRecords::setResolution(const tarch::la::Vector<DIMENSIONS,int>& resolution) {
   _resolution = (resolution);
}


peano::integration::dataqueries::DataQuery::DataQuery() {
   
}


peano::integration::dataqueries::DataQuery::DataQuery(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._id, persistentRecords._recordsPerEntry, persistentRecords._scope, persistentRecords._boundingBoxOffset, persistentRecords._boundingBox, persistentRecords._resolution) {
   
}


peano::integration::dataqueries::DataQuery::DataQuery(const int& id, const int& recordsPerEntry, const int& scope, const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset, const tarch::la::Vector<DIMENSIONS,double>& boundingBox, const tarch::la::Vector<DIMENSIONS,int>& resolution):
_persistentRecords(id, recordsPerEntry, scope, boundingBoxOffset, boundingBox, resolution) {
   
}


peano::integration::dataqueries::DataQuery::~DataQuery() { }


int peano::integration::dataqueries::DataQuery::getId() const {
   return _persistentRecords._id;
}



void peano::integration::dataqueries::DataQuery::setId(const int& id) {
   _persistentRecords._id = id;
}



int peano::integration::dataqueries::DataQuery::getRecordsPerEntry() const {
   return _persistentRecords._recordsPerEntry;
}



void peano::integration::dataqueries::DataQuery::setRecordsPerEntry(const int& recordsPerEntry) {
   _persistentRecords._recordsPerEntry = recordsPerEntry;
}



int peano::integration::dataqueries::DataQuery::getScope() const {
   return _persistentRecords._scope;
}



void peano::integration::dataqueries::DataQuery::setScope(const int& scope) {
   _persistentRecords._scope = scope;
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQuery::getBoundingBoxOffset() const {
   return _persistentRecords._boundingBoxOffset;
}



void peano::integration::dataqueries::DataQuery::setBoundingBoxOffset(const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset) {
   _persistentRecords._boundingBoxOffset = (boundingBoxOffset);
}



double peano::integration::dataqueries::DataQuery::getBoundingBoxOffset(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._boundingBoxOffset[elementIndex];
   
}



void peano::integration::dataqueries::DataQuery::setBoundingBoxOffset(int elementIndex, const double& boundingBoxOffset) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._boundingBoxOffset[elementIndex]= boundingBoxOffset;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQuery::getBoundingBox() const {
   return _persistentRecords._boundingBox;
}



void peano::integration::dataqueries::DataQuery::setBoundingBox(const tarch::la::Vector<DIMENSIONS,double>& boundingBox) {
   _persistentRecords._boundingBox = (boundingBox);
}



double peano::integration::dataqueries::DataQuery::getBoundingBox(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._boundingBox[elementIndex];
   
}



void peano::integration::dataqueries::DataQuery::setBoundingBox(int elementIndex, const double& boundingBox) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._boundingBox[elementIndex]= boundingBox;
   
}



tarch::la::Vector<DIMENSIONS,int> peano::integration::dataqueries::DataQuery::getResolution() const {
   return _persistentRecords._resolution;
}



void peano::integration::dataqueries::DataQuery::setResolution(const tarch::la::Vector<DIMENSIONS,int>& resolution) {
   _persistentRecords._resolution = (resolution);
}



int peano::integration::dataqueries::DataQuery::getResolution(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._resolution[elementIndex];
   
}



void peano::integration::dataqueries::DataQuery::setResolution(int elementIndex, const int& resolution) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._resolution[elementIndex]= resolution;
   
}




std::string peano::integration::dataqueries::DataQuery::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::integration::dataqueries::DataQuery::toString (std::ostream& out) const {
   out << "("; 
   out << "id:" << getId();
   out << ",";
   out << "recordsPerEntry:" << getRecordsPerEntry();
   out << ",";
   out << "scope:" << getScope();
   out << ",";
   out << "boundingBoxOffset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getBoundingBoxOffset(i) << ",";
   }
   out << getBoundingBoxOffset(DIMENSIONS-1) << "]";
   out << ",";
   out << "boundingBox:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getBoundingBox(i) << ",";
   }
   out << getBoundingBox(DIMENSIONS-1) << "]";
   out << ",";
   out << "resolution:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getResolution(i) << ",";
   }
   out << getResolution(DIMENSIONS-1) << "]";
   out <<  ")";
}


peano::integration::dataqueries::DataQuery::PersistentRecords peano::integration::dataqueries::DataQuery::getPersistentRecords() const {
   return _persistentRecords;
}

peano::integration::dataqueries::DataQueryPacked peano::integration::dataqueries::DataQuery::convert() const{
   return DataQueryPacked(
      getId(),
      getRecordsPerEntry(),
      getScope(),
      getBoundingBoxOffset(),
      getBoundingBox(),
      getResolution()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::integration::dataqueries::DataQuery::_log( "peano::integration::dataqueries::DataQuery" );
   
   MPI_Datatype peano::integration::dataqueries::DataQuery::Datatype = 0;
   
   
   void peano::integration::dataqueries::DataQuery::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //id
         MPI_INT,		 //recordsPerEntry
         MPI_INT,		 //scope
         MPI_DOUBLE,		 //boundingBoxOffset
         MPI_DOUBLE,		 //boundingBox
         MPI_INT,		 //resolution
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //id
         1,		 //recordsPerEntry
         1,		 //scope
         DIMENSIONS,		 //boundingBoxOffset
         DIMENSIONS,		 //boundingBox
         DIMENSIONS,		 //resolution
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      DataQuery dummyDataQuery[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[0]._persistentRecords._id))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[0]._persistentRecords._recordsPerEntry))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[0]._persistentRecords._scope))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[0]._persistentRecords._boundingBoxOffset[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[0]._persistentRecords._boundingBox[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[0]._persistentRecords._resolution[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQuery[1]._persistentRecords._id))), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &DataQuery::Datatype );
      MPI_Type_commit( &DataQuery::Datatype );
      
   }
   
   
   void peano::integration::dataqueries::DataQuery::shutdownDatatype() {
      MPI_Type_free( &DataQuery::Datatype );
      
   }
   
   void peano::integration::dataqueries::DataQuery::send(int destination, int tag) {
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
         msg << "was not able to send message peano::integration::dataqueries::DataQuery "
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
            msg << "testing for finished send task for peano::integration::dataqueries::DataQuery "
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
            "peano::integration::dataqueries::DataQuery",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::dataqueries::DataQuery",
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
   
   
   
   void peano::integration::dataqueries::DataQuery::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::integration::dataqueries::DataQuery from node "
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
            msg << "testing for finished receive task for peano::integration::dataqueries::DataQuery failed: "
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
            "peano::integration::dataqueries::DataQuery",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::dataqueries::DataQuery",
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
   
   
   
   bool peano::integration::dataqueries::DataQuery::isMessageInQueue(int tag) {
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
   
   int peano::integration::dataqueries::DataQuery::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::integration::dataqueries::DataQueryPacked::PersistentRecords::PersistentRecords() {
   
}


peano::integration::dataqueries::DataQueryPacked::PersistentRecords::PersistentRecords(const int& id, const int& recordsPerEntry, const int& scope, const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset, const tarch::la::Vector<DIMENSIONS,double>& boundingBox, const tarch::la::Vector<DIMENSIONS,int>& resolution):
_id(id),
_recordsPerEntry(recordsPerEntry),
_scope(scope),
_boundingBoxOffset(boundingBoxOffset),
_boundingBox(boundingBox),
_resolution(resolution) {
   
}


int peano::integration::dataqueries::DataQueryPacked::PersistentRecords::getId() const {
   return _id;
}



void peano::integration::dataqueries::DataQueryPacked::PersistentRecords::setId(const int& id) {
   _id = id;
}



int peano::integration::dataqueries::DataQueryPacked::PersistentRecords::getRecordsPerEntry() const {
   return _recordsPerEntry;
}



void peano::integration::dataqueries::DataQueryPacked::PersistentRecords::setRecordsPerEntry(const int& recordsPerEntry) {
   _recordsPerEntry = recordsPerEntry;
}



int peano::integration::dataqueries::DataQueryPacked::PersistentRecords::getScope() const {
   return _scope;
}



void peano::integration::dataqueries::DataQueryPacked::PersistentRecords::setScope(const int& scope) {
   _scope = scope;
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQueryPacked::PersistentRecords::getBoundingBoxOffset() const {
   return _boundingBoxOffset;
}



void peano::integration::dataqueries::DataQueryPacked::PersistentRecords::setBoundingBoxOffset(const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset) {
   _boundingBoxOffset = (boundingBoxOffset);
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQueryPacked::PersistentRecords::getBoundingBox() const {
   return _boundingBox;
}



void peano::integration::dataqueries::DataQueryPacked::PersistentRecords::setBoundingBox(const tarch::la::Vector<DIMENSIONS,double>& boundingBox) {
   _boundingBox = (boundingBox);
}



tarch::la::Vector<DIMENSIONS,int> peano::integration::dataqueries::DataQueryPacked::PersistentRecords::getResolution() const {
   return _resolution;
}



void peano::integration::dataqueries::DataQueryPacked::PersistentRecords::setResolution(const tarch::la::Vector<DIMENSIONS,int>& resolution) {
   _resolution = (resolution);
}


peano::integration::dataqueries::DataQueryPacked::DataQueryPacked() {
   
}


peano::integration::dataqueries::DataQueryPacked::DataQueryPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._id, persistentRecords._recordsPerEntry, persistentRecords._scope, persistentRecords._boundingBoxOffset, persistentRecords._boundingBox, persistentRecords._resolution) {
   
}


peano::integration::dataqueries::DataQueryPacked::DataQueryPacked(const int& id, const int& recordsPerEntry, const int& scope, const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset, const tarch::la::Vector<DIMENSIONS,double>& boundingBox, const tarch::la::Vector<DIMENSIONS,int>& resolution):
_persistentRecords(id, recordsPerEntry, scope, boundingBoxOffset, boundingBox, resolution) {
   
}


peano::integration::dataqueries::DataQueryPacked::~DataQueryPacked() { }


int peano::integration::dataqueries::DataQueryPacked::getId() const {
   return _persistentRecords._id;
}



void peano::integration::dataqueries::DataQueryPacked::setId(const int& id) {
   _persistentRecords._id = id;
}



int peano::integration::dataqueries::DataQueryPacked::getRecordsPerEntry() const {
   return _persistentRecords._recordsPerEntry;
}



void peano::integration::dataqueries::DataQueryPacked::setRecordsPerEntry(const int& recordsPerEntry) {
   _persistentRecords._recordsPerEntry = recordsPerEntry;
}



int peano::integration::dataqueries::DataQueryPacked::getScope() const {
   return _persistentRecords._scope;
}



void peano::integration::dataqueries::DataQueryPacked::setScope(const int& scope) {
   _persistentRecords._scope = scope;
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQueryPacked::getBoundingBoxOffset() const {
   return _persistentRecords._boundingBoxOffset;
}



void peano::integration::dataqueries::DataQueryPacked::setBoundingBoxOffset(const tarch::la::Vector<DIMENSIONS,double>& boundingBoxOffset) {
   _persistentRecords._boundingBoxOffset = (boundingBoxOffset);
}



double peano::integration::dataqueries::DataQueryPacked::getBoundingBoxOffset(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._boundingBoxOffset[elementIndex];
   
}



void peano::integration::dataqueries::DataQueryPacked::setBoundingBoxOffset(int elementIndex, const double& boundingBoxOffset) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._boundingBoxOffset[elementIndex]= boundingBoxOffset;
   
}



tarch::la::Vector<DIMENSIONS,double> peano::integration::dataqueries::DataQueryPacked::getBoundingBox() const {
   return _persistentRecords._boundingBox;
}



void peano::integration::dataqueries::DataQueryPacked::setBoundingBox(const tarch::la::Vector<DIMENSIONS,double>& boundingBox) {
   _persistentRecords._boundingBox = (boundingBox);
}



double peano::integration::dataqueries::DataQueryPacked::getBoundingBox(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._boundingBox[elementIndex];
   
}



void peano::integration::dataqueries::DataQueryPacked::setBoundingBox(int elementIndex, const double& boundingBox) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._boundingBox[elementIndex]= boundingBox;
   
}



tarch::la::Vector<DIMENSIONS,int> peano::integration::dataqueries::DataQueryPacked::getResolution() const {
   return _persistentRecords._resolution;
}



void peano::integration::dataqueries::DataQueryPacked::setResolution(const tarch::la::Vector<DIMENSIONS,int>& resolution) {
   _persistentRecords._resolution = (resolution);
}



int peano::integration::dataqueries::DataQueryPacked::getResolution(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._resolution[elementIndex];
   
}



void peano::integration::dataqueries::DataQueryPacked::setResolution(int elementIndex, const int& resolution) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._resolution[elementIndex]= resolution;
   
}




std::string peano::integration::dataqueries::DataQueryPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::integration::dataqueries::DataQueryPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "id:" << getId();
   out << ",";
   out << "recordsPerEntry:" << getRecordsPerEntry();
   out << ",";
   out << "scope:" << getScope();
   out << ",";
   out << "boundingBoxOffset:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getBoundingBoxOffset(i) << ",";
   }
   out << getBoundingBoxOffset(DIMENSIONS-1) << "]";
   out << ",";
   out << "boundingBox:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getBoundingBox(i) << ",";
   }
   out << getBoundingBox(DIMENSIONS-1) << "]";
   out << ",";
   out << "resolution:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getResolution(i) << ",";
   }
   out << getResolution(DIMENSIONS-1) << "]";
   out <<  ")";
}


peano::integration::dataqueries::DataQueryPacked::PersistentRecords peano::integration::dataqueries::DataQueryPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::integration::dataqueries::DataQuery peano::integration::dataqueries::DataQueryPacked::convert() const{
   return DataQuery(
      getId(),
      getRecordsPerEntry(),
      getScope(),
      getBoundingBoxOffset(),
      getBoundingBox(),
      getResolution()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::integration::dataqueries::DataQueryPacked::_log( "peano::integration::dataqueries::DataQueryPacked" );
   
   MPI_Datatype peano::integration::dataqueries::DataQueryPacked::Datatype = 0;
   
   
   void peano::integration::dataqueries::DataQueryPacked::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //id
         MPI_INT,		 //recordsPerEntry
         MPI_INT,		 //scope
         MPI_DOUBLE,		 //boundingBoxOffset
         MPI_DOUBLE,		 //boundingBox
         MPI_INT,		 //resolution
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //id
         1,		 //recordsPerEntry
         1,		 //scope
         DIMENSIONS,		 //boundingBoxOffset
         DIMENSIONS,		 //boundingBox
         DIMENSIONS,		 //resolution
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      DataQueryPacked dummyDataQueryPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[0]._persistentRecords._id))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[0]._persistentRecords._recordsPerEntry))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[0]._persistentRecords._scope))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[0]._persistentRecords._boundingBoxOffset[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[0]._persistentRecords._boundingBox[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[0]._persistentRecords._resolution[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyDataQueryPacked[1]._persistentRecords._id))), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &DataQueryPacked::Datatype );
      MPI_Type_commit( &DataQueryPacked::Datatype );
      
   }
   
   
   void peano::integration::dataqueries::DataQueryPacked::shutdownDatatype() {
      MPI_Type_free( &DataQueryPacked::Datatype );
      
   }
   
   void peano::integration::dataqueries::DataQueryPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::integration::dataqueries::DataQueryPacked "
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
            msg << "testing for finished send task for peano::integration::dataqueries::DataQueryPacked "
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
            "peano::integration::dataqueries::DataQueryPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::dataqueries::DataQueryPacked",
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
   
   
   
   void peano::integration::dataqueries::DataQueryPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::integration::dataqueries::DataQueryPacked from node "
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
            msg << "testing for finished receive task for peano::integration::dataqueries::DataQueryPacked failed: "
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
            "peano::integration::dataqueries::DataQueryPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::integration::dataqueries::DataQueryPacked",
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
   
   
   
   bool peano::integration::dataqueries::DataQueryPacked::isMessageInQueue(int tag) {
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
   
   int peano::integration::dataqueries::DataQueryPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



