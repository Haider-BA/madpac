#include "peano/applications/faxen/records/RegularGridState.h"

peano::applications::faxen::records::RegularGridState::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::records::RegularGridState::PersistentRecords::PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_xlength(xlength),
_ylength(ylength),
_delx(delx),
_dely(dely),
_t(t),
_tEnd(tEnd),
_delt(delt),
_tau(tau),
_itermax(itermax),
_res(res),
_eps(eps),
_omega(omega),
_gamma(gamma),
_Re(Re),
_GX(GX),
_GY(GY),
_UI(UI),
_VI(VI),
_PI(PI),
_fileNumber(fileNumber),
_meshWidth(meshWidth),
_numberOfInnerVertices(numberOfInnerVertices),
_numberOfBoundaryVertices(numberOfBoundaryVertices),
_numberOfOuterVertices(numberOfOuterVertices),
_numberOfInnerCells(numberOfInnerCells),
_numberOfOuterCells(numberOfOuterCells),
_gridIsStationary(gridIsStationary) {
   
}


double peano::applications::faxen::records::RegularGridState::PersistentRecords::getXlength() const {
   return _xlength;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setXlength(const double& xlength) {
   _xlength = xlength;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getYlength() const {
   return _ylength;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setYlength(const double& ylength) {
   _ylength = ylength;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getDelx() const {
   return _delx;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setDelx(const double& delx) {
   _delx = delx;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getDely() const {
   return _dely;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setDely(const double& dely) {
   _dely = dely;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getT() const {
   return _t;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setT(const double& t) {
   _t = t;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getTEnd() const {
   return _tEnd;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setTEnd(const double& tEnd) {
   _tEnd = tEnd;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getDelt() const {
   return _delt;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setDelt(const double& delt) {
   _delt = delt;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getTau() const {
   return _tau;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setTau(const double& tau) {
   _tau = tau;
}



int peano::applications::faxen::records::RegularGridState::PersistentRecords::getItermax() const {
   return _itermax;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setItermax(const int& itermax) {
   _itermax = itermax;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setRes(const double& res) {
   _res = res;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getEps() const {
   return _eps;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setEps(const double& eps) {
   _eps = eps;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getOmega() const {
   return _omega;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setOmega(const double& omega) {
   _omega = omega;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getGamma() const {
   return _gamma;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setGamma(const double& gamma) {
   _gamma = gamma;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getRe() const {
   return _Re;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setRe(const double& Re) {
   _Re = Re;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getGX() const {
   return _GX;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setGX(const double& GX) {
   _GX = GX;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getGY() const {
   return _GY;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setGY(const double& GY) {
   _GY = GY;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getUI() const {
   return _UI;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setUI(const double& UI) {
   _UI = UI;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getVI() const {
   return _VI;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setVI(const double& VI) {
   _VI = VI;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getPI() const {
   return _PI;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setPI(const double& PI) {
   _PI = PI;
}



int peano::applications::faxen::records::RegularGridState::PersistentRecords::getFileNumber() const {
   return _fileNumber;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setFileNumber(const int& fileNumber) {
   _fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridState::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::faxen::records::RegularGridState::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::faxen::records::RegularGridState::PersistentRecords::getGridIsStationary() const {
   return _gridIsStationary;
}



void peano::applications::faxen::records::RegularGridState::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   _gridIsStationary = gridIsStationary;
}


peano::applications::faxen::records::RegularGridState::RegularGridState() {
   
}


peano::applications::faxen::records::RegularGridState::RegularGridState(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._delt, persistentRecords._tau, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._gamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._fileNumber, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords._gridIsStationary) {
   
}


peano::applications::faxen::records::RegularGridState::RegularGridState(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(xlength, ylength, delx, dely, t, tEnd, delt, tau, itermax, res, eps, omega, gamma, Re, GX, GY, UI, VI, PI, fileNumber, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   
}


peano::applications::faxen::records::RegularGridState::~RegularGridState() { }


double peano::applications::faxen::records::RegularGridState::getXlength() const {
   return _persistentRecords._xlength;
}



void peano::applications::faxen::records::RegularGridState::setXlength(const double& xlength) {
   _persistentRecords._xlength = xlength;
}



double peano::applications::faxen::records::RegularGridState::getYlength() const {
   return _persistentRecords._ylength;
}



void peano::applications::faxen::records::RegularGridState::setYlength(const double& ylength) {
   _persistentRecords._ylength = ylength;
}



double peano::applications::faxen::records::RegularGridState::getDelx() const {
   return _persistentRecords._delx;
}



void peano::applications::faxen::records::RegularGridState::setDelx(const double& delx) {
   _persistentRecords._delx = delx;
}



double peano::applications::faxen::records::RegularGridState::getDely() const {
   return _persistentRecords._dely;
}



void peano::applications::faxen::records::RegularGridState::setDely(const double& dely) {
   _persistentRecords._dely = dely;
}



double peano::applications::faxen::records::RegularGridState::getT() const {
   return _persistentRecords._t;
}



void peano::applications::faxen::records::RegularGridState::setT(const double& t) {
   _persistentRecords._t = t;
}



double peano::applications::faxen::records::RegularGridState::getTEnd() const {
   return _persistentRecords._tEnd;
}



void peano::applications::faxen::records::RegularGridState::setTEnd(const double& tEnd) {
   _persistentRecords._tEnd = tEnd;
}



double peano::applications::faxen::records::RegularGridState::getDelt() const {
   return _persistentRecords._delt;
}



void peano::applications::faxen::records::RegularGridState::setDelt(const double& delt) {
   _persistentRecords._delt = delt;
}



double peano::applications::faxen::records::RegularGridState::getTau() const {
   return _persistentRecords._tau;
}



void peano::applications::faxen::records::RegularGridState::setTau(const double& tau) {
   _persistentRecords._tau = tau;
}



int peano::applications::faxen::records::RegularGridState::getItermax() const {
   return _persistentRecords._itermax;
}



void peano::applications::faxen::records::RegularGridState::setItermax(const int& itermax) {
   _persistentRecords._itermax = itermax;
}



double peano::applications::faxen::records::RegularGridState::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::records::RegularGridState::setRes(const double& res) {
   _persistentRecords._res = res;
}



double peano::applications::faxen::records::RegularGridState::getEps() const {
   return _persistentRecords._eps;
}



void peano::applications::faxen::records::RegularGridState::setEps(const double& eps) {
   _persistentRecords._eps = eps;
}



double peano::applications::faxen::records::RegularGridState::getOmega() const {
   return _persistentRecords._omega;
}



void peano::applications::faxen::records::RegularGridState::setOmega(const double& omega) {
   _persistentRecords._omega = omega;
}



double peano::applications::faxen::records::RegularGridState::getGamma() const {
   return _persistentRecords._gamma;
}



void peano::applications::faxen::records::RegularGridState::setGamma(const double& gamma) {
   _persistentRecords._gamma = gamma;
}



double peano::applications::faxen::records::RegularGridState::getRe() const {
   return _persistentRecords._Re;
}



void peano::applications::faxen::records::RegularGridState::setRe(const double& Re) {
   _persistentRecords._Re = Re;
}



double peano::applications::faxen::records::RegularGridState::getGX() const {
   return _persistentRecords._GX;
}



void peano::applications::faxen::records::RegularGridState::setGX(const double& GX) {
   _persistentRecords._GX = GX;
}



double peano::applications::faxen::records::RegularGridState::getGY() const {
   return _persistentRecords._GY;
}



void peano::applications::faxen::records::RegularGridState::setGY(const double& GY) {
   _persistentRecords._GY = GY;
}



double peano::applications::faxen::records::RegularGridState::getUI() const {
   return _persistentRecords._UI;
}



void peano::applications::faxen::records::RegularGridState::setUI(const double& UI) {
   _persistentRecords._UI = UI;
}



double peano::applications::faxen::records::RegularGridState::getVI() const {
   return _persistentRecords._VI;
}



void peano::applications::faxen::records::RegularGridState::setVI(const double& VI) {
   _persistentRecords._VI = VI;
}



double peano::applications::faxen::records::RegularGridState::getPI() const {
   return _persistentRecords._PI;
}



void peano::applications::faxen::records::RegularGridState::setPI(const double& PI) {
   _persistentRecords._PI = PI;
}



int peano::applications::faxen::records::RegularGridState::getFileNumber() const {
   return _persistentRecords._fileNumber;
}



void peano::applications::faxen::records::RegularGridState::setFileNumber(const int& fileNumber) {
   _persistentRecords._fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridState::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::faxen::records::RegularGridState::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::faxen::records::RegularGridState::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::faxen::records::RegularGridState::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::faxen::records::RegularGridState::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::faxen::records::RegularGridState::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::faxen::records::RegularGridState::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::faxen::records::RegularGridState::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::faxen::records::RegularGridState::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::faxen::records::RegularGridState::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::faxen::records::RegularGridState::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::faxen::records::RegularGridState::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::faxen::records::RegularGridState::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::faxen::records::RegularGridState::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::faxen::records::RegularGridState::getGridIsStationary() const {
   return _persistentRecords._gridIsStationary;
}



void peano::applications::faxen::records::RegularGridState::setGridIsStationary(const bool& gridIsStationary) {
   _persistentRecords._gridIsStationary = gridIsStationary;
}




std::string peano::applications::faxen::records::RegularGridState::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::RegularGridState::toString (std::ostream& out) const {
   out << "("; 
   out << "xlength:" << getXlength();
   out << ",";
   out << "ylength:" << getYlength();
   out << ",";
   out << "delx:" << getDelx();
   out << ",";
   out << "dely:" << getDely();
   out << ",";
   out << "t:" << getT();
   out << ",";
   out << "t_end:" << getTEnd();
   out << ",";
   out << "delt:" << getDelt();
   out << ",";
   out << "tau:" << getTau();
   out << ",";
   out << "itermax:" << getItermax();
   out << ",";
   out << "res:" << getRes();
   out << ",";
   out << "eps:" << getEps();
   out << ",";
   out << "omega:" << getOmega();
   out << ",";
   out << "gamma:" << getGamma();
   out << ",";
   out << "Re:" << getRe();
   out << ",";
   out << "GX:" << getGX();
   out << ",";
   out << "GY:" << getGY();
   out << ",";
   out << "UI:" << getUI();
   out << ",";
   out << "VI:" << getVI();
   out << ",";
   out << "PI:" << getPI();
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


peano::applications::faxen::records::RegularGridState::PersistentRecords peano::applications::faxen::records::RegularGridState::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::RegularGridStatePacked peano::applications::faxen::records::RegularGridState::convert() const{
   return RegularGridStatePacked(
      getXlength(),
      getYlength(),
      getDelx(),
      getDely(),
      getT(),
      getTEnd(),
      getDelt(),
      getTau(),
      getItermax(),
      getRes(),
      getEps(),
      getOmega(),
      getGamma(),
      getRe(),
      getGX(),
      getGY(),
      getUI(),
      getVI(),
      getPI(),
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
   
   tarch::logging::Log peano::applications::faxen::records::RegularGridState::_log( "peano::applications::faxen::records::RegularGridState" );
   
   MPI_Datatype peano::applications::faxen::records::RegularGridState::Datatype = 0;
   
   
   void peano::applications::faxen::records::RegularGridState::initDatatype() {
      const int Attributes = 9;
      MPI_Datatype subtypes[Attributes] = {
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
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._fileNumber))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._meshWidth[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfInnerVertices))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfOuterVertices))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfInnerCells))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._numberOfOuterCells))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[0]._persistentRecords._gridIsStationary))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridState[1]._persistentRecords._fileNumber))), 		&disp[8] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridState::Datatype );
      MPI_Type_commit( &RegularGridState::Datatype );
      
   }
   
   
   void peano::applications::faxen::records::RegularGridState::shutdownDatatype() {
      MPI_Type_free( &RegularGridState::Datatype );
      
   }
   
   void peano::applications::faxen::records::RegularGridState::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::RegularGridState "
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
            msg << "testing for finished send task for peano::applications::faxen::records::RegularGridState "
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
            "peano::applications::faxen::records::RegularGridState",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridState",
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
   
   
   
   void peano::applications::faxen::records::RegularGridState::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::RegularGridState from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridState failed: "
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
            "peano::applications::faxen::records::RegularGridState",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridState",
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
   
   
   
   bool peano::applications::faxen::records::RegularGridState::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::RegularGridState::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::PersistentRecords() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::PersistentRecords(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_xlength(xlength),
_ylength(ylength),
_delx(delx),
_dely(dely),
_t(t),
_tEnd(tEnd),
_delt(delt),
_tau(tau),
_itermax(itermax),
_res(res),
_eps(eps),
_omega(omega),
_gamma(gamma),
_Re(Re),
_GX(GX),
_GY(GY),
_UI(UI),
_VI(VI),
_PI(PI),
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


double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getXlength() const {
   return _xlength;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setXlength(const double& xlength) {
   _xlength = xlength;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getYlength() const {
   return _ylength;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setYlength(const double& ylength) {
   _ylength = ylength;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getDelx() const {
   return _delx;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setDelx(const double& delx) {
   _delx = delx;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getDely() const {
   return _dely;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setDely(const double& dely) {
   _dely = dely;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getT() const {
   return _t;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setT(const double& t) {
   _t = t;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getTEnd() const {
   return _tEnd;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setTEnd(const double& tEnd) {
   _tEnd = tEnd;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getDelt() const {
   return _delt;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setDelt(const double& delt) {
   _delt = delt;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getTau() const {
   return _tau;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setTau(const double& tau) {
   _tau = tau;
}



int peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getItermax() const {
   return _itermax;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setItermax(const int& itermax) {
   _itermax = itermax;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getRes() const {
   return _res;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setRes(const double& res) {
   _res = res;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getEps() const {
   return _eps;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setEps(const double& eps) {
   _eps = eps;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getOmega() const {
   return _omega;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setOmega(const double& omega) {
   _omega = omega;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getGamma() const {
   return _gamma;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setGamma(const double& gamma) {
   _gamma = gamma;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getRe() const {
   return _Re;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setRe(const double& Re) {
   _Re = Re;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getGX() const {
   return _GX;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setGX(const double& GX) {
   _GX = GX;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getGY() const {
   return _GY;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setGY(const double& GY) {
   _GY = GY;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getUI() const {
   return _UI;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setUI(const double& UI) {
   _UI = UI;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getVI() const {
   return _VI;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setVI(const double& VI) {
   _VI = VI;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getPI() const {
   return _PI;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setPI(const double& PI) {
   _PI = PI;
}



int peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getFileNumber() const {
   return _fileNumber;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setFileNumber(const int& fileNumber) {
   _fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getMeshWidth() const {
   return _meshWidth;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _meshWidth = (meshWidth);
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getNumberOfInnerVertices() const {
   return _numberOfInnerVertices;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getNumberOfBoundaryVertices() const {
   return _numberOfBoundaryVertices;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getNumberOfOuterVertices() const {
   return _numberOfOuterVertices;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getNumberOfInnerCells() const {
   return _numberOfInnerCells;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getNumberOfOuterCells() const {
   return _numberOfOuterCells;
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _packedRecords0 = gridIsStationary ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}


peano::applications::faxen::records::RegularGridStatePacked::RegularGridStatePacked() {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::records::RegularGridStatePacked::RegularGridStatePacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._xlength, persistentRecords._ylength, persistentRecords._delx, persistentRecords._dely, persistentRecords._t, persistentRecords._tEnd, persistentRecords._delt, persistentRecords._tau, persistentRecords._itermax, persistentRecords._res, persistentRecords._eps, persistentRecords._omega, persistentRecords._gamma, persistentRecords._Re, persistentRecords._GX, persistentRecords._GY, persistentRecords._UI, persistentRecords._VI, persistentRecords._PI, persistentRecords._fileNumber, persistentRecords._meshWidth, persistentRecords._numberOfInnerVertices, persistentRecords._numberOfBoundaryVertices, persistentRecords._numberOfOuterVertices, persistentRecords._numberOfInnerCells, persistentRecords._numberOfOuterCells, persistentRecords.getGridIsStationary()) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::records::RegularGridStatePacked::RegularGridStatePacked(const double& xlength, const double& ylength, const double& delx, const double& dely, const double& t, const double& tEnd, const double& delt, const double& tau, const int& itermax, const double& res, const double& eps, const double& omega, const double& gamma, const double& Re, const double& GX, const double& GY, const double& UI, const double& VI, const double& PI, const int& fileNumber, const tarch::la::Vector<DIMENSIONS,double>& meshWidth, const double& numberOfInnerVertices, const double& numberOfBoundaryVertices, const double& numberOfOuterVertices, const double& numberOfInnerCells, const double& numberOfOuterCells, const bool& gridIsStationary):
_persistentRecords(xlength, ylength, delx, dely, t, tEnd, delt, tau, itermax, res, eps, omega, gamma, Re, GX, GY, UI, VI, PI, fileNumber, meshWidth, numberOfInnerVertices, numberOfBoundaryVertices, numberOfOuterVertices, numberOfInnerCells, numberOfOuterCells, gridIsStationary) {
   assertion((1 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::records::RegularGridStatePacked::~RegularGridStatePacked() { }


double peano::applications::faxen::records::RegularGridStatePacked::getXlength() const {
   return _persistentRecords._xlength;
}



void peano::applications::faxen::records::RegularGridStatePacked::setXlength(const double& xlength) {
   _persistentRecords._xlength = xlength;
}



double peano::applications::faxen::records::RegularGridStatePacked::getYlength() const {
   return _persistentRecords._ylength;
}



void peano::applications::faxen::records::RegularGridStatePacked::setYlength(const double& ylength) {
   _persistentRecords._ylength = ylength;
}



double peano::applications::faxen::records::RegularGridStatePacked::getDelx() const {
   return _persistentRecords._delx;
}



void peano::applications::faxen::records::RegularGridStatePacked::setDelx(const double& delx) {
   _persistentRecords._delx = delx;
}



double peano::applications::faxen::records::RegularGridStatePacked::getDely() const {
   return _persistentRecords._dely;
}



void peano::applications::faxen::records::RegularGridStatePacked::setDely(const double& dely) {
   _persistentRecords._dely = dely;
}



double peano::applications::faxen::records::RegularGridStatePacked::getT() const {
   return _persistentRecords._t;
}



void peano::applications::faxen::records::RegularGridStatePacked::setT(const double& t) {
   _persistentRecords._t = t;
}



double peano::applications::faxen::records::RegularGridStatePacked::getTEnd() const {
   return _persistentRecords._tEnd;
}



void peano::applications::faxen::records::RegularGridStatePacked::setTEnd(const double& tEnd) {
   _persistentRecords._tEnd = tEnd;
}



double peano::applications::faxen::records::RegularGridStatePacked::getDelt() const {
   return _persistentRecords._delt;
}



void peano::applications::faxen::records::RegularGridStatePacked::setDelt(const double& delt) {
   _persistentRecords._delt = delt;
}



double peano::applications::faxen::records::RegularGridStatePacked::getTau() const {
   return _persistentRecords._tau;
}



void peano::applications::faxen::records::RegularGridStatePacked::setTau(const double& tau) {
   _persistentRecords._tau = tau;
}



int peano::applications::faxen::records::RegularGridStatePacked::getItermax() const {
   return _persistentRecords._itermax;
}



void peano::applications::faxen::records::RegularGridStatePacked::setItermax(const int& itermax) {
   _persistentRecords._itermax = itermax;
}



double peano::applications::faxen::records::RegularGridStatePacked::getRes() const {
   return _persistentRecords._res;
}



void peano::applications::faxen::records::RegularGridStatePacked::setRes(const double& res) {
   _persistentRecords._res = res;
}



double peano::applications::faxen::records::RegularGridStatePacked::getEps() const {
   return _persistentRecords._eps;
}



void peano::applications::faxen::records::RegularGridStatePacked::setEps(const double& eps) {
   _persistentRecords._eps = eps;
}



double peano::applications::faxen::records::RegularGridStatePacked::getOmega() const {
   return _persistentRecords._omega;
}



void peano::applications::faxen::records::RegularGridStatePacked::setOmega(const double& omega) {
   _persistentRecords._omega = omega;
}



double peano::applications::faxen::records::RegularGridStatePacked::getGamma() const {
   return _persistentRecords._gamma;
}



void peano::applications::faxen::records::RegularGridStatePacked::setGamma(const double& gamma) {
   _persistentRecords._gamma = gamma;
}



double peano::applications::faxen::records::RegularGridStatePacked::getRe() const {
   return _persistentRecords._Re;
}



void peano::applications::faxen::records::RegularGridStatePacked::setRe(const double& Re) {
   _persistentRecords._Re = Re;
}



double peano::applications::faxen::records::RegularGridStatePacked::getGX() const {
   return _persistentRecords._GX;
}



void peano::applications::faxen::records::RegularGridStatePacked::setGX(const double& GX) {
   _persistentRecords._GX = GX;
}



double peano::applications::faxen::records::RegularGridStatePacked::getGY() const {
   return _persistentRecords._GY;
}



void peano::applications::faxen::records::RegularGridStatePacked::setGY(const double& GY) {
   _persistentRecords._GY = GY;
}



double peano::applications::faxen::records::RegularGridStatePacked::getUI() const {
   return _persistentRecords._UI;
}



void peano::applications::faxen::records::RegularGridStatePacked::setUI(const double& UI) {
   _persistentRecords._UI = UI;
}



double peano::applications::faxen::records::RegularGridStatePacked::getVI() const {
   return _persistentRecords._VI;
}



void peano::applications::faxen::records::RegularGridStatePacked::setVI(const double& VI) {
   _persistentRecords._VI = VI;
}



double peano::applications::faxen::records::RegularGridStatePacked::getPI() const {
   return _persistentRecords._PI;
}



void peano::applications::faxen::records::RegularGridStatePacked::setPI(const double& PI) {
   _persistentRecords._PI = PI;
}



int peano::applications::faxen::records::RegularGridStatePacked::getFileNumber() const {
   return _persistentRecords._fileNumber;
}



void peano::applications::faxen::records::RegularGridStatePacked::setFileNumber(const int& fileNumber) {
   _persistentRecords._fileNumber = fileNumber;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::records::RegularGridStatePacked::getMeshWidth() const {
   return _persistentRecords._meshWidth;
}



void peano::applications::faxen::records::RegularGridStatePacked::setMeshWidth(const tarch::la::Vector<DIMENSIONS,double>& meshWidth) {
   _persistentRecords._meshWidth = (meshWidth);
}



double peano::applications::faxen::records::RegularGridStatePacked::getMeshWidth(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._meshWidth[elementIndex];
   
}



void peano::applications::faxen::records::RegularGridStatePacked::setMeshWidth(int elementIndex, const double& meshWidth) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._meshWidth[elementIndex]= meshWidth;
   
}



double peano::applications::faxen::records::RegularGridStatePacked::getNumberOfInnerVertices() const {
   return _persistentRecords._numberOfInnerVertices;
}



void peano::applications::faxen::records::RegularGridStatePacked::setNumberOfInnerVertices(const double& numberOfInnerVertices) {
   _persistentRecords._numberOfInnerVertices = numberOfInnerVertices;
}



double peano::applications::faxen::records::RegularGridStatePacked::getNumberOfBoundaryVertices() const {
   return _persistentRecords._numberOfBoundaryVertices;
}



void peano::applications::faxen::records::RegularGridStatePacked::setNumberOfBoundaryVertices(const double& numberOfBoundaryVertices) {
   _persistentRecords._numberOfBoundaryVertices = numberOfBoundaryVertices;
}



double peano::applications::faxen::records::RegularGridStatePacked::getNumberOfOuterVertices() const {
   return _persistentRecords._numberOfOuterVertices;
}



void peano::applications::faxen::records::RegularGridStatePacked::setNumberOfOuterVertices(const double& numberOfOuterVertices) {
   _persistentRecords._numberOfOuterVertices = numberOfOuterVertices;
}



double peano::applications::faxen::records::RegularGridStatePacked::getNumberOfInnerCells() const {
   return _persistentRecords._numberOfInnerCells;
}



void peano::applications::faxen::records::RegularGridStatePacked::setNumberOfInnerCells(const double& numberOfInnerCells) {
   _persistentRecords._numberOfInnerCells = numberOfInnerCells;
}



double peano::applications::faxen::records::RegularGridStatePacked::getNumberOfOuterCells() const {
   return _persistentRecords._numberOfOuterCells;
}



void peano::applications::faxen::records::RegularGridStatePacked::setNumberOfOuterCells(const double& numberOfOuterCells) {
   _persistentRecords._numberOfOuterCells = numberOfOuterCells;
}



bool peano::applications::faxen::records::RegularGridStatePacked::getGridIsStationary() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::faxen::records::RegularGridStatePacked::setGridIsStationary(const bool& gridIsStationary) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = gridIsStationary ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}




std::string peano::applications::faxen::records::RegularGridStatePacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::records::RegularGridStatePacked::toString (std::ostream& out) const {
   out << "("; 
   out << "xlength:" << getXlength();
   out << ",";
   out << "ylength:" << getYlength();
   out << ",";
   out << "delx:" << getDelx();
   out << ",";
   out << "dely:" << getDely();
   out << ",";
   out << "t:" << getT();
   out << ",";
   out << "t_end:" << getTEnd();
   out << ",";
   out << "delt:" << getDelt();
   out << ",";
   out << "tau:" << getTau();
   out << ",";
   out << "itermax:" << getItermax();
   out << ",";
   out << "res:" << getRes();
   out << ",";
   out << "eps:" << getEps();
   out << ",";
   out << "omega:" << getOmega();
   out << ",";
   out << "gamma:" << getGamma();
   out << ",";
   out << "Re:" << getRe();
   out << ",";
   out << "GX:" << getGX();
   out << ",";
   out << "GY:" << getGY();
   out << ",";
   out << "UI:" << getUI();
   out << ",";
   out << "VI:" << getVI();
   out << ",";
   out << "PI:" << getPI();
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


peano::applications::faxen::records::RegularGridStatePacked::PersistentRecords peano::applications::faxen::records::RegularGridStatePacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::records::RegularGridState peano::applications::faxen::records::RegularGridStatePacked::convert() const{
   return RegularGridState(
      getXlength(),
      getYlength(),
      getDelx(),
      getDely(),
      getT(),
      getTEnd(),
      getDelt(),
      getTau(),
      getItermax(),
      getRes(),
      getEps(),
      getOmega(),
      getGamma(),
      getRe(),
      getGX(),
      getGY(),
      getUI(),
      getVI(),
      getPI(),
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
   
   tarch::logging::Log peano::applications::faxen::records::RegularGridStatePacked::_log( "peano::applications::faxen::records::RegularGridStatePacked" );
   
   MPI_Datatype peano::applications::faxen::records::RegularGridStatePacked::Datatype = 0;
   
   
   void peano::applications::faxen::records::RegularGridStatePacked::initDatatype() {
      const int Attributes = 9;
      MPI_Datatype subtypes[Attributes] = {
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
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._fileNumber))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._meshWidth[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfInnerVertices))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfBoundaryVertices))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfOuterVertices))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfInnerCells))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._numberOfOuterCells))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridStatePacked[1]._persistentRecords._fileNumber))), 		&disp[8] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridStatePacked::Datatype );
      MPI_Type_commit( &RegularGridStatePacked::Datatype );
      
   }
   
   
   void peano::applications::faxen::records::RegularGridStatePacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridStatePacked::Datatype );
      
   }
   
   void peano::applications::faxen::records::RegularGridStatePacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::records::RegularGridStatePacked "
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
            msg << "testing for finished send task for peano::applications::faxen::records::RegularGridStatePacked "
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
            "peano::applications::faxen::records::RegularGridStatePacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridStatePacked",
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
   
   
   
   void peano::applications::faxen::records::RegularGridStatePacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::records::RegularGridStatePacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::records::RegularGridStatePacked failed: "
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
            "peano::applications::faxen::records::RegularGridStatePacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::records::RegularGridStatePacked",
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
   
   
   
   bool peano::applications::faxen::records::RegularGridStatePacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::records::RegularGridStatePacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif



