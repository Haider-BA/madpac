#include "peano/applications/shallowwater/records/RegularGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
   _heightWaterAbove(heightWaterAbove),
   _heightWaterRight(heightWaterRight),
   _heightSeabedAbove(heightSeabedAbove),
   _heightSeabedRight(heightSeabedRight),
   _momentumXAbove(momentumXAbove),
   _momentumXRight(momentumXRight),
   _momentumYAbove(momentumYAbove),
   _momentumYRight(momentumYRight),
   _fluxHeightWaterAbove(fluxHeightWaterAbove),
   _fluxMomentumXAbove(fluxMomentumXAbove),
   _fluxMomentumYAbove(fluxMomentumYAbove),
   _fluxHeightWaterRight(fluxHeightWaterRight),
   _fluxMomentumXRight(fluxMomentumXRight),
   _fluxMomentumYRight(fluxMomentumYRight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "heightWaterRight:" << getHeightWaterRight();
      out << ",";
      out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
      out << ",";
      out << "heightSeabedRight:" << getHeightSeabedRight();
      out << ",";
      out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
      out << ",";
      out << "momentumXRight:" << getMomentumXRight();
      out << ",";
      out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
      out << ",";
      out << "momentumYRight:" << getMomentumYRight();
      out << ",";
      out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
      out << ",";
      out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getHeightWaterAbove(),
         getHeightWaterRight(),
         getHeightSeabedAbove(),
         getHeightSeabedRight(),
         getMomentumXAbove(),
         getMomentumXRight(),
         getMomentumYAbove(),
         getMomentumYRight(),
         getFluxHeightWaterAbove(),
         getFluxMomentumXAbove(),
         getFluxMomentumYAbove(),
         getFluxHeightWaterRight(),
         getFluxMomentumXRight(),
         getFluxMomentumYRight(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
               "peano::applications::shallowwater::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertex",
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
      
      
      
      void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
               "peano::applications::shallowwater::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
   _heightWaterAbove(heightWaterAbove),
   _heightWaterRight(heightWaterRight),
   _heightSeabedAbove(heightSeabedAbove),
   _heightSeabedRight(heightSeabedRight),
   _momentumXAbove(momentumXAbove),
   _momentumXRight(momentumXRight),
   _momentumYAbove(momentumYAbove),
   _momentumYRight(momentumYRight),
   _fluxHeightWaterAbove(fluxHeightWaterAbove),
   _fluxMomentumXAbove(fluxMomentumXAbove),
   _fluxMomentumYAbove(fluxMomentumYAbove),
   _fluxHeightWaterRight(fluxHeightWaterRight),
   _fluxMomentumXRight(fluxMomentumXRight),
   _fluxMomentumYRight(fluxMomentumYRight) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain()) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "heightWaterRight:" << getHeightWaterRight();
      out << ",";
      out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
      out << ",";
      out << "heightSeabedRight:" << getHeightSeabedRight();
      out << ",";
      out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
      out << ",";
      out << "momentumXRight:" << getMomentumXRight();
      out << ",";
      out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
      out << ",";
      out << "momentumYRight:" << getMomentumYRight();
      out << ",";
      out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
      out << ",";
      out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getHeightWaterAbove(),
         getHeightWaterRight(),
         getHeightSeabedAbove(),
         getHeightSeabedRight(),
         getMomentumXAbove(),
         getMomentumXRight(),
         getMomentumYAbove(),
         getMomentumYRight(),
         getFluxHeightWaterAbove(),
         getFluxMomentumXAbove(),
         getFluxMomentumYAbove(),
         getFluxHeightWaterRight(),
         getFluxMomentumXRight(),
         getFluxMomentumYRight(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 1;
         MPI_Datatype subtypes[Attributes] = {
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _heightWaterAbove(heightWaterAbove),
   _heightWaterRight(heightWaterRight),
   _heightSeabedAbove(heightSeabedAbove),
   _heightSeabedRight(heightSeabedRight),
   _momentumXAbove(momentumXAbove),
   _momentumXRight(momentumXRight),
   _momentumYAbove(momentumYAbove),
   _momentumYRight(momentumYRight),
   _fluxHeightWaterAbove(fluxHeightWaterAbove),
   _fluxMomentumXAbove(fluxMomentumXAbove),
   _fluxMomentumYAbove(fluxMomentumYAbove),
   _fluxHeightWaterRight(fluxHeightWaterRight),
   _fluxMomentumXRight(fluxMomentumXRight),
   _fluxMomentumYRight(fluxMomentumYRight),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x, adjacentRanks) {
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
      out << "("; 
      out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "heightWaterRight:" << getHeightWaterRight();
      out << ",";
      out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
      out << ",";
      out << "heightSeabedRight:" << getHeightSeabedRight();
      out << ",";
      out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
      out << ",";
      out << "momentumXRight:" << getMomentumXRight();
      out << ",";
      out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
      out << ",";
      out << "momentumYRight:" << getMomentumYRight();
      out << ",";
      out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
      out << ",";
      out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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
   
   
   peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
      return RegularGridVertexPacked(
         getHeightWaterAbove(),
         getHeightWaterRight(),
         getHeightSeabedAbove(),
         getHeightSeabedRight(),
         getMomentumXAbove(),
         getMomentumXRight(),
         getMomentumYAbove(),
         getMomentumYRight(),
         getFluxHeightWaterAbove(),
         getFluxMomentumXAbove(),
         getFluxMomentumYAbove(),
         getFluxHeightWaterRight(),
         getFluxMomentumXRight(),
         getFluxMomentumYRight(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );
      
      MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertex dummyRegularGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
         MPI_Type_commit( &RegularGridVertex::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertex::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
               "peano::applications::shallowwater::records::RegularGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertex",
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
      
      
      
      void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
               "peano::applications::shallowwater::records::RegularGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertex",
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
      
      
      
      bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _heightWaterAbove(heightWaterAbove),
   _heightWaterRight(heightWaterRight),
   _heightSeabedAbove(heightSeabedAbove),
   _heightSeabedRight(heightSeabedRight),
   _momentumXAbove(momentumXAbove),
   _momentumXRight(momentumXRight),
   _momentumYAbove(momentumYAbove),
   _momentumYRight(momentumYRight),
   _fluxHeightWaterAbove(fluxHeightWaterAbove),
   _fluxMomentumXAbove(fluxMomentumXAbove),
   _fluxMomentumYAbove(fluxMomentumYAbove),
   _fluxHeightWaterRight(fluxHeightWaterRight),
   _fluxMomentumXRight(fluxMomentumXRight),
   _fluxMomentumYRight(fluxMomentumYRight),
   _x(x),
   _adjacentRanks(adjacentRanks) {
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x, adjacentRanks) {
      assertion((2 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::shallowwater::records::RegularGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
   }
   
   std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
   }
   
   
   
   std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
      out << "("; 
      out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "heightWaterRight:" << getHeightWaterRight();
      out << ",";
      out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
      out << ",";
      out << "heightSeabedRight:" << getHeightSeabedRight();
      out << ",";
      out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
      out << ",";
      out << "momentumXRight:" << getMomentumXRight();
      out << ",";
      out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
      out << ",";
      out << "momentumYRight:" << getMomentumYRight();
      out << ",";
      out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
      out << ",";
      out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
      out << ",";
      out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
      out << ",";
      out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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
   
   
   peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
      return RegularGridVertex(
         getHeightWaterAbove(),
         getHeightWaterRight(),
         getHeightSeabedAbove(),
         getHeightSeabedRight(),
         getMomentumXAbove(),
         getMomentumXRight(),
         getMomentumYAbove(),
         getMomentumYRight(),
         getFluxHeightWaterAbove(),
         getFluxMomentumXAbove(),
         getFluxMomentumYAbove(),
         getFluxHeightWaterRight(),
         getFluxMomentumXRight(),
         getFluxMomentumYRight(),
         getInsideOutsideDomain(),
         getX(),
         getAdjacentRanks()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );
      
      MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
         const int Attributes = 4;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //x
            MPI_INT,		 //adjacentRanks
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //x
            TWO_POWER_D,		 //adjacentRanks
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         RegularGridVertexPacked dummyRegularGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[3] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
         MPI_Type_commit( &RegularGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &RegularGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
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
      
      
      
      void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::RegularGridVertexPacked",
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
      
      
      
      bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_adjacentRanks(adjacentRanks) {
   
}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
   return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
   return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
   _heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
   return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
   return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
   _heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
   return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
   return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
   _momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
   return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
   return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
   _momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
   return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
   return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
   return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
   return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
   return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
   return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {
   
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._adjacentRanks) {
   
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x, adjacentRanks) {
   
}


peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
   return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
   return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
   _persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
   return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightSeabedAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
   return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
   _persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
   return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
   return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
   _persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
   return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
   return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
   _persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
   return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
   return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
   return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
   return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterRight[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
   return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXRight[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
   return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYRight[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
   
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::shallowwater::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::RegularGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
   out << "("; 
   out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
   out << ",";
   out << "heightWaterRight:" << getHeightWaterRight();
   out << ",";
   out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
   out << ",";
   out << "heightSeabedRight:" << getHeightSeabedRight();
   out << ",";
   out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
   out << ",";
   out << "momentumXRight:" << getMomentumXRight();
   out << ",";
   out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
   out << ",";
   out << "momentumYRight:" << getMomentumYRight();
   out << ",";
   out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
   out << ",";
   out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
   out << ",";
   out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
   out << ",";
   out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
   out << ",";
   out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
   out << ",";
   out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
   return RegularGridVertexPacked(
      getHeightWaterAbove(),
      getHeightWaterRight(),
      getHeightSeabedAbove(),
      getHeightSeabedRight(),
      getMomentumXAbove(),
      getMomentumXRight(),
      getMomentumYAbove(),
      getMomentumYRight(),
      getFluxHeightWaterAbove(),
      getFluxMomentumXAbove(),
      getFluxMomentumYAbove(),
      getFluxHeightWaterRight(),
      getFluxMomentumXRight(),
      getFluxMomentumYRight(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );
   
   MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertex dummyRegularGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
      MPI_Type_commit( &RegularGridVertex::Datatype );
      
   }
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertex::Datatype );
      
   }
   
   void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
            msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
            "peano::applications::shallowwater::records::RegularGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridVertex",
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
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
            "peano::applications::shallowwater::records::RegularGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridVertex",
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
   
   
   
   bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_x(x),
_adjacentRanks(adjacentRanks) {
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((2 < (8 * sizeof(short int))));
   
}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
   return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
   return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
   _heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
   return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
   return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
   _heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
   return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
   return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
   _momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
   return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
   return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
   _momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
   return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
   return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
   return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
   return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
   return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
   return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x, adjacentRanks) {
   assertion((2 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
   return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
   return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
   _persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
   return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightSeabedAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
   return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
   _persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
   return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
   return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
   _persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
   return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
   
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
   return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
   _persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
   return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
   return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
   return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
   return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterRight[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
   return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXRight[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
   return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYRight[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
   
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}


std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
   out << "("; 
   out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
   out << ",";
   out << "heightWaterRight:" << getHeightWaterRight();
   out << ",";
   out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
   out << ",";
   out << "heightSeabedRight:" << getHeightSeabedRight();
   out << ",";
   out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
   out << ",";
   out << "momentumXRight:" << getMomentumXRight();
   out << ",";
   out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
   out << ",";
   out << "momentumYRight:" << getMomentumYRight();
   out << ",";
   out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
   out << ",";
   out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
   out << ",";
   out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
   out << ",";
   out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
   out << ",";
   out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
   out << ",";
   out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
   return RegularGridVertex(
      getHeightWaterAbove(),
      getHeightWaterRight(),
      getHeightSeabedAbove(),
      getHeightSeabedRight(),
      getMomentumXAbove(),
      getMomentumXRight(),
      getMomentumYAbove(),
      getMomentumYRight(),
      getFluxHeightWaterAbove(),
      getFluxMomentumXAbove(),
      getFluxMomentumYAbove(),
      getFluxHeightWaterRight(),
      getFluxMomentumXRight(),
      getFluxMomentumYRight(),
      getInsideOutsideDomain(),
      getX(),
      getAdjacentRanks()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );
   
   MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
      const int Attributes = 3;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //adjacentRanks
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         TWO_POWER_D,		 //adjacentRanks
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      RegularGridVertexPacked dummyRegularGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[2] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
      MPI_Type_commit( &RegularGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &RegularGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
            "peano::applications::shallowwater::records::RegularGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridVertexPacked",
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
   
   
   
   void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
            "peano::applications::shallowwater::records::RegularGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::RegularGridVertexPacked",
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
   
   
   
   bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, adjacentRanks) {

}


peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
   getHeightWaterAbove(),
   getHeightWaterRight(),
   getHeightSeabedAbove(),
   getHeightSeabedRight(),
   getMomentumXAbove(),
   getMomentumXRight(),
   getMomentumYAbove(),
   getMomentumYRight(),
   getFluxHeightWaterAbove(),
   getFluxMomentumXAbove(),
   getFluxMomentumYAbove(),
   getFluxHeightWaterRight(),
   getFluxMomentumXRight(),
   getFluxMomentumYRight(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
   const int Attributes = 3;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //insideOutsideDomain
      MPI_INT,		 //adjacentRanks
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //insideOutsideDomain
      TWO_POWER_D,		 //adjacentRanks
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertex dummyRegularGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
   MPI_Type_commit( &RegularGridVertex::Datatype );
   
}


void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertex::Datatype );
   
}

void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
         msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
         "peano::applications::shallowwater::records::RegularGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::RegularGridVertex",
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



void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
         "peano::applications::shallowwater::records::RegularGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::RegularGridVertex",
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



bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
   getHeightWaterAbove(),
   getHeightWaterRight(),
   getHeightSeabedAbove(),
   getHeightSeabedRight(),
   getMomentumXAbove(),
   getMomentumXRight(),
   getMomentumYAbove(),
   getMomentumYRight(),
   getFluxHeightWaterAbove(),
   getFluxMomentumXAbove(),
   getFluxMomentumYAbove(),
   getFluxHeightWaterRight(),
   getFluxMomentumXRight(),
   getFluxMomentumYRight(),
   getInsideOutsideDomain(),
   getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
   const int Attributes = 3;
   MPI_Datatype subtypes[Attributes] = {
      MPI_INT,		 //adjacentRanks
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      TWO_POWER_D,		 //adjacentRanks
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   RegularGridVertexPacked dummyRegularGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._adjacentRanks[0])), 		&disp[2] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
   MPI_Type_commit( &RegularGridVertexPacked::Datatype );
   
}


void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &RegularGridVertexPacked::Datatype );
   
}

void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
         "peano::applications::shallowwater::records::RegularGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::RegularGridVertexPacked",
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



void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
         "peano::applications::shallowwater::records::RegularGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::RegularGridVertexPacked",
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



bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x) {

}


peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
      msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
      "peano::applications::shallowwater::records::RegularGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::RegularGridVertex",
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



void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
      "peano::applications::shallowwater::records::RegularGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::RegularGridVertex",
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



bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 3;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //x
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   DIMENSIONS,		 //x
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[2] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
      "peano::applications::shallowwater::records::RegularGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::RegularGridVertexPacked",
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



void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
      "peano::applications::shallowwater::records::RegularGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::RegularGridVertexPacked",
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



bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_insideOutsideDomain(insideOutsideDomain) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain) {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain) {

}


peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[1]._persistentRecords._insideOutsideDomain))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
   msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
   "peano::applications::shallowwater::records::RegularGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::RegularGridVertex",
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



void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
   "peano::applications::shallowwater::records::RegularGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::RegularGridVertex",
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



bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain()) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}


std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
   "peano::applications::shallowwater::records::RegularGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::RegularGridVertexPacked",
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



void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
   "peano::applications::shallowwater::records::RegularGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::RegularGridVertexPacked",
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



bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_insideOutsideDomain(insideOutsideDomain),
_x(x) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain, persistentRecords._x) {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x) {

}


peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::RegularGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::RegularGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._x[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
"peano::applications::shallowwater::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertex",
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



void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
"peano::applications::shallowwater::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertex",
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



bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_x(x) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, x) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}


std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain(),
getX()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
"peano::applications::shallowwater::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertexPacked",
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



void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
"peano::applications::shallowwater::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertexPacked",
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



bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_insideOutsideDomain(insideOutsideDomain),
_adjacentRanks(adjacentRanks) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex() {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._insideOutsideDomain, persistentRecords._adjacentRanks) {

}


peano::applications::shallowwater::records::RegularGridVertex::RegularGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, adjacentRanks) {

}


peano::applications::shallowwater::records::RegularGridVertex::~RegularGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::RegularGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::RegularGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}


std::string peano::applications::shallowwater::records::RegularGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertex::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertex::PersistentRecords peano::applications::shallowwater::records::RegularGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertexPacked peano::applications::shallowwater::records::RegularGridVertex::convert() const{
return RegularGridVertexPacked(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertex::_log( "peano::applications::shallowwater::records::RegularGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertex::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertex dummyRegularGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertex[1]._persistentRecords._adjacentRanks[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertex::Datatype );
MPI_Type_commit( &RegularGridVertex::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertex::shutdownDatatype() {
MPI_Type_free( &RegularGridVertex::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertex "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertex "
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
"peano::applications::shallowwater::records::RegularGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertex",
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



void peano::applications::shallowwater::records::RegularGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertex failed: "
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
"peano::applications::shallowwater::records::RegularGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertex",
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



bool peano::applications::shallowwater::records::RegularGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_heightWaterAbove(heightWaterAbove),
_heightWaterRight(heightWaterRight),
_heightSeabedAbove(heightSeabedAbove),
_heightSeabedRight(heightSeabedRight),
_momentumXAbove(momentumXAbove),
_momentumXRight(momentumXRight),
_momentumYAbove(momentumYAbove),
_momentumYRight(momentumYRight),
_fluxHeightWaterAbove(fluxHeightWaterAbove),
_fluxMomentumXAbove(fluxMomentumXAbove),
_fluxMomentumYAbove(fluxMomentumYAbove),
_fluxHeightWaterRight(fluxHeightWaterRight),
_fluxMomentumXRight(fluxMomentumXRight),
_fluxMomentumYRight(fluxMomentumYRight),
_adjacentRanks(adjacentRanks) {
setInsideOutsideDomain(insideOutsideDomain);
assertion((2 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked() {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getInsideOutsideDomain(), persistentRecords._adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::RegularGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, insideOutsideDomain, adjacentRanks) {
assertion((2 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::RegularGridVertexPacked::~RegularGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::RegularGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



peano::applications::shallowwater::records::RegularGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (0);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (0);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (0);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::RegularGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::RegularGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}


std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::RegularGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::RegularGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::RegularGridVertex::getInsideOutsideDomainMapping();
}



std::string peano::applications::shallowwater::records::RegularGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::RegularGridVertexPacked::toString (std::ostream& out) const {
out << "("; 
out << "heightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightWaterAbove(i) << ",";
   }
   out << getHeightWaterAbove(2-1) << "]";
out << ",";
out << "heightWaterRight:" << getHeightWaterRight();
out << ",";
out << "heightSeabedAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getHeightSeabedAbove(i) << ",";
   }
   out << getHeightSeabedAbove(2-1) << "]";
out << ",";
out << "heightSeabedRight:" << getHeightSeabedRight();
out << ",";
out << "momentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumXAbove(i) << ",";
   }
   out << getMomentumXAbove(2-1) << "]";
out << ",";
out << "momentumXRight:" << getMomentumXRight();
out << ",";
out << "momentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getMomentumYAbove(i) << ",";
   }
   out << getMomentumYAbove(2-1) << "]";
out << ",";
out << "momentumYRight:" << getMomentumYRight();
out << ",";
out << "fluxHeightWaterAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterAbove(i) << ",";
   }
   out << getFluxHeightWaterAbove(2-1) << "]";
out << ",";
out << "fluxMomentumXAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXAbove(i) << ",";
   }
   out << getFluxMomentumXAbove(2-1) << "]";
out << ",";
out << "fluxMomentumYAbove:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYAbove(i) << ",";
   }
   out << getFluxMomentumYAbove(2-1) << "]";
out << ",";
out << "fluxHeightWaterRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxHeightWaterRight(i) << ",";
   }
   out << getFluxHeightWaterRight(2-1) << "]";
out << ",";
out << "fluxMomentumXRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumXRight(i) << ",";
   }
   out << getFluxMomentumXRight(2-1) << "]";
out << ",";
out << "fluxMomentumYRight:[";
   for (int i = 0; i < 2-1; i++) {
      out << getFluxMomentumYRight(i) << ",";
   }
   out << getFluxMomentumYRight(2-1) << "]";
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


peano::applications::shallowwater::records::RegularGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::RegularGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::RegularGridVertex peano::applications::shallowwater::records::RegularGridVertexPacked::convert() const{
return RegularGridVertex(
getHeightWaterAbove(),
getHeightWaterRight(),
getHeightSeabedAbove(),
getHeightSeabedRight(),
getMomentumXAbove(),
getMomentumXRight(),
getMomentumYAbove(),
getMomentumYRight(),
getFluxHeightWaterAbove(),
getFluxMomentumXAbove(),
getFluxMomentumYAbove(),
getFluxHeightWaterRight(),
getFluxMomentumXRight(),
getFluxMomentumYRight(),
getInsideOutsideDomain(),
getAdjacentRanks()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::RegularGridVertexPacked::_log( "peano::applications::shallowwater::records::RegularGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::RegularGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::RegularGridVertexPacked::initDatatype() {
const int Attributes = 2;
MPI_Datatype subtypes[Attributes] = {
MPI_INT,		 //adjacentRanks
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
TWO_POWER_D,		 //adjacentRanks
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
RegularGridVertexPacked dummyRegularGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummyRegularGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummyRegularGridVertexPacked[1]._persistentRecords._adjacentRanks[0])), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &RegularGridVertexPacked::Datatype );
MPI_Type_commit( &RegularGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::RegularGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &RegularGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::RegularGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::RegularGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::RegularGridVertexPacked "
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
"peano::applications::shallowwater::records::RegularGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertexPacked",
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



void peano::applications::shallowwater::records::RegularGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::RegularGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::RegularGridVertexPacked failed: "
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
"peano::applications::shallowwater::records::RegularGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::RegularGridVertexPacked",
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



bool peano::applications::shallowwater::records::RegularGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::RegularGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


