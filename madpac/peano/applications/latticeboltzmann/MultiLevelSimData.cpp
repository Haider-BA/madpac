#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"


tarch::logging::Log
peano::applications::latticeboltzmann::MultiLevelSimData::_log(
"peano::applications::latticeboltzmann::MultiLevelSimData");


peano::applications::latticeboltzmann::MultiLevelSimData::MultiLevelSimData():
_numberLevels(0), _referenceLevel(0), _multiLevelSimData(NULL){}



peano::applications::latticeboltzmann::MultiLevelSimData::~MultiLevelSimData(){
  if (_multiLevelSimData != NULL){
    delete [] _multiLevelSimData;
    _multiLevelSimData = NULL;
  }
}


const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&
peano::applications::latticeboltzmann::MultiLevelSimData::getSimData(const int level) const {
  assertion(level > -1);
  assertion(level < _numberLevels);

  return _multiLevelSimData[level];
}


const int
peano::applications::latticeboltzmann::MultiLevelSimData::getNumberOfGridLevels() const {
  return _numberLevels;
}


void peano::applications::latticeboltzmann::MultiLevelSimData::
setNumberOfGridLevels(const int levels){
  _numberLevels = levels;
  assertion(_numberLevels > 0);
  assertion(_referenceLevel < _numberLevels);
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState sim
    = _multiLevelSimData[_referenceLevel];

  if (_multiLevelSimData != NULL){
    delete [] _multiLevelSimData;
    _multiLevelSimData = NULL;
  }

  _multiLevelSimData = new peano::applications::latticeboltzmann::blocklatticeboltzmann::
                           RegularGridBlockState[_numberLevels];
  assertion(_multiLevelSimData != NULL);

  for (int i = 0; i < _numberLevels; i++){
    _multiLevelSimData[i] = setSimData<peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState>(i,sim);
  }
}


const int
peano::applications::latticeboltzmann::MultiLevelSimData::getReferenceLevel() const {
  return _referenceLevel;
}
