#include "peano/integration/debugging/CCAVisDebugger.h"
peano::integration::debugging::CCAVisDebugger::CCAVisDebugger():
_debugger(0){


}


peano::integration::debugging::CCAVisDebugger::~CCAVisDebugger(){

}


peano::integration::debugging::CCAVisDebugger& peano::integration::debugging::CCAVisDebugger::getInstance(){
  static peano::integration::debugging::CCAVisDebugger singleton;
  return singleton;
}


void peano::integration::debugging::CCAVisDebugger::addGridCell(const tarch::la::Vector<2, double>& position, const tarch::la::Vector<2, double>& h, const long long& color){
  double pos []={position[0],position[1]};
  double h_in []={h[0],h[1]};
  _debugger->addGridCell(pos,2,h_in,2,color);
}


void peano::integration::debugging::CCAVisDebugger::addGridVertex(const tarch::la::Vector<2, double>& position,const double& value){
  double pos []={position[0],position[1]};
  _debugger->addGridVertex(pos,2,value);
}


void peano::integration::debugging::CCAVisDebugger::addGridCell(const tarch::la::Vector<3, double>& position, const tarch::la::Vector<3, double>& h, const long long& color){
  double pos []={position[0],position[1],position[2]};
  double h_in []={h[0],h[1],h[2]};
  _debugger->addGridCell(pos,3,h_in,3,color);
}


void peano::integration::debugging::CCAVisDebugger::addGridVertex(const tarch::la::Vector<3, double>& position,const double& value){
  double pos []={position[0],position[1],position[2]};
  _debugger->addGridVertex(pos,3,value);
}


void peano::integration::debugging::CCAVisDebugger::addStep(const long& step){
  _debugger->addStep(step);

}


void peano::integration::debugging::CCAVisDebugger::visualise(){
  _debugger->visualise();
}


void peano::integration::debugging::CCAVisDebugger::setGridIsComplete(){
  _debugger->setGridIsComplete();
}


void peano::integration::debugging::CCAVisDebugger::getGridIsComplete(int& value){
  _debugger->getGridIsComplete(value);
}


void peano::integration::debugging::CCAVisDebugger::connect(peano::integration::cca::ports::debugging::GridDebugger* const debugger) {
  assertion( _debugger == 0 );
  assertion( debugger != 0 );
  _debugger = debugger;
}


void peano::integration::debugging::CCAVisDebugger::disconnect() {
  _debugger = 0;
}


void peano::integration::debugging::CCAVisDebugger::receiveDanglingMessages(){

}
