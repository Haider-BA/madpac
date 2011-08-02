#include "peano/applications/faxen/lbf/records/RegularGridBlockVertex.h"

#if !defined(Parallel) && !defined(Debug) && !defined(Asserts)
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _D2UDX2(D2UDX2),
   _D2UDY2(D2UDY2),
   _D2VDX2(D2VDX2),
   _D2VDY2(D2VDY2),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
      return _D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
      _D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
      return _D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
      _D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
      return _D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
      _D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
      return _D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
      _D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
      return _persistentRecords._D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
      _persistentRecords._D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
      return _persistentRecords._D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
      _persistentRecords._D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
      return _persistentRecords._D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
      _persistentRecords._D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
      return _persistentRecords._D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
      _persistentRecords._D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
      switch (param) {
         case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
         case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
         case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
         case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
      return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
   }
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "D2UDX2:" << getD2UDX2();
      out << ",";
      out << "D2UDY2:" << getD2UDY2();
      out << ",";
      out << "D2VDX2:" << getD2VDX2();
      out << ",";
      out << "D2VDY2:" << getD2VDY2();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
      return RegularGridBlockVertexPacked(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getD2UDX2(),
         getD2UDY2(),
         getD2VDX2(),
         getD2VDY2(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertex dummyRegularGridBlockVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
         MPI_Type_commit( &RegularGridBlockVertex::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertex::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _D2UDX2(D2UDX2),
   _D2UDY2(D2UDY2),
   _D2VDX2(D2VDX2),
   _D2VDY2(D2VDY2),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
      return _D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
      _D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
      return _D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
      _D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
      return _D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
      _D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
      return _D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
      _D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
      return _persistentRecords._D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
      _persistentRecords._D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
      return _persistentRecords._D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
      _persistentRecords._D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
      return _persistentRecords._D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
      _persistentRecords._D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
      return _persistentRecords._D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
      _persistentRecords._D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "D2UDX2:" << getD2UDX2();
      out << ",";
      out << "D2UDY2:" << getD2UDY2();
      out << ",";
      out << "D2VDX2:" << getD2VDX2();
      out << ",";
      out << "D2VDY2:" << getD2VDY2();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
      return RegularGridBlockVertex(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getD2UDX2(),
         getD2UDY2(),
         getD2VDX2(),
         getD2VDY2(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _D2UDX2(D2UDX2),
   _D2UDY2(D2UDY2),
   _D2VDX2(D2VDX2),
   _D2VDY2(D2VDY2),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag),
   _lbPdfDiff(lbPdfDiff),
   _lbDensityOnBoundary(lbDensityOnBoundary),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
      return _D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
      _D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
      return _D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
      _D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
      return _D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
      _D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
      return _D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
      _D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
      return _lbPdfDiff;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
      return _lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
      return _persistentRecords._D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
      _persistentRecords._D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
      return _persistentRecords._D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
      _persistentRecords._D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
      return _persistentRecords._D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
      _persistentRecords._D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
      return _persistentRecords._D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
      _persistentRecords._D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff() const {
      return _persistentRecords._lbPdfDiff;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _persistentRecords._lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbPdfDiff[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
      
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
      return _persistentRecords._lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbDensityOnBoundary[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
      switch (param) {
         case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
         case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
         case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
         case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
      return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
   }
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "D2UDX2:" << getD2UDX2();
      out << ",";
      out << "D2UDY2:" << getD2UDY2();
      out << ",";
      out << "D2VDX2:" << getD2VDX2();
      out << ",";
      out << "D2VDY2:" << getD2VDY2();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
      return RegularGridBlockVertexPacked(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getD2UDX2(),
         getD2UDY2(),
         getD2VDX2(),
         getD2VDY2(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getLbPdfDiff(),
         getLbDensityOnBoundary(),
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //_lbPdfDiff
            MPI_DOUBLE,		 //_lbDensityOnBoundary
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
            LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertex dummyRegularGridBlockVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
         MPI_Type_commit( &RegularGridBlockVertex::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertex::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _P0(P0),
   _P1(P1),
   _F0(F0),
   _F1(F1),
   _G0(G0),
   _G1(G1),
   _D2UDX2(D2UDX2),
   _D2UDY2(D2UDY2),
   _D2VDX2(D2VDX2),
   _D2VDY2(D2VDY2),
   _U0(U0),
   _U1(U1),
   _U2(U2),
   _V0(V0),
   _V1(V1),
   _V2(V2),
   _flag(flag),
   _lbPdfDiff(lbPdfDiff),
   _lbDensityOnBoundary(lbDensityOnBoundary),
   _vertexNumber(vertexNumber),
   _lbRefinementState(lbRefinementState),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
      return _P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
      _P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
      return _P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
      _P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
      return _F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
      _F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
      return _F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
      _F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
      return _G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
      _G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
      return _G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
      _G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
      return _D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
      _D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
      return _D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
      _D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
      return _D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
      _D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
      return _D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
      _D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
      return _U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
      _U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
      return _U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
      _U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
      return _U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
      _U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
      return _V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
      _V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
      return _V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
      _V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
      return _V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
      _V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
      return _flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
      _flag = flag;
   }
   
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
      return _lbPdfDiff;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
      return _lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
      return _vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
      _vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
      return _lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
      return _persistentRecords._P0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
      _persistentRecords._P0 = P0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
      return _persistentRecords._P1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
      _persistentRecords._P1 = P1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
      return _persistentRecords._F0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
      _persistentRecords._F0 = F0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
      return _persistentRecords._F1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
      _persistentRecords._F1 = F1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
      return _persistentRecords._G0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
      _persistentRecords._G0 = G0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
      return _persistentRecords._G1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
      _persistentRecords._G1 = G1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
      return _persistentRecords._D2UDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
      _persistentRecords._D2UDX2 = D2UDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
      return _persistentRecords._D2UDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
      _persistentRecords._D2UDY2 = D2UDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
      return _persistentRecords._D2VDX2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
      _persistentRecords._D2VDX2 = D2VDX2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
      return _persistentRecords._D2VDY2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
      _persistentRecords._D2VDY2 = D2VDY2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
      return _persistentRecords._U0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
      _persistentRecords._U0 = U0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
      return _persistentRecords._U1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
      _persistentRecords._U1 = U1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
      return _persistentRecords._U2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
      _persistentRecords._U2 = U2;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
      return _persistentRecords._V0;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
      _persistentRecords._V0 = V0;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
      return _persistentRecords._V1;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
      _persistentRecords._V1 = V1;
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
      return _persistentRecords._V2;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
      _persistentRecords._V2 = V2;
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
      return _persistentRecords._flag;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
      _persistentRecords._flag = flag;
   }
   
   
   
   tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
      return _persistentRecords._lbPdfDiff;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
      _persistentRecords._lbPdfDiff = (lbPdfDiff);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbPdfDiff[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
      
   }
   
   
   
   tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
      return _persistentRecords._lbDensityOnBoundary;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
      _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      return _persistentRecords._lbDensityOnBoundary[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
      assertion(elementIndex>=0);
      assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
      _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
      
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
      return _persistentRecords._vertexNumber;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
      _persistentRecords._vertexNumber = vertexNumber;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
      return _persistentRecords._lbRefinementState;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
      _persistentRecords._lbRefinementState = lbRefinementState;
   }
   
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
   }
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "P0:" << getP0();
      out << ",";
      out << "P1:" << getP1();
      out << ",";
      out << "F0:" << getF0();
      out << ",";
      out << "F1:" << getF1();
      out << ",";
      out << "G0:" << getG0();
      out << ",";
      out << "G1:" << getG1();
      out << ",";
      out << "D2UDX2:" << getD2UDX2();
      out << ",";
      out << "D2UDY2:" << getD2UDY2();
      out << ",";
      out << "D2VDX2:" << getD2VDX2();
      out << ",";
      out << "D2VDY2:" << getD2VDY2();
      out << ",";
      out << "U0:" << getU0();
      out << ",";
      out << "U1:" << getU1();
      out << ",";
      out << "U2:" << getU2();
      out << ",";
      out << "V0:" << getV0();
      out << ",";
      out << "V1:" << getV1();
      out << ",";
      out << "V2:" << getV2();
      out << ",";
      out << "flag:" << getFlag();
      out << ",";
      out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
      out << ",";
      out << "_vertexNumber:" << getVertexNumber();
      out << ",";
      out << "_lbRefinementState:" << toString(getLbRefinementState());
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
      return RegularGridBlockVertex(
         getP0(),
         getP1(),
         getF0(),
         getF1(),
         getG0(),
         getG1(),
         getD2UDX2(),
         getD2UDY2(),
         getD2VDX2(),
         getD2VDY2(),
         getU0(),
         getU1(),
         getU2(),
         getV0(),
         getV1(),
         getV2(),
         getFlag(),
         getLbPdfDiff(),
         getLbDensityOnBoundary(),
         getVertexNumber(),
         getLbRefinementState(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );
      
      MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //_lbPdfDiff
            MPI_DOUBLE,		 //_lbDensityOnBoundary
            MPI_INT,		 //_vertexNumber
            MPI_INT,		 //_lbRefinementState
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
            LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
            1,		 //_vertexNumber
            1,		 //_lbRefinementState
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
         
      }
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
               msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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
      
      
      
      void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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
      
      
      
      bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
   return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
   _P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
   return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
   _P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
   return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
   _F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
   return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
   _F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
   return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
   _G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
   return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
   _G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
   return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
   _D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
   return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
   _D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
   return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
   _D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
   return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
   _D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
   return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
   _U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
   return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
   _U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
   return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
   _U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
   return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
   _V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
   return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
   _V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
   return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
   _V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
   return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
   _flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
   return _lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
   return _lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
   return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
   _vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
   return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
   return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
   _persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
   return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
   _persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
   return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
   _persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
   return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
   _persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
   return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
   _persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
   return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
   _persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
   return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
   _persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
   return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
   _persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
   return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
   _persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
   return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
   _persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
   return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
   _persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
   return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
   _persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
   return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
   _persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
   return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
   _persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
   return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
   _persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
   return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
   _persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
   return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
   _persistentRecords._flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff() const {
   return _persistentRecords._lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbPdfDiff[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
   
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
   return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbDensityOnBoundary[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
   
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
   return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
   _persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
   return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
   switch (param) {
      case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
      case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
      case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
      case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
   }
   return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
   return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
   out << "("; 
   out << "P0:" << getP0();
   out << ",";
   out << "P1:" << getP1();
   out << ",";
   out << "F0:" << getF0();
   out << ",";
   out << "F1:" << getF1();
   out << ",";
   out << "G0:" << getG0();
   out << ",";
   out << "G1:" << getG1();
   out << ",";
   out << "D2UDX2:" << getD2UDX2();
   out << ",";
   out << "D2UDY2:" << getD2UDY2();
   out << ",";
   out << "D2VDX2:" << getD2VDX2();
   out << ",";
   out << "D2VDY2:" << getD2VDY2();
   out << ",";
   out << "U0:" << getU0();
   out << ",";
   out << "U1:" << getU1();
   out << ",";
   out << "U2:" << getU2();
   out << ",";
   out << "V0:" << getV0();
   out << ",";
   out << "V1:" << getV1();
   out << ",";
   out << "V2:" << getV2();
   out << ",";
   out << "flag:" << getFlag();
   out << ",";
   out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_vertexNumber:" << getVertexNumber();
   out << ",";
   out << "_lbRefinementState:" << toString(getLbRefinementState());
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
   return RegularGridBlockVertexPacked(
      getP0(),
      getP1(),
      getF0(),
      getF1(),
      getG0(),
      getG1(),
      getD2UDX2(),
      getD2UDY2(),
      getD2VDX2(),
      getD2VDY2(),
      getU0(),
      getU1(),
      getU2(),
      getV0(),
      getV1(),
      getV2(),
      getFlag(),
      getLbPdfDiff(),
      getLbDensityOnBoundary(),
      getVertexNumber(),
      getLbRefinementState(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );
   
   MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_lbPdfDiff
         MPI_DOUBLE,		 //_lbDensityOnBoundary
         MPI_INT,		 //_vertexNumber
         MPI_INT,		 //_lbRefinementState
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
         LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
         1,		 //_vertexNumber
         1,		 //_lbRefinementState
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridBlockVertex dummyRegularGridBlockVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
      MPI_Type_commit( &RegularGridBlockVertex::Datatype );
      
   }
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockVertex::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
   return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
   _P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
   return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
   _P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
   return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
   _F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
   return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
   _F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
   return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
   _G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
   return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
   _G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
   return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
   _D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
   return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
   _D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
   return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
   _D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
   return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
   _D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
   return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
   _U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
   return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
   _U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
   return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
   _U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
   return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
   _V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
   return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
   _V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
   return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
   _V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
   return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
   _flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
   return _lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
   return _lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
   return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
   _vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
   return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
   return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
   _persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
   return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
   _persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
   return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
   _persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
   return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
   _persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
   return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
   _persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
   return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
   _persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
   return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
   _persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
   return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
   _persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
   return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
   _persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
   return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
   _persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
   return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
   _persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
   return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
   _persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
   return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
   _persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
   return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
   _persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
   return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
   _persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
   return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
   _persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
   return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
   _persistentRecords._flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
   return _persistentRecords._lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
   _persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbPdfDiff[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;
   
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
   return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
   _persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   return _persistentRecords._lbDensityOnBoundary[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
   assertion(elementIndex>=0);
   assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
   _persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;
   
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
   return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
   _persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
   return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
   _persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
   return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
   return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "P0:" << getP0();
   out << ",";
   out << "P1:" << getP1();
   out << ",";
   out << "F0:" << getF0();
   out << ",";
   out << "F1:" << getF1();
   out << ",";
   out << "G0:" << getG0();
   out << ",";
   out << "G1:" << getG1();
   out << ",";
   out << "D2UDX2:" << getD2UDX2();
   out << ",";
   out << "D2UDY2:" << getD2UDY2();
   out << ",";
   out << "D2VDX2:" << getD2VDX2();
   out << ",";
   out << "D2VDY2:" << getD2VDY2();
   out << ",";
   out << "U0:" << getU0();
   out << ",";
   out << "U1:" << getU1();
   out << ",";
   out << "U2:" << getU2();
   out << ",";
   out << "V0:" << getV0();
   out << ",";
   out << "V1:" << getV1();
   out << ",";
   out << "V2:" << getV2();
   out << ",";
   out << "flag:" << getFlag();
   out << ",";
   out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
   out << ",";
   out << "_vertexNumber:" << getVertexNumber();
   out << ",";
   out << "_lbRefinementState:" << toString(getLbRefinementState());
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
   return RegularGridBlockVertex(
      getP0(),
      getP1(),
      getF0(),
      getF1(),
      getG0(),
      getG1(),
      getD2UDX2(),
      getD2UDY2(),
      getD2VDX2(),
      getD2VDY2(),
      getU0(),
      getU1(),
      getU2(),
      getV0(),
      getV1(),
      getV2(),
      getFlag(),
      getLbPdfDiff(),
      getLbDensityOnBoundary(),
      getVertexNumber(),
      getLbRefinementState(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );
   
   MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //_lbPdfDiff
         MPI_DOUBLE,		 //_lbDensityOnBoundary
         MPI_INT,		 //_vertexNumber
         MPI_INT,		 //_lbRefinementState
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
         LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
         1,		 //_vertexNumber
         1,		 //_lbRefinementState
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
      
   }
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
            msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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
   
   
   
   void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
            "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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
   
   
   
   bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
   case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
   case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
   case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
   case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
   getP0(),
   getP1(),
   getF0(),
   getF1(),
   getG0(),
   getG1(),
   getD2UDX2(),
   getD2UDY2(),
   getD2VDX2(),
   getD2VDY2(),
   getU0(),
   getU1(),
   getU2(),
   getV0(),
   getV1(),
   getV2(),
   getFlag(),
   getLbPdfDiff(),
   getLbDensityOnBoundary(),
   getVertexNumber(),
   getLbRefinementState(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //_lbPdfDiff
      MPI_DOUBLE,		 //_lbDensityOnBoundary
      MPI_INT,		 //_vertexNumber
      MPI_INT,		 //_lbRefinementState
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
      LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
      1,		 //_vertexNumber
      1,		 //_lbRefinementState
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridBlockVertex dummyRegularGridBlockVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
   MPI_Type_commit( &RegularGridBlockVertex::Datatype );
   
}


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridBlockVertex::Datatype );
   
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
         msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
         "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
         "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
   getP0(),
   getP1(),
   getF0(),
   getF1(),
   getG0(),
   getG1(),
   getD2UDX2(),
   getD2UDY2(),
   getD2VDX2(),
   getD2VDY2(),
   getU0(),
   getU1(),
   getU2(),
   getV0(),
   getV1(),
   getV2(),
   getFlag(),
   getLbPdfDiff(),
   getLbDensityOnBoundary(),
   getVertexNumber(),
   getLbRefinementState(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_DOUBLE,		 //_lbPdfDiff
      MPI_DOUBLE,		 //_lbDensityOnBoundary
      MPI_INT,		 //_vertexNumber
      MPI_INT,		 //_lbRefinementState
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
      LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
      1,		 //_vertexNumber
      1,		 //_lbRefinementState
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );
   
}


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );
   
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
         msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
         "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
         "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain, x) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //_vertexNumber
   MPI_INT,		 //_lbRefinementState
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //_vertexNumber
   1,		 //_lbRefinementState
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
      msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
      "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
      msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
      "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //_vertexNumber
   MPI_INT,		 //_lbRefinementState
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //_vertexNumber
   1,		 //_lbRefinementState
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
      msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
      "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
      "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain) {

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
   msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
   "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
   msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
   "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
   msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
   "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
   "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getLbPdfDiff(),
getLbDensityOnBoundary(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //_lbPdfDiff
MPI_DOUBLE,		 //_lbDensityOnBoundary
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
1,		 //_vertexNumber
1,		 //_lbRefinementState
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertex[1]._persistentRecords._lbPdfDiff[0])), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_lbPdfDiff(lbPdfDiff),
_lbDensityOnBoundary(lbDensityOnBoundary),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbPdfDiff() const {
return _lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_lbPdfDiff = (lbPdfDiff);
}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbDensityOnBoundary() const {
return _lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_lbDensityOnBoundary = (lbDensityOnBoundary);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._lbPdfDiff, persistentRecords._lbDensityOnBoundary, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff, const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, lbPdfDiff, lbDensityOnBoundary, vertexNumber, lbRefinementState, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff() const {
return _persistentRecords._lbPdfDiff;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY,double>& lbPdfDiff) {
_persistentRecords._lbPdfDiff = (lbPdfDiff);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbPdfDiff(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbPdfDiff[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbPdfDiff(int elementIndex, const double& lbPdfDiff) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_PDFS_ON_BLOCKBOUNDARY);
_persistentRecords._lbPdfDiff[elementIndex]= lbPdfDiff;

}



tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary() const {
return _persistentRecords._lbDensityOnBoundary;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,double>& lbDensityOnBoundary) {
_persistentRecords._lbDensityOnBoundary = (lbDensityOnBoundary);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbDensityOnBoundary(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
return _persistentRecords._lbDensityOnBoundary[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbDensityOnBoundary(int elementIndex, const double& lbDensityOnBoundary) {
assertion(elementIndex>=0);
assertion(elementIndex<LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
_persistentRecords._lbDensityOnBoundary[elementIndex]= lbDensityOnBoundary;

}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_lbPdfDiff:[";
   for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbPdfDiff(i) << ",";
   }
   out << getLbPdfDiff(LB_PDFS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_lbDensityOnBoundary:[";
   for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1; i++) {
      out << getLbDensityOnBoundary(i) << ",";
   }
   out << getLbDensityOnBoundary(LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY-1) << "]";
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getLbPdfDiff(),
getLbDensityOnBoundary(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //_lbPdfDiff
MPI_DOUBLE,		 //_lbDensityOnBoundary
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
LB_PDFS_ON_BLOCKBOUNDARY,		 //_lbPdfDiff
LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY,		 //_lbDensityOnBoundary
1,		 //_vertexNumber
1,		 //_lbRefinementState
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbPdfDiff[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbDensityOnBoundary[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridBlockVertexPacked[1]._persistentRecords._lbPdfDiff[0])), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex() {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::RegularGridBlockVertex(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain, x) {

}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::~RegularGridBlockVertex() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertex::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const DynamicRefinementState& param) {
switch (param) {
case LB_REFINEMENT_DEFAULT: return "LB_REFINEMENT_DEFAULT";
case LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX: return "LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX";
case LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES: return "LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES";
case LB_REFINEMENT_IS_COARSED: return "LB_REFINEMENT_IS_COARSED";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping() {
return "DynamicRefinementState(LB_REFINEMENT_DEFAULT=0,LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX=1,LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES=2,LB_REFINEMENT_IS_COARSED=3)";
}
std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertex::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked peano::applications::faxen::lbf::records::RegularGridBlockVertex::convert() const{
return RegularGridBlockVertexPacked(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertex::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertex" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertex::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertex dummyRegularGridBlockVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertex[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertex::Datatype );
MPI_Type_commit( &RegularGridBlockVertex::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertex::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertex "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertex from node "
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
msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertex failed: "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertex",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertex::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::PersistentRecords(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_P0(P0),
_P1(P1),
_F0(F0),
_F1(F1),
_G0(G0),
_G1(G1),
_D2UDX2(D2UDX2),
_D2UDY2(D2UDY2),
_D2VDX2(D2VDX2),
_D2VDY2(D2VDY2),
_U0(U0),
_U1(U1),
_U2(U2),
_V0(V0),
_V1(V1),
_V2(V2),
_flag(flag),
_vertexNumber(vertexNumber),
_lbRefinementState(lbRefinementState),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP0() const {
return _P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP0(const double& P0) {
_P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getP1() const {
return _P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setP1(const double& P1) {
_P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF0() const {
return _F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF0(const double& F0) {
_F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getF1() const {
return _F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setF1(const double& F1) {
_F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG0() const {
return _G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG0(const double& G0) {
_G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getG1() const {
return _G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setG1(const double& G1) {
_G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDX2() const {
return _D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDX2(const double& D2UDX2) {
_D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2UDY2() const {
return _D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2UDY2(const double& D2UDY2) {
_D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDX2() const {
return _D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDX2(const double& D2VDX2) {
_D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getD2VDY2() const {
return _D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setD2VDY2(const double& D2VDY2) {
_D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU0() const {
return _U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU0(const double& U0) {
_U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU1() const {
return _U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU1(const double& U1) {
_U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getU2() const {
return _U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setU2(const double& U2) {
_U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV0() const {
return _V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV0(const double& V0) {
_V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV1() const {
return _V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV1(const double& V1) {
_V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getV2() const {
return _V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setV2(const double& V2) {
_V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getFlag() const {
return _flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setFlag(const int& flag) {
_flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getVertexNumber() const {
return _vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setVertexNumber(const int& vertexNumber) {
_vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getLbRefinementState() const {
return _lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._P0, persistentRecords._P1, persistentRecords._F0, persistentRecords._F1, persistentRecords._G0, persistentRecords._G1, persistentRecords._D2UDX2, persistentRecords._D2UDY2, persistentRecords._D2VDX2, persistentRecords._D2VDY2, persistentRecords._U0, persistentRecords._U1, persistentRecords._U2, persistentRecords._V0, persistentRecords._V1, persistentRecords._V2, persistentRecords._flag, persistentRecords._vertexNumber, persistentRecords._lbRefinementState, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::RegularGridBlockVertexPacked(const double& P0, const double& P1, const double& F0, const double& F1, const double& G0, const double& G1, const double& D2UDX2, const double& D2UDY2, const double& D2VDX2, const double& D2VDY2, const double& U0, const double& U1, const double& U2, const double& V0, const double& V1, const double& V2, const int& flag, const int& vertexNumber, const DynamicRefinementState& lbRefinementState, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(P0, P1, F0, F1, G0, G1, D2UDX2, D2UDY2, D2VDX2, D2VDY2, U0, U1, U2, V0, V1, V2, flag, vertexNumber, lbRefinementState, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::~RegularGridBlockVertexPacked() { }


double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP0() const {
return _persistentRecords._P0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP0(const double& P0) {
_persistentRecords._P0 = P0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getP1() const {
return _persistentRecords._P1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setP1(const double& P1) {
_persistentRecords._P1 = P1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF0() const {
return _persistentRecords._F0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF0(const double& F0) {
_persistentRecords._F0 = F0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getF1() const {
return _persistentRecords._F1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setF1(const double& F1) {
_persistentRecords._F1 = F1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG0() const {
return _persistentRecords._G0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG0(const double& G0) {
_persistentRecords._G0 = G0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getG1() const {
return _persistentRecords._G1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setG1(const double& G1) {
_persistentRecords._G1 = G1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDX2() const {
return _persistentRecords._D2UDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDX2(const double& D2UDX2) {
_persistentRecords._D2UDX2 = D2UDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2UDY2() const {
return _persistentRecords._D2UDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2UDY2(const double& D2UDY2) {
_persistentRecords._D2UDY2 = D2UDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDX2() const {
return _persistentRecords._D2VDX2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDX2(const double& D2VDX2) {
_persistentRecords._D2VDX2 = D2VDX2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getD2VDY2() const {
return _persistentRecords._D2VDY2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setD2VDY2(const double& D2VDY2) {
_persistentRecords._D2VDY2 = D2VDY2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU0() const {
return _persistentRecords._U0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU0(const double& U0) {
_persistentRecords._U0 = U0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU1() const {
return _persistentRecords._U1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU1(const double& U1) {
_persistentRecords._U1 = U1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getU2() const {
return _persistentRecords._U2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setU2(const double& U2) {
_persistentRecords._U2 = U2;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV0() const {
return _persistentRecords._V0;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV0(const double& V0) {
_persistentRecords._V0 = V0;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV1() const {
return _persistentRecords._V1;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV1(const double& V1) {
_persistentRecords._V1 = V1;
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getV2() const {
return _persistentRecords._V2;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setV2(const double& V2) {
_persistentRecords._V2 = V2;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getFlag() const {
return _persistentRecords._flag;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setFlag(const int& flag) {
_persistentRecords._flag = flag;
}



int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getVertexNumber() const {
return _persistentRecords._vertexNumber;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setVertexNumber(const int& vertexNumber) {
_persistentRecords._vertexNumber = vertexNumber;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::DynamicRefinementState peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getLbRefinementState() const {
return _persistentRecords._lbRefinementState;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setLbRefinementState(const DynamicRefinementState& lbRefinementState) {
_persistentRecords._lbRefinementState = lbRefinementState;
}



peano::applications::faxen::lbf::records::RegularGridBlockVertex::InsideOutsideDomain peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const DynamicRefinementState& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getDynamicRefinementStateMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getDynamicRefinementStateMapping();
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::toString(param);
}

std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::faxen::lbf::records::RegularGridBlockVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "P0:" << getP0();
out << ",";
out << "P1:" << getP1();
out << ",";
out << "F0:" << getF0();
out << ",";
out << "F1:" << getF1();
out << ",";
out << "G0:" << getG0();
out << ",";
out << "G1:" << getG1();
out << ",";
out << "D2UDX2:" << getD2UDX2();
out << ",";
out << "D2UDY2:" << getD2UDY2();
out << ",";
out << "D2VDX2:" << getD2VDX2();
out << ",";
out << "D2VDY2:" << getD2VDY2();
out << ",";
out << "U0:" << getU0();
out << ",";
out << "U1:" << getU1();
out << ",";
out << "U2:" << getU2();
out << ",";
out << "V0:" << getV0();
out << ",";
out << "V1:" << getV1();
out << ",";
out << "V2:" << getV2();
out << ",";
out << "flag:" << getFlag();
out << ",";
out << "_vertexNumber:" << getVertexNumber();
out << ",";
out << "_lbRefinementState:" << toString(getLbRefinementState());
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out <<  ")";
}


peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::PersistentRecords peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::faxen::lbf::records::RegularGridBlockVertex peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::convert() const{
return RegularGridBlockVertex(
getP0(),
getP1(),
getF0(),
getF1(),
getG0(),
getG1(),
getD2UDX2(),
getD2UDY2(),
getD2VDX2(),
getD2VDY2(),
getU0(),
getU1(),
getU2(),
getV0(),
getV1(),
getV2(),
getFlag(),
getVertexNumber(),
getLbRefinementState(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::_log( "peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked" );

MPI_Datatype peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::Datatype = 0;


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //_vertexNumber
MPI_INT,		 //_lbRefinementState
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_vertexNumber
1,		 //_lbRefinementState
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridBlockVertexPacked dummyRegularGridBlockVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._vertexNumber))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._lbRefinementState))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridBlockVertexPacked[1]._persistentRecords._vertexNumber))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridBlockVertexPacked::Datatype );
MPI_Type_commit( &RegularGridBlockVertexPacked::Datatype );

}


void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridBlockVertexPacked::Datatype );

}

void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
msg << "testing for finished send task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



void peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked failed: "
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
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked",
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



bool peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::faxen::lbf::records::RegularGridBlockVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


