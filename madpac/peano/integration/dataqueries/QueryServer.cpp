#include "peano/integration/dataqueries/QueryServer.h"
#include "peano/integration/dataqueries/CartesianGridWriterProxy.h"


#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#endif


#include "tarch/services/ServiceFactory.h"
registerService(peano::integration::dataqueries::QueryServer)


tarch::logging::Log peano::integration::dataqueries::QueryServer::_log( "peano::integration::dataqueries::QueryServer" );


peano::integration::dataqueries::QueryServer::QueryServer():
  _pendingQueries(),
  _dataTag(-1),
  _managementTag(-1),
  _bufferSize(300),
  _finishedDataSendAcknowledgementsSinceLastReleaseCall(0) {
  #ifdef Parallel
  init=false;
  _dataTag       = tarch::parallel::Node::reserveFreeTag( "peano::integration::dataqueries::QueryServer[data-tag]" );
  _managementTag = tarch::parallel::Node::reserveFreeTag( "peano::integration::dataqueries::QueryServer[management-tag]" );
  #endif
}


peano::integration::dataqueries::QueryServer::~QueryServer() {
}


peano::integration::dataqueries::QueryServer& peano::integration::dataqueries::QueryServer::getInstance() {
  static QueryServer singleton;
  return singleton;
}


void peano::integration::dataqueries::QueryServer::receiveDanglingMessages() {
  #ifdef Parallel
  if ( tarch::parallel::Node::getInstance().isMasterProcess() ) {
      if(!init)
        DataQuery::initDatatype();
      init=true;
      receiveIncomingQueryData();
  }
  else {
      if(!init)
              DataQuery::initDatatype();
            init=true;
      receiveNewQueries();
  }
  #endif
}


#ifdef Parallel
void peano::integration::dataqueries::QueryServer::receiveIncomingQueryData() {
  int queryId;
  int source;
  CartesianGridWriterProxy::checkForPendingData(_dataTag,queryId, source);
  while (queryId>=0) {

    int affectedQuery = getIndexOfQuery(queryId);

    CartesianGridWriterProxy::receiveQueryData(
      _dataTag,
      source,
      *_pendingQueries[affectedQuery]._vertexDataWriter,
      _pendingQueries[affectedQuery]._queryDescription.getRecordsPerEntry()
    );
    CartesianGridWriterProxy::checkForPendingData(_dataTag,queryId, source);
  }
  if (queryId==-2) {

      _finishedDataSendAcknowledgementsSinceLastReleaseCall++;
  }
}


void peano::integration::dataqueries::QueryServer::receiveNewQueries() {
  if (DataQuery::isMessageInQueue(_managementTag)) {
	DataQuery newQuery;
	newQuery.receive(tarch::parallel::Node::getMasterProcessRank(),_managementTag);

    _pendingQueries.push_back(
      Query(
      newQuery,
      new CartesianGridWriterProxy(_dataTag, _bufferSize, newQuery.getRecordsPerEntry(), newQuery.getId() )
    ));

  }
}
#endif


int peano::integration::dataqueries::QueryServer::getNumberOfPendingQueries() const {
  return _pendingQueries.size();
}


peano::integration::dataqueries::DataQuery peano::integration::dataqueries::QueryServer::getPendingQueryDescription( int queryNumber ) const {
  assertion( queryNumber >= 0 );
  assertion( queryNumber < getNumberOfPendingQueries() );
  return _pendingQueries[ queryNumber ]._queryDescription;
}


tarch::plotter::griddata::regular::CartesianGridWriter::VertexDataWriter& peano::integration::dataqueries::QueryServer::getPendingQueryDataWriter( int queryNumber ) {
  assertion( queryNumber >= 0 );
  assertion( queryNumber < getNumberOfPendingQueries() );
  return *(_pendingQueries[ queryNumber ]._vertexDataWriter);
}


int peano::integration::dataqueries::QueryServer::getIndexOfQuery( int id ) {
  int i = 0;
  while (i<static_cast<int>(_pendingQueries.size())) {
	if (_pendingQueries[i]._queryDescription.getId()==id) {
	  return i;
	}
    i++;
  }
  assertion(false);
  return -1;
}


void peano::integration::dataqueries::QueryServer::addQuery(
  const std::string&                                       description,
  int                                                      recordPerEntry,
  DataQuery                                                newQuery,
  tarch::plotter::griddata::regular::CartesianGridWriter&  writer
) {
  if(!init)
#ifdef Parallel
        peano::integration::dataqueries::DataQuery::initDatatype();
#endif
        init=true;
  newQuery.setId( getNumberOfPendingQueries() );
  _pendingQueries.push_back(
    Query(
      newQuery,
      static_cast<tarch::plotter::griddata::regular::CartesianGridWriter::VertexDataWriter*>(writer.createVertexDataWriter(description,recordPerEntry))
    )
  );
  #ifdef Parallel
  assertion( tarch::parallel::Node::getInstance().isMasterProcess() );
  tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(newQuery, _managementTag);
  #endif
}


void peano::integration::dataqueries::QueryServer::setBufferSize(int bufferSize) {
  assertion( bufferSize>0 );
  _bufferSize = bufferSize;
}


void peano::integration::dataqueries::QueryServer::commitQueries() {
  if(!init)
#ifdef Parallel
        peano::integration::dataqueries::DataQuery::initDatatype();
#endif
        init=true;
  #ifdef Parallel
  if ( tarch::parallel::Node::getInstance().isMasterProcess() ) {
    while (_finishedDataSendAcknowledgementsSinceLastReleaseCall < tarch::parallel::NodePool::getInstance().getNumberOfWorkingNodes()) {
      receiveDanglingMessages();
    }
    for (std::vector<Query>::iterator p = _pendingQueries.begin(); p!=_pendingQueries.end(); p++) {

        p->closeAndDeleteDataWriter();
    }
    _pendingQueries.clear();

    _finishedDataSendAcknowledgementsSinceLastReleaseCall = 0;
  }
  else {

    for (std::vector<Query>::iterator p = _pendingQueries.begin(); p!=_pendingQueries.end(); p++) {
      p->closeAndDeleteDataWriter();
    }

    _pendingQueries.clear();
    CartesianGridWriterProxy::sendFinishedAcknowledgment(_dataTag);
  }
  #else
    for (std::vector<Query>::iterator p = _pendingQueries.begin(); p!=_pendingQueries.end(); p++) {
      p->closeAndDeleteDataWriter();
    }
    _pendingQueries.clear();
  #endif
}


peano::integration::dataqueries::QueryServer::Query::Query( const DataQuery& queryDescription, tarch::plotter::griddata::regular::CartesianGridWriter::VertexDataWriter* plotter):
  _queryDescription( queryDescription ),
  _vertexDataWriter( plotter ) {
}


void peano::integration::dataqueries::QueryServer::Query::closeAndDeleteDataWriter() {
  _vertexDataWriter->close();
  delete _vertexDataWriter;
  _vertexDataWriter = 0;
}
