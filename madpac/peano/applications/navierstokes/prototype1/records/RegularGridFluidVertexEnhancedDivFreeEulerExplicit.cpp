#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"

#if !defined(Parallel) && !defined(Debug) && !defined(Asserts)
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType),
   _u(u),
   _gradP(gradP),
   _F(F),
   _force(force),
   _A(A),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
      switch (param) {
         case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
         case INFLOW: return "INFLOW";
         case OUTFLOW: return "OUTFLOW";
         case LID: return "LID";
         case OBSTACLE: return "OBSTACLE";
         case PERIODIC_LEFT: return "PERIODIC_LEFT";
         case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
         case PERIODIC_CORNER: return "PERIODIC_CORNER";
         case WALL: return "WALL";
         case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
         case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
         case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
         case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
         case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
         case IGNORED: return "IGNORED";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
      return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
   }
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
      switch (param) {
         case INNER: return "INNER";
         case DIRICHLET: return "DIRICHLET";
         case NEUMANN: return "NEUMANN";
         case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
         case PERIODIC: return "PERIODIC";
         case OUTER: return "OUTER";
         case UNDEF: return "UNDEF";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
      return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
   }
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getF(),
         getForce(),
         getA(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType) {
      setU(u);
      setGradP(gradP);
      setF(F);
      setForce(force);
      setA(A);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getF(),
         getForce(),
         getA(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 8;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[7] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType),
   _u(u),
   _gradP(gradP),
   _F(F),
   _force(force),
   _A(A),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks),_gradPUpdate(gradPUpdate) {
      
   }
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
      return _gradPUpdate;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
      _gradPUpdate = (gradPUpdate);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _gradPUpdate[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _gradPUpdate[elementIndex]= gradPUpdate;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
      switch (param) {
         case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
         case INFLOW: return "INFLOW";
         case OUTFLOW: return "OUTFLOW";
         case LID: return "LID";
         case OBSTACLE: return "OBSTACLE";
         case PERIODIC_LEFT: return "PERIODIC_LEFT";
         case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
         case PERIODIC_CORNER: return "PERIODIC_CORNER";
         case WALL: return "WALL";
         case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
         case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
         case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
         case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
         case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
         case IGNORED: return "IGNORED";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
      return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
   }
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
      switch (param) {
         case INNER: return "INNER";
         case DIRICHLET: return "DIRICHLET";
         case NEUMANN: return "NEUMANN";
         case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
         case PERIODIC: return "PERIODIC";
         case OUTER: return "OUTER";
         case UNDEF: return "UNDEF";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
      return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
   }
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
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
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getGradPUpdate(),
         getF(),
         getForce(),
         getA(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
         const int Attributes = 12;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_DOUBLE,		 //gradPUpdate
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[11] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _fluidVertexType(fluidVertexType),
   _boundaryType(boundaryType),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setU(u);
      setGradP(gradP);
      setF(F);
      setForce(force);
      setA(A);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
      return _fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
      return _boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
      return _u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _u = (u);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
      return _gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _gradP = (gradP);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
      return _F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _F = (F);
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
      return _force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
      return _A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
      _A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks) {
      setGradPUpdate(gradPUpdate);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
      return _persistentRecords._fluidVertexType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
      _persistentRecords._fluidVertexType = fluidVertexType;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
      return _persistentRecords._boundaryType;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
      _persistentRecords._boundaryType = boundaryType;
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
      return _persistentRecords._u;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
      _persistentRecords._u = (u);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._u[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._u[elementIndex]= u;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
      return _persistentRecords._gradP;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
      _persistentRecords._gradP = (gradP);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._gradP[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._gradP[elementIndex]= gradP;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
      return _gradPUpdate;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
      _gradPUpdate = (gradPUpdate);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _gradPUpdate[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _gradPUpdate[elementIndex]= gradPUpdate;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
      return _persistentRecords._F;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
      _persistentRecords._F = (F);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._F[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._F[elementIndex]= F;
      
   }
   
   
   
   tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
      return _persistentRecords._force;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
      _persistentRecords._force = (force);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      return _persistentRecords._force[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
      assertion(elementIndex>=0);
      assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
      _persistentRecords._force[elementIndex]= force;
      
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
      return _persistentRecords._A;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
      _persistentRecords._A = A;
   }
   
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
   }
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
      return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "fluidVertexType:" << toString(getFluidVertexType());
      out << ",";
      out << "boundaryType:" << toString(getBoundaryType());
      out << ",";
      out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
      out << ",";
      out << "A:" << getA();
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
   
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
      return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
         getFluidVertexType(),
         getBoundaryType(),
         getU(),
         getGradP(),
         getGradPUpdate(),
         getF(),
         getForce(),
         getA(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
      
      MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
         const int Attributes = 12;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //fluidVertexType
            MPI_INT,		 //boundaryType
            MPI_DOUBLE,		 //u
            MPI_DOUBLE,		 //gradP
            MPI_DOUBLE,		 //F
            MPI_DOUBLE,		 //force
            MPI_DOUBLE,		 //A
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_DOUBLE,		 //gradPUpdate
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //fluidVertexType
            1,		 //boundaryType
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
            1,		 //A
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[9] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[10] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[11] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
         
      }
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
               msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
      
      
      
      bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
   return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
   return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
   return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
   return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
   return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
   _A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks),_gradPUpdate(gradPUpdate) {
   
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
   return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
   return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
   return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._u[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._u[elementIndex]= u;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
   return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._gradP[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._gradP[elementIndex]= gradP;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
   return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
   _gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _gradPUpdate[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _gradPUpdate[elementIndex]= gradPUpdate;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
   return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._F[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._F[elementIndex]= F;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
   return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._force[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._force[elementIndex]= force;
   
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
   return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
   _persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
   switch (param) {
      case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
      case INFLOW: return "INFLOW";
      case OUTFLOW: return "OUTFLOW";
      case LID: return "LID";
      case OBSTACLE: return "OBSTACLE";
      case PERIODIC_LEFT: return "PERIODIC_LEFT";
      case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
      case PERIODIC_CORNER: return "PERIODIC_CORNER";
      case WALL: return "WALL";
      case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
      case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
      case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
      case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
      case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
      case IGNORED: return "IGNORED";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
   return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
   switch (param) {
      case INNER: return "INNER";
      case DIRICHLET: return "DIRICHLET";
      case NEUMANN: return "NEUMANN";
      case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
      case PERIODIC: return "PERIODIC";
      case OUTER: return "OUTER";
      case UNDEF: return "UNDEF";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
   return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
   out << "("; 
   out << "fluidVertexType:" << toString(getFluidVertexType());
   out << ",";
   out << "boundaryType:" << toString(getBoundaryType());
   out << ",";
   out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
   return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
      getFluidVertexType(),
      getBoundaryType(),
      getU(),
      getGradP(),
      getGradPUpdate(),
      getF(),
      getForce(),
      getA(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
      const int Attributes = 11;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //fluidVertexType
         MPI_INT,		 //boundaryType
         MPI_DOUBLE,		 //u
         MPI_DOUBLE,		 //gradP
         MPI_DOUBLE,		 //F
         MPI_DOUBLE,		 //force
         MPI_DOUBLE,		 //A
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_DOUBLE,		 //gradPUpdate
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //fluidVertexType
         1,		 //boundaryType
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
         1,		 //A
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[10] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_x(x),
_adjacentRanks(adjacentRanks) {
   setU(u);
   setGradP(gradP);
   setF(F);
   setForce(force);
   setA(A);
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
   return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
   return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
   return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
   return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
   return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
   return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
   return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
   _A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x, adjacentRanks) {
   setGradPUpdate(gradPUpdate);
   assertion((2 < (8 * sizeof(short int))));
   
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
   return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
   _persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
   return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
   _persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
   return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
   _persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._u[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._u[elementIndex]= u;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
   return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
   _persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._gradP[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._gradP[elementIndex]= gradP;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
   return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
   _gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _gradPUpdate[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _gradPUpdate[elementIndex]= gradPUpdate;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
   return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
   _persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._F[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._F[elementIndex]= F;
   
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
   return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
   _persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   return _persistentRecords._force[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
   assertion(elementIndex>=0);
   assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
   _persistentRecords._force[elementIndex]= force;
   
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
   return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
   _persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
   return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "fluidVertexType:" << toString(getFluidVertexType());
   out << ",";
   out << "boundaryType:" << toString(getBoundaryType());
   out << ",";
   out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
   out << ",";
   out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
   return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
      getFluidVertexType(),
      getBoundaryType(),
      getU(),
      getGradP(),
      getGradPUpdate(),
      getF(),
      getForce(),
      getA(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );
   
   MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
      const int Attributes = 11;
      MPI_Datatype subtypes[Attributes] = {
         MPI_INT,		 //fluidVertexType
         MPI_INT,		 //boundaryType
         MPI_DOUBLE,		 //u
         MPI_DOUBLE,		 //gradP
         MPI_DOUBLE,		 //F
         MPI_DOUBLE,		 //force
         MPI_DOUBLE,		 //A
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_DOUBLE,		 //gradPUpdate
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //fluidVertexType
         1,		 //boundaryType
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
         1,		 //A
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[9] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[10] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
      
   }
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
            msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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
   
   
   
   bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks),_gradPUpdate(gradPUpdate) {

}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
   case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
   case INFLOW: return "INFLOW";
   case OUTFLOW: return "OUTFLOW";
   case LID: return "LID";
   case OBSTACLE: return "OBSTACLE";
   case PERIODIC_LEFT: return "PERIODIC_LEFT";
   case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
   case PERIODIC_CORNER: return "PERIODIC_CORNER";
   case WALL: return "WALL";
   case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
   case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
   case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
   case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
   case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
   case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
   case INNER: return "INNER";
   case DIRICHLET: return "DIRICHLET";
   case NEUMANN: return "NEUMANN";
   case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
   case PERIODIC: return "PERIODIC";
   case OUTER: return "OUTER";
   case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
   getFluidVertexType(),
   getBoundaryType(),
   getU(),
   getGradP(),
   getGradPUpdate(),
   getF(),
   getForce(),
   getA(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
   const int Attributes = 11;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //fluidVertexType
      MPI_INT,		 //boundaryType
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //gradP
      MPI_DOUBLE,		 //F
      MPI_DOUBLE,		 //force
      MPI_DOUBLE,		 //A
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_DOUBLE,		 //gradPUpdate
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //fluidVertexType
      1,		 //boundaryType
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
      1,		 //A
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[8] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[9] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[10] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
   MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
   
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_adjacentRanks(adjacentRanks) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks) {
setGradPUpdate(gradPUpdate);
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
   getFluidVertexType(),
   getBoundaryType(),
   getU(),
   getGradP(),
   getGradPUpdate(),
   getF(),
   getForce(),
   getA(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
   const int Attributes = 11;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //fluidVertexType
      MPI_INT,		 //boundaryType
      MPI_DOUBLE,		 //u
      MPI_DOUBLE,		 //gradP
      MPI_DOUBLE,		 //F
      MPI_DOUBLE,		 //force
      MPI_DOUBLE,		 //A
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_DOUBLE,		 //gradPUpdate
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //fluidVertexType
      1,		 //boundaryType
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
      1,		 //A
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[8] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[9] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[10] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
   
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
         msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 10;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //fluidVertexType
   MPI_INT,		 //boundaryType
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //gradP
   MPI_DOUBLE,		 //F
   MPI_DOUBLE,		 //force
   MPI_DOUBLE,		 //A
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //fluidVertexType
   1,		 //boundaryType
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
   1,		 //A
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[9] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_x(x) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 10;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //fluidVertexType
   MPI_INT,		 //boundaryType
   MPI_DOUBLE,		 //u
   MPI_DOUBLE,		 //gradP
   MPI_DOUBLE,		 //F
   MPI_DOUBLE,		 //force
   MPI_DOUBLE,		 //A
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //fluidVertexType
   1,		 //boundaryType
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
   VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
   1,		 //A
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[9] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
      msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_insideOutsideDomain(insideOutsideDomain) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._insideOutsideDomain))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._packedRecords0))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
   msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks),_gradPUpdate(gradPUpdate) {

}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getGradPUpdate(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 10;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_INT,		 //adjacentRanks
MPI_DOUBLE,		 //gradPUpdate
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
TWO_POWER_D,		 //adjacentRanks
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._gradPUpdate[0]))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[9] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_adjacentRanks(adjacentRanks) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, adjacentRanks) {
setGradPUpdate(gradPUpdate);
assertion((2 < (8 * sizeof(short int))));

}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate() const {
return _gradPUpdate;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradPUpdate) {
_gradPUpdate = (gradPUpdate);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradPUpdate(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _gradPUpdate[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradPUpdate(int elementIndex, const double& gradPUpdate) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_gradPUpdate[elementIndex]= gradPUpdate;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradPUpdate:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradPUpdate(i) << ",";
   }
   out << getGradPUpdate(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getGradPUpdate(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 10;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_INT,		 //adjacentRanks
MPI_DOUBLE,		 //gradPUpdate
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
TWO_POWER_D,		 //adjacentRanks
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradPUpdate
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._gradPUpdate[0]))), 		&disp[8] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[9] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_u(u),
_gradP(gradP),
_F(F),
_force(force),
_A(A),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit() {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords._u, persistentRecords._gradP, persistentRecords._F, persistentRecords._force, persistentRecords._A, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x) {

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::~RegularGridFluidVertexEnhancedDivFreeEulerExplicit() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugBoundaryType& param) {
switch (param) {
case BOUNDARY_TYPE_UNDEF: return "BOUNDARY_TYPE_UNDEF";
case INFLOW: return "INFLOW";
case OUTFLOW: return "OUTFLOW";
case LID: return "LID";
case OBSTACLE: return "OBSTACLE";
case PERIODIC_LEFT: return "PERIODIC_LEFT";
case PERIODIC_RIGHT: return "PERIODIC_RIGHT";
case PERIODIC_CORNER: return "PERIODIC_CORNER";
case WALL: return "WALL";
case WALL_FREE_SLIP_Y: return "WALL_FREE_SLIP_Y";
case WALL_FREE_SLIP_Z: return "WALL_FREE_SLIP_Z";
case WALL_FREE_SLIP_YZ: return "WALL_FREE_SLIP_YZ";
case WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN";
case WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN: return "WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN";
case IGNORED: return "IGNORED";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping() {
return "DebugBoundaryType(BOUNDARY_TYPE_UNDEF=0,INFLOW=1,OUTFLOW=2,LID=3,OBSTACLE=4,PERIODIC_LEFT=5,PERIODIC_RIGHT=6,PERIODIC_CORNER=7,WALL=8,WALL_FREE_SLIP_Y=9,WALL_FREE_SLIP_Z=10,WALL_FREE_SLIP_YZ=11,WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN=12,WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN=13,IGNORED=14)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const DebugFluidVertexType& param) {
switch (param) {
case INNER: return "INNER";
case DIRICHLET: return "DIRICHLET";
case NEUMANN: return "NEUMANN";
case MIXED_DIRICHLET_NEUMANN: return "MIXED_DIRICHLET_NEUMANN";
case PERIODIC: return "PERIODIC";
case OUTER: return "OUTER";
case UNDEF: return "UNDEF";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping() {
return "DebugFluidVertexType(INNER=0,DIRICHLET=1,NEUMANN=2,MIXED_DIRICHLET_NEUMANN=3,PERIODIC=4,OUTER=5,UNDEF=6)";
}
std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicit dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[0]._persistentRecords._x[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicit[1]._persistentRecords._fluidVertexType))), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicit::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit failed: "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::PersistentRecords(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_fluidVertexType(fluidVertexType),
_boundaryType(boundaryType),
_x(x) {
setU(u);
setGradP(gradP);
setF(F);
setForce(force);
setA(A);
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getFluidVertexType() const {
return _fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getBoundaryType() const {
return _boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setBoundaryType(const DebugBoundaryType& boundaryType) {
_boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getU() const {
return _u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_u = (u);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getGradP() const {
return _gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_gradP = (gradP);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getF() const {
return _F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_F = (F);
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getForce() const {
return _force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getA() const {
return _A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setA(const double& A) {
_A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._fluidVertexType, persistentRecords._boundaryType, persistentRecords.getU(), persistentRecords.getGradP(), persistentRecords.getF(), persistentRecords.getForce(), persistentRecords.getA(), persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked(const DebugFluidVertexType& fluidVertexType, const DebugBoundaryType& boundaryType, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F, const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force, const double& A, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(fluidVertexType, boundaryType, u, gradP, F, force, A, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::~RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked() { }


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugFluidVertexType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getFluidVertexType() const {
return _persistentRecords._fluidVertexType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setFluidVertexType(const DebugFluidVertexType& fluidVertexType) {
_persistentRecords._fluidVertexType = fluidVertexType;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::DebugBoundaryType peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getBoundaryType() const {
return _persistentRecords._boundaryType;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setBoundaryType(const DebugBoundaryType& boundaryType) {
_persistentRecords._boundaryType = boundaryType;
}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU() const {
return _persistentRecords._u;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& u) {
_persistentRecords._u = (u);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getU(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._u[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setU(int elementIndex, const double& u) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._u[elementIndex]= u;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP() const {
return _persistentRecords._gradP;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& gradP) {
_persistentRecords._gradP = (gradP);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getGradP(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._gradP[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setGradP(int elementIndex, const double& gradP) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._gradP[elementIndex]= gradP;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF() const {
return _persistentRecords._F;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& F) {
_persistentRecords._F = (F);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getF(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._F[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setF(int elementIndex, const double& F) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._F[elementIndex]= F;

}



tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce() const {
return _persistentRecords._force;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(const tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>& force) {
_persistentRecords._force = (force);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getForce(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
return _persistentRecords._force[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setForce(int elementIndex, const double& force) {
assertion(elementIndex>=0);
assertion(elementIndex<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM);
_persistentRecords._force[elementIndex]= force;

}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getA() const {
return _persistentRecords._A;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setA(const double& A) {
_persistentRecords._A = A;
}



peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::InsideOutsideDomain peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugFluidVertexType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugFluidVertexTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugFluidVertexTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const DebugBoundaryType& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getDebugBoundaryTypeMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getDebugBoundaryTypeMapping();
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::toString(param);
}

std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getInsideOutsideDomainMapping() {
return peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInsideOutsideDomainMapping();
}



std::string peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::toString (std::ostream& out) const {
out << "("; 
out << "fluidVertexType:" << toString(getFluidVertexType());
out << ",";
out << "boundaryType:" << toString(getBoundaryType());
out << ",";
out << "u:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getU(i) << ",";
   }
   out << getU(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "gradP:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getGradP(i) << ",";
   }
   out << getGradP(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "F:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getF(i) << ",";
   }
   out << getF(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "force:[";
   for (int i = 0; i < VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1; i++) {
      out << getForce(i) << ",";
   }
   out << getForce(VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM-1) << "]";
out << ",";
out << "A:" << getA();
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


peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::PersistentRecords peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::convert() const{
return RegularGridFluidVertexEnhancedDivFreeEulerExplicit(
getFluidVertexType(),
getBoundaryType(),
getU(),
getGradP(),
getF(),
getForce(),
getA(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::_log( "peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked" );

MPI_Datatype peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype = 0;


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::initDatatype() {
const int Attributes = 9;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //fluidVertexType
MPI_INT,		 //boundaryType
MPI_DOUBLE,		 //u
MPI_DOUBLE,		 //gradP
MPI_DOUBLE,		 //F
MPI_DOUBLE,		 //force
MPI_DOUBLE,		 //A
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //fluidVertexType
1,		 //boundaryType
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //u
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //gradP
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //F
VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,		 //force
1,		 //A
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._fluidVertexType))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._boundaryType))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._u[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._gradP[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._F[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._force[0]))), 		&disp[5] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._A))), 		&disp[6] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[0]._persistentRecords._x[0]))), 		&disp[7] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked[1]._persistentRecords._fluidVertexType))), 		&disp[8] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );
MPI_Type_commit( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}


void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::Datatype );

}

void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
msg << "testing for finished send task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



void peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked from node "
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
msg << "testing for finished receive task for peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked failed: "
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
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked",
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



bool peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::isMessageInQueue(int tag) {
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

int peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicitPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


