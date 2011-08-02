#include "peano/integration/dataqueries/CartesianGridWriterProxy.h"
#include "tarch/la/Vector.h"
#include <limits>
#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#endif
tarch::logging::Log peano::integration::dataqueries::CartesianGridWriterProxy::_log( "peano::integration::dataqueries::CartesianGridWriterProxy" );


#ifdef Parallel
void peano::integration::dataqueries::CartesianGridWriterProxy::checkForPendingData(int dataTag, int& queryId, int& source) {
  queryId = -1;
  int        flag   = 0;
  MPI_Status status;
  int        result = MPI_Iprobe(
      MPI_ANY_SOURCE,
      dataTag,
      tarch::parallel::Node::getInstance().getCommunicator(),
      &flag, &status
  );
  if (result!=MPI_SUCCESS) {
      //TODO logError("checkForPendingData(...)", "probing for messages on node " << _destinationNodeNumber );
  }
  if (flag) {
      source = status.MPI_SOURCE;
      MPI_Recv(
          &queryId,
          1,
          MPI_INT,
          source,
          dataTag,
          tarch::parallel::Node::getInstance().getCommunicator(),
          &status
      );
      assertion( queryId>=0 || queryId==-2);
  }
}


void peano::integration::dataqueries::CartesianGridWriterProxy::sendFinishedAcknowledgment(int dataTag) {
  int data = -2;

  MPI_Send(&data,1,MPI_INT,tarch::parallel::Node::getMasterProcessRank(),dataTag,tarch::parallel::Node::getInstance().getCommunicator());
}


void peano::integration::dataqueries::CartesianGridWriterProxy::receiveQueryData(
    int dataTag,
    int source,
    tarch::plotter::griddata::regular::CartesianGridWriter::VertexDataWriter& vertexDataWriter,
    int recordsPerEntry
) {
  int        flag   = 0;
  MPI_Status status;
  while(!flag){

      int        result = MPI_Iprobe(
          source,
          dataTag,
          tarch::parallel::Node::getInstance().getCommunicator(),
          &flag, &status
      );

      if (result!=MPI_SUCCESS) {
          logError("receiveQueryData()", "probing for messages on node ");
      }
  }
  int messages = 0;
  int datasets = 0;

  MPI_Get_count(&status, MPI_DOUBLE, &messages);

  assertionEquals( messages % 3, 0 );
  datasets = messages/3;

  std::vector<double>  positionList(messages);
  double*                                                 data = new double [datasets*recordsPerEntry];

  MPI_Recv(&positionList[0], messages,               MPI_DOUBLE, source, dataTag, tarch::parallel::Node::getInstance().getCommunicator(), &status);
  MPI_Recv(         data, datasets*recordsPerEntry, MPI_DOUBLE, source, dataTag, tarch::parallel::Node::getInstance().getCommunicator(), &status);

  for (int i=0; i<datasets; i++) {
      if(recordsPerEntry==2){
          tarch::la::Vector<2,double> data_local(0.0);
          for (int k=0; k<recordsPerEntry; k++) {
              data_local(k) = data[i*recordsPerEntry+k];
          }


          tarch::la::Vector<3 ,double> v(0.0);
          v[0]=positionList[i*3];
          v[1]=positionList[i*3+1];
          v[2]=positionList[i*3+2];
          vertexDataWriter.plotVertex(
              vertexDataWriter.getVertexIndex(v),
              data_local
          );
      }else if(recordsPerEntry==3){
          tarch::la::Vector<3,double> data_local(0.0);
          for (int k=0; k<recordsPerEntry; k++) {
              data_local(k) = data[i*recordsPerEntry+k];
          }
          tarch::la::Vector<3 ,double> v(0.0);
          v[0]=positionList[i*3];
          v[1]=positionList[i*3+1];
          v[2]=positionList[i*3+2];
          vertexDataWriter.plotVertex(
              vertexDataWriter.getVertexIndex(v),
              data_local
          );
      }else{

          double dataLocal=(0.0);
          for (int k=0; k<recordsPerEntry; k++) {
              dataLocal = data[i*recordsPerEntry+k];
          }
          tarch::la::Vector<3 ,double> v(0.0);
          v[0]=positionList[i*3];
          v[1]=positionList[i*3+1];
          v[2]=positionList[i*3+2];
          vertexDataWriter.plotVertex(
              vertexDataWriter.getVertexIndex(v),
              dataLocal
          );
      }

  }

  delete[] data;
}
#endif



peano::integration::dataqueries::CartesianGridWriterProxy::CartesianGridWriterProxy(
    int tag,
    int bufferSize,
    int recordsPerEntry,
    int id
):
_tag(tag),
_bufferSize(bufferSize),
_positionList(),
_data(0),
_recordsPerEntry(recordsPerEntry),
_minValue(std::numeric_limits<double>::max()),
_maxValue(std::numeric_limits<double>::min()),
_id(id) {

  _data = new double[(_bufferSize/3)*_recordsPerEntry];
}


peano::integration::dataqueries::CartesianGridWriterProxy::~CartesianGridWriterProxy() {
  releaseMessages();
  delete[]_data;
  std::cout<<"delete data"<<std::endl;
  //delete _data;
}
#if defined(Parallel)
void peano::integration::dataqueries::CartesianGridWriterProxy::sendId(int *id){
  MPI_Request* sendRequestHandle = new MPI_Request();
  MPI_Status   status;
  int          flag = 0;
  int          result;

  clock_t      timeOutWarning   = -1;
  clock_t      timeOutShutdown  = -1;
  bool         triggeredTimeoutWarning = false;

  result = MPI_Isend(
      id, 1, MPI_INT,  tarch::parallel::Node::getMasterProcessRank(),
      _tag, tarch::parallel::Node::getInstance().getCommunicator(),
      sendRequestHandle
  );
  if  (result!=MPI_SUCCESS) {
      std::ostringstream msg;
      msg << "was not able to send message peano::integration::dataqueries::CartesianGridWriterProxy::sendId "
          << " to node " << tarch::parallel::Node::getMasterProcessRank()
      << ": " << tarch::parallel::MPIReturnValueToString(result);
      _log.error( "sendId(int*)",msg.str() );
  }
  result = MPI_Test( sendRequestHandle, &flag, &status );
  while (!flag) {
      if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
      if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
      result = MPI_Test( sendRequestHandle, &flag, &status );
      if (result!=MPI_SUCCESS) {
          std::ostringstream msg;
          msg << "testing for finished send task for peano::integration::dataqueries::CartesianGridWriterProxy::sendId"
              << " sent to node " << tarch::parallel::Node::getMasterProcessRank()
          << " failed: " << tarch::parallel::MPIReturnValueToString(result);
          _log.error("sendId(int*)", msg.str() );
      }

      // deadlock aspect
      if (
          tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
          (clock()>timeOutWarning) &&
          (!triggeredTimeoutWarning)
      ) {
          tarch::parallel::Node::getInstance().writeTimeOutWarning(
              " peano::integration::dataqueries::CartesianGridWriterProxy::sendId",
              "sendId(int*)", tarch::parallel::Node::getMasterProcessRank()
          );
          triggeredTimeoutWarning = true;
      }
      if (
          tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
          (clock()>timeOutShutdown)
      ) {
          tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
              " peano::integration::dataqueries::CartesianGridWriterProxy::sendId",
              "sendId(int*)", tarch::parallel::Node::getMasterProcessRank()
          );
      }
      tarch::parallel::Node::getInstance().receiveDanglingMessages();
  }

  delete sendRequestHandle;
}

void peano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray(double* array,const int length){
  MPI_Request* sendRequestHandle = new MPI_Request();
  MPI_Status   status;
  int          flag = 0;
  int          result;

  clock_t      timeOutWarning   = -1;
  clock_t      timeOutShutdown  = -1;
  bool         triggeredTimeoutWarning = false;


  result = MPI_Isend(
      array, length, MPI_DOUBLE,  tarch::parallel::Node::getMasterProcessRank(),
      _tag, tarch::parallel::Node::getInstance().getCommunicator(),
      sendRequestHandle
  );
  if  (result!=MPI_SUCCESS) {
      std::ostringstream msg;
      msg << "was not able to send message eano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray "
          << " to node " << tarch::parallel::Node::getMasterProcessRank()
      << ": " << tarch::parallel::MPIReturnValueToString(result);
      _log.error( "peano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray(double*, const int)",msg.str() );
  }
  result = MPI_Test( sendRequestHandle, &flag, &status );
  while (!flag) {
      if (timeOutWarning==-1)   timeOutWarning   = tarch::parallel::Node::getInstance().getDeadlockWarningTimeStamp();
      if (timeOutShutdown==-1)  timeOutShutdown  = tarch::parallel::Node::getInstance().getDeadlockTimeOutTimeStamp();
      result = MPI_Test( sendRequestHandle, &flag, &status );
      if (result!=MPI_SUCCESS) {
          std::ostringstream msg;
          msg << "testing for finished send task for eano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray "
              << " sent to node " << tarch::parallel::Node::getMasterProcessRank()
          << " failed: " << tarch::parallel::MPIReturnValueToString(result);
          _log.error("peano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray(double*, const int)", msg.str() );
      }

      // deadlock aspect
      if (
          tarch::parallel::Node::getInstance().isTimeOutWarningEnabled() &&
          (clock()>timeOutWarning) &&
          (!triggeredTimeoutWarning)
      ) {
          tarch::parallel::Node::getInstance().writeTimeOutWarning(
              " peano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray",
              "peano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray(double*, const int)", tarch::parallel::Node::getMasterProcessRank()
          );
          triggeredTimeoutWarning = true;
      }
      if (
          tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
          (clock()>timeOutShutdown)
      ) {
          tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
              " peano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray",
              "peano::integration::dataqueries::CartesianGridWriterProxy::sendDataArray(double*, const int)", tarch::parallel::Node::getMasterProcessRank()
          );
      }
      tarch::parallel::Node::getInstance().receiveDanglingMessages();
  }

  delete sendRequestHandle;
}
#endif
void peano::integration::dataqueries::CartesianGridWriterProxy::releaseMessages() {
#ifdef Parallel
  if(_positionList.size()>0){
      sendId(&_id);
      sendDataArray(&_positionList[0],_positionList.size());
      sendDataArray(_data,_recordsPerEntry*(_positionList.size()/3));
      _positionList.clear();
  }
#endif
}


tarch::la::Vector<3,double> peano::integration::dataqueries::CartesianGridWriterProxy::getH() const{

  //return tarch::plotter::griddata::regular::CartesianGridArrayWriter::VertexDataWriter::getH();
  return tarch::la::Vector<3,double>(); // TODO replace by something useful
}
int peano::integration::dataqueries::CartesianGridWriterProxy::getVertexIndex( const tarch::la::Vector<2,double>& position ) {
  tarch::la::Vector<3,double> position3D;
  position3D(0) = position(0);
  position3D(1) = position(1);
  position3D(2) = 0.0;
  return getVertexIndex(position3D);
}


int peano::integration::dataqueries::CartesianGridWriterProxy::getVertexIndex( const tarch::la::Vector<3,double>& position ) {
  assertion((int)_positionList.size()<_bufferSize);

  for (unsigned int i=0; i<_positionList.size(); i+=3) {
      if (position[0]==_positionList[i]&&position[0]==_positionList[i+1]&&position[0]==_positionList[i+2]) {
          return i;
      }
  }
  for(int i=0;i<position.size();i++)
    _positionList.push_back(position[i]);
  return (_positionList.size()-1)/3;
}


bool peano::integration::dataqueries::CartesianGridWriterProxy::containsVertex( const tarch::la::Vector<3,double>& position ) const {
  return true;
}


bool peano::integration::dataqueries::CartesianGridWriterProxy::containsVertex( const tarch::la::Vector<2,double>& position ) const {
  return true;
}


void peano::integration::dataqueries::CartesianGridWriterProxy::plotVertex( int index, double value ) {
  if (value<_minValue) _minValue = value;
  if (value>_maxValue) _maxValue = value;

  _data[index*_recordsPerEntry] = value;

  if ((int)_positionList.size()>=_bufferSize) releaseMessages();
}


void peano::integration::dataqueries::CartesianGridWriterProxy::plotVertex( int index, const tarch::la::Vector<2,double>& value ) {
  assertion( _recordsPerEntry<=2 );

  if (value(0)<_minValue) _minValue = value(0);
  if (value(1)<_minValue) _minValue = value(1);
  if (value(0)>_maxValue) _maxValue = value(0);
  if (value(1)>_maxValue) _maxValue = value(1);

  _data[index*_recordsPerEntry] = value(0);
  _data[index*_recordsPerEntry+1] = value(1);

  if ((int)_positionList.size()>=_bufferSize) releaseMessages();

}

void peano::integration::dataqueries::CartesianGridWriterProxy::plotVertex( int index, const tarch::la::Vector<3,double>& value ) {
  assertion( _recordsPerEntry<=3 );

  if (value(0)<_minValue) _minValue = value(0);
  if (value(1)<_minValue) _minValue = value(1);
  if (value(2)<_minValue) _minValue = value(2);
  if (value(0)>_maxValue) _maxValue = value(0);
  if (value(1)>_maxValue) _maxValue = value(1);
  if (value(2)>_maxValue) _maxValue = value(2);

  _data[index*_recordsPerEntry] = value(0);
  _data[index*_recordsPerEntry+1] = value(1);
  _data[index*_recordsPerEntry+2] = value(2);

  if ((int)_positionList.size()>=_bufferSize) releaseMessages();
}


double peano::integration::dataqueries::CartesianGridWriterProxy::getMinValue() const {
  return _minValue;
}


double peano::integration::dataqueries::CartesianGridWriterProxy::getMaxValue() const {
  return _maxValue;
}


void peano::integration::dataqueries::CartesianGridWriterProxy::close() {
  releaseMessages();
}

