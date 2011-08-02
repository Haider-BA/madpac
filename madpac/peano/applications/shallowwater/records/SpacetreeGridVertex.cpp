#include "peano/applications/shallowwater/records/SpacetreeGridVertex.h"

#if !defined(Debug) && !defined(Parallel) && !defined(Asserts)
   peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain) {
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case EraseTriggered: return "EraseTriggered";
         case Erasing: return "Erasing";
      }
      return "undefined";
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
      return SpacetreeGridVertexPacked(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );
      
      MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
         const int Attributes = 3;
         MPI_Datatype subtypes[Attributes] = {
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //isHangingNode
            1,		 //refinementControl
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertex dummySpacetreeGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[2] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridVertex::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertex::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
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
      
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
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
      
      
      
      bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
   _maximumSubtreeHeight(maximumSubtreeHeight) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out <<  ")";
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
      return SpacetreeGridVertex(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );
      
      MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
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
         SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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
      
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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
      
      
      
      bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   
#elif defined(Parallel) && defined(Asserts) && defined(Debug)
   peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
   _isHangingNode(isHangingNode),
   _refinementControl(refinementControl),
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _insideOutsideDomain(insideOutsideDomain),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
      return _isHangingNode;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      _isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
      return _refinementControl;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      _refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
      return _insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
      return _persistentRecords._isHangingNode;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
      _persistentRecords._isHangingNode = isHangingNode;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
      return _persistentRecords._refinementControl;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
      _persistentRecords._refinementControl = refinementControl;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
      return _persistentRecords._insideOutsideDomain;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      _persistentRecords._insideOutsideDomain = insideOutsideDomain;
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertex::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
      switch (param) {
         case Inside: return "Inside";
         case Boundary: return "Boundary";
         case Outside: return "Outside";
      }
      return "undefined";
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
      return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
   }
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
      switch (param) {
         case Unrefined: return "Unrefined";
         case Refined: return "Refined";
         case RefinementTriggered: return "RefinementTriggered";
         case Refining: return "Refining";
         case EraseTriggered: return "EraseTriggered";
         case Erasing: return "Erasing";
      }
      return "undefined";
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
      return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
   }
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out << ",";
      out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
      return SpacetreeGridVertexPacked(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain(),
         getX(),
         getLevel(),
         getBelongsToSubdomainBoundary(),
         getAdjacentRanks(),
         getAdjacentRanksOnSublevel()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );
      
      MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
         const int Attributes = 9;
         MPI_Datatype subtypes[Attributes] = {
            MPI_CHAR,		 //isHangingNode
            MPI_INT,		 //refinementControl
            MPI_INT,		 //insideOutsideDomain
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            1,		 //isHangingNode
            1,		 //refinementControl
            1,		 //insideOutsideDomain
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertex dummySpacetreeGridVertex[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[6] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[7] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[8] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
         MPI_Type_commit( &SpacetreeGridVertex::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertex::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
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
      
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertex",
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
      
      
      
      bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
   _maximumSubtreeHeight(maximumSubtreeHeight),
   _x(x),
   _level(level),
   _belongsToSubdomainBoundary(belongsToSubdomainBoundary),
   _adjacentRanks(adjacentRanks),
   _adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
      setIsHangingNode(isHangingNode);
      setRefinementControl(refinementControl);
      setInsideOutsideDomain(insideOutsideDomain);
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
      return _heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
      return _heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
      _heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
      return _heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
      return _heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
      _heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
      return _momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
      return _momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
      _momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
      return _momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
      return _momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
      _momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
      return _fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
      return _fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
      return _fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
      return _fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
      return _fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
      return _fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
      return _maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
      return _x;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _x = (x);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
      return _level;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
      _level = level;
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
      return _belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
      return _adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _adjacentRanks = (adjacentRanks);
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
      return _adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
   _persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
   _persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
      assertion((6 < (8 * sizeof(short int))));
      
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
      return _persistentRecords._heightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
      _persistentRecords._heightWaterAbove = (heightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
      return _persistentRecords._heightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
      _persistentRecords._heightWaterRight = heightWaterRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
      return _persistentRecords._heightSeabedAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
      _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._heightSeabedAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
      return _persistentRecords._heightSeabedRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
      _persistentRecords._heightSeabedRight = heightSeabedRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
      return _persistentRecords._momentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
      _persistentRecords._momentumXAbove = (momentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
      return _persistentRecords._momentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
      _persistentRecords._momentumXRight = momentumXRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
      return _persistentRecords._momentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
      _persistentRecords._momentumYAbove = (momentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._momentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
      
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
      return _persistentRecords._momentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
      _persistentRecords._momentumYRight = momentumYRight;
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
      return _persistentRecords._fluxHeightWaterAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
      _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
      return _persistentRecords._fluxMomentumXAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
      _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
      return _persistentRecords._fluxMomentumYAbove;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
      _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYAbove[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
      return _persistentRecords._fluxHeightWaterRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
      _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxHeightWaterRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
      return _persistentRecords._fluxMomentumXRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
      _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumXRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
      
   }
   
   
   
   tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
      return _persistentRecords._fluxMomentumYRight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
      _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      return _persistentRecords._fluxMomentumYRight[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
      assertion(elementIndex>=0);
      assertion(elementIndex<2);
      _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
      
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
      short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
      short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
      short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
      assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
      return _persistentRecords._maximumSubtreeHeight;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
      _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
      return _numberOfAdjacentRefinedCells;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
      _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
   }
   
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
      short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
      assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
   }
   
   
   
   tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX() const {
      return _persistentRecords._x;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
      _persistentRecords._x = (x);
   }
   
   
   
   double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      return _persistentRecords._x[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
      assertion(elementIndex>=0);
      assertion(elementIndex<DIMENSIONS);
      _persistentRecords._x[elementIndex]= x;
      
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getLevel() const {
      return _persistentRecords._level;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
      _persistentRecords._level = level;
   }
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
      return _persistentRecords._belongsToSubdomainBoundary;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
      _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
      return _persistentRecords._adjacentRanks;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
      _persistentRecords._adjacentRanks = (adjacentRanks);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanks[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
      
   }
   
   
   
   tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
      return _persistentRecords._adjacentRanksOnSublevel;
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
      _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
   }
   
   
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
      
   }
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
      assertion(elementIndex>=0);
      assertion(elementIndex<TWO_POWER_D);
      _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
      
   }
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
   }
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
      return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
   }
   
   
   
   std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
      std::ostringstream stringstr;
      toString(stringstr);
      return stringstr.str();
   }
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
      out << "isHangingNode:" << getIsHangingNode();
      out << ",";
      out << "refinementControl:" << toString(getRefinementControl());
      out << ",";
      out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
      out << ",";
      out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
      out << ",";
      out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
      out << ",";
      out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
      out << ",";
      out << "level:" << getLevel();
      out << ",";
      out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
      out << ",";
      out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
      out << ",";
      out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
      out <<  ")";
   }
   
   
   peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
      return _persistentRecords;
   }
   
   peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
      return SpacetreeGridVertex(
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
         getIsHangingNode(),
         getRefinementControl(),
         getMaximumSubtreeHeight(),
         getNumberOfAdjacentRefinedCells(),
         getInsideOutsideDomain(),
         getX(),
         getLevel(),
         getBelongsToSubdomainBoundary(),
         getAdjacentRanks(),
         getAdjacentRanksOnSublevel()
      );
   }
   
   #ifdef Parallel
      #include "tarch/parallel/Node.h" 
      
      tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );
      
      MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
         const int Attributes = 7;
         MPI_Datatype subtypes[Attributes] = {
            MPI_DOUBLE,		 //x
            MPI_INT,		 //level
            MPI_CHAR,		 //belongsToSubdomainBoundary
            MPI_INT,		 //adjacentRanks
            MPI_INT,		 //adjacentRanksOnSublevel
            MPI_SHORT,		 //_packedRecords0
            MPI_UB		 // end/displacement flag
         };
         
         int blocklen[Attributes] = {
            DIMENSIONS,		 //x
            1,		 //level
            1,		 //belongsToSubdomainBoundary
            TWO_POWER_D,		 //adjacentRanks
            TWO_POWER_D,		 //adjacentRanksOnSublevel
            1,		 //_packedRecords0
            1		 // end/displacement flag
         };
         
         MPI_Aint     disp[Attributes];
         SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
         
         MPI_Aint base;
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
         MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[6] );
         
         for (int i=1; i<Attributes; i++) {
            assertion1( disp[i] > disp[i-1], i );
         }
         for (int i=0; i<Attributes; i++) {
            disp[i] -= base;
         }
         MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
         MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
         MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
         
      }
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
            msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
               msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
               "send(int)", destination
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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
      
      
      
      void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
            msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
               msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
               "receive(int)", source
               );
               triggeredTimeoutWarning = true;
            }
            if (
               tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
               (clock()>timeOutShutdown)
            ) {
               tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
               "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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
      
      
      
      bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
      
      int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
         assertion( _senderRank!=-1 );
         return _senderRank;
         
      }
   #endif
   
   
   

#elif defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {
   
}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   
}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
   return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
   return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
   _heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
   return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
   return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
   _heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
   return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
   return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
   _momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
   return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
   return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
   _momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
   return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
   return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
   return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
   return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
   return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
   return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
   return _isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   _isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
   return _refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   _refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
   return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {
   
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   
}

peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
   return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
   return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
   _persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
   return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightSeabedAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
   return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
   _persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
   return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
   return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
   _persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
   return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
   return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
   _persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
   return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
   return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
   return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
   return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterRight[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
   return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXRight[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
   return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYRight[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
   
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
   return _persistentRecords._isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
   _persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
   return _persistentRecords._refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
   _persistentRecords._refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
   return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   _persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getX() const {
   return _persistentRecords._x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
   switch (param) {
      case Inside: return "Inside";
      case Boundary: return "Boundary";
      case Outside: return "Outside";
   }
   return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
   return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
   switch (param) {
      case Unrefined: return "Unrefined";
      case Refined: return "Refined";
      case RefinementTriggered: return "RefinementTriggered";
      case Refining: return "Refining";
      case EraseTriggered: return "EraseTriggered";
      case Erasing: return "Erasing";
   }
   return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
   return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
   out << ",";
   out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "level:" << getLevel();
   out << ",";
   out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out << ",";
   out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
   return SpacetreeGridVertexPacked(
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
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
      getNumberOfAdjacentRefinedCells(),
      getInsideOutsideDomain(),
      getX(),
      getLevel(),
      getBelongsToSubdomainBoundary(),
      getAdjacentRanks(),
      getAdjacentRanksOnSublevel()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );
   
   MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
      const int Attributes = 8;
      MPI_Datatype subtypes[Attributes] = {
         MPI_CHAR,		 //isHangingNode
         MPI_INT,		 //refinementControl
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         1,		 //isHangingNode
         1,		 //refinementControl
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridVertex dummySpacetreeGridVertex[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[6] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[7] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
      MPI_Type_commit( &SpacetreeGridVertex::Datatype );
      
   }
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridVertex::Datatype );
      
   }
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
            msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
            "peano::applications::shallowwater::records::SpacetreeGridVertex",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::SpacetreeGridVertex",
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
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
            "peano::applications::shallowwater::records::SpacetreeGridVertex",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::SpacetreeGridVertex",
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
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
   setIsHangingNode(isHangingNode);
   setRefinementControl(refinementControl);
   setInsideOutsideDomain(insideOutsideDomain);
   assertion((6 < (8 * sizeof(short int))));
   
}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
   return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
   return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
   _heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
   return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
   return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
   _heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
   return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
   return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
   _momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
   return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
   return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
   _momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
   return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
   return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
   return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
   return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
   return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
   return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
   return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
   return _x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _x = (x);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
   return _level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
   _level = level;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
   return _belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
   return _adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
   return _adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
   assertion((6 < (8 * sizeof(short int))));
   
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
   assertion((6 < (8 * sizeof(short int))));
   
}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
   return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
   _persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
   return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
   _persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
   return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
   _persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._heightSeabedAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
   return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
   _persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
   return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
   _persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
   return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
   _persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
   return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
   _persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._momentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;
   
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
   return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
   _persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
   return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
   _persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
   return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
   _persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
   return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
   _persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYAbove[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
   return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
   _persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxHeightWaterRight[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
   return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
   _persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumXRight[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;
   
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
   return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
   _persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   return _persistentRecords._fluxMomentumYRight[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
   assertion(elementIndex>=0);
   assertion(elementIndex<2);
   _persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;
   
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
   short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
   short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
   assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
   return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
   _persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
   return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
   _numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
   assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX() const {
   return _persistentRecords._x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
   _persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   return _persistentRecords._x[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
   assertion(elementIndex>=0);
   assertion(elementIndex<DIMENSIONS);
   _persistentRecords._x[elementIndex]= x;
   
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getLevel() const {
   return _persistentRecords._level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
   _persistentRecords._level = level;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
   return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
   _persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
   return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
   _persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanks[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;
   
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
   return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
   _persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   return _persistentRecords._adjacentRanksOnSublevel[elementIndex];
   
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
   assertion(elementIndex>=0);
   assertion(elementIndex<TWO_POWER_D);
   _persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;
   
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
   return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
   return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
   return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
   return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
   std::ostringstream stringstr;
   toString(stringstr);
   return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
   out << "isHangingNode:" << getIsHangingNode();
   out << ",";
   out << "refinementControl:" << toString(getRefinementControl());
   out << ",";
   out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
   out << ",";
   out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
   out << ",";
   out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
   out << ",";
   out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
   out << ",";
   out << "level:" << getLevel();
   out << ",";
   out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
   out << ",";
   out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
   out << ",";
   out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
   out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
   return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
   return SpacetreeGridVertex(
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
      getIsHangingNode(),
      getRefinementControl(),
      getMaximumSubtreeHeight(),
      getNumberOfAdjacentRefinedCells(),
      getInsideOutsideDomain(),
      getX(),
      getLevel(),
      getBelongsToSubdomainBoundary(),
      getAdjacentRanks(),
      getAdjacentRanksOnSublevel()
   );
}

#ifdef Parallel
   #include "tarch/parallel/Node.h" 
   
   tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );
   
   MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
      const int Attributes = 7;
      MPI_Datatype subtypes[Attributes] = {
         MPI_DOUBLE,		 //x
         MPI_INT,		 //level
         MPI_CHAR,		 //belongsToSubdomainBoundary
         MPI_INT,		 //adjacentRanks
         MPI_INT,		 //adjacentRanksOnSublevel
         MPI_SHORT,		 //_packedRecords0
         MPI_UB		 // end/displacement flag
      };
      
      int blocklen[Attributes] = {
         DIMENSIONS,		 //x
         1,		 //level
         1,		 //belongsToSubdomainBoundary
         TWO_POWER_D,		 //adjacentRanks
         TWO_POWER_D,		 //adjacentRanksOnSublevel
         1,		 //_packedRecords0
         1		 // end/displacement flag
      };
      
      MPI_Aint     disp[Attributes];
      SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
      
      MPI_Aint base;
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[5] );
      MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[6] );
      
      for (int i=1; i<Attributes; i++) {
         assertion1( disp[i] > disp[i-1], i );
      }
      for (int i=0; i<Attributes; i++) {
         disp[i] -= base;
      }
      MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
      MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
      
   }
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
      MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
      
   }
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
         msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
            msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
            "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
            "send(int)", destination
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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
   
   
   
   void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
         msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
            msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
            "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
            "receive(int)", source
            );
            triggeredTimeoutWarning = true;
         }
         if (
            tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
            (clock()>timeOutShutdown)
         ) {
            tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
            "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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
   
   
   
   bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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
   
   int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
      assertion( _senderRank!=-1 );
      return _senderRank;
      
   }
#endif




#elif defined(Parallel) && !defined(Debug) && defined(Asserts)
peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
   case Inside: return "Inside";
   case Boundary: return "Boundary";
   case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
   case Unrefined: return "Unrefined";
   case Refined: return "Refined";
   case RefinementTriggered: return "RefinementTriggered";
   case Refining: return "Refining";
   case EraseTriggered: return "EraseTriggered";
   case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getNumberOfAdjacentRefinedCells(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
   const int Attributes = 7;
   MPI_Datatype subtypes[Attributes] = {
      MPI_CHAR,		 //isHangingNode
      MPI_INT,		 //refinementControl
      MPI_INT,		 //insideOutsideDomain
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //isHangingNode
      1,		 //refinementControl
      1,		 //insideOutsideDomain
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridVertex dummySpacetreeGridVertex[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[4] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[5] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[6] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
   MPI_Type_commit( &SpacetreeGridVertex::Datatype );
   
}


void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridVertex::Datatype );
   
}

void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
         msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
         "peano::applications::shallowwater::records::SpacetreeGridVertex",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::SpacetreeGridVertex",
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



void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
         msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
         "peano::applications::shallowwater::records::SpacetreeGridVertex",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::SpacetreeGridVertex",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
   getIsHangingNode(),
   getRefinementControl(),
   getMaximumSubtreeHeight(),
   getNumberOfAdjacentRefinedCells(),
   getInsideOutsideDomain(),
   getBelongsToSubdomainBoundary(),
   getAdjacentRanks(),
   getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
   const int Attributes = 5;
   MPI_Datatype subtypes[Attributes] = {
      MPI_CHAR,		 //belongsToSubdomainBoundary
      MPI_INT,		 //adjacentRanks
      MPI_INT,		 //adjacentRanksOnSublevel
      MPI_SHORT,		 //_packedRecords0
      MPI_UB		 // end/displacement flag
   };
   
   int blocklen[Attributes] = {
      1,		 //belongsToSubdomainBoundary
      TWO_POWER_D,		 //adjacentRanks
      TWO_POWER_D,		 //adjacentRanksOnSublevel
      1,		 //_packedRecords0
      1		 // end/displacement flag
   };
   
   MPI_Aint     disp[Attributes];
   SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];
   
   MPI_Aint base;
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[0] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[2] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
   MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );
   
   for (int i=1; i<Attributes; i++) {
      assertion1( disp[i] > disp[i-1], i );
   }
   for (int i=0; i<Attributes; i++) {
      disp[i] -= base;
   }
   MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
   MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );
   
}


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
   MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );
   
}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
      msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
         msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
         "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
         "send(int)", destination
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
      msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
         msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
         "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
         "receive(int)", source
         );
         triggeredTimeoutWarning = true;
      }
      if (
         tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
         (clock()>timeOutShutdown)
      ) {
         tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
         "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
   assertion( _senderRank!=-1 );
   return _senderRank;
   
}
#endif




#elif !defined(Parallel) && defined(Asserts) && defined(Debug)
peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
   MPI_CHAR,		 //isHangingNode
   MPI_INT,		 //refinementControl
   MPI_INT,		 //insideOutsideDomain
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   1,		 //isHangingNode
   1,		 //refinementControl
   1,		 //insideOutsideDomain
   DIMENSIONS,		 //x
   1,		 //level
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
      msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
      "peano::applications::shallowwater::records::SpacetreeGridVertex",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::SpacetreeGridVertex",
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



void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
      msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
      "peano::applications::shallowwater::records::SpacetreeGridVertex",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::SpacetreeGridVertex",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
   MPI_DOUBLE,		 //x
   MPI_INT,		 //level
   MPI_SHORT,		 //_packedRecords0
   MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
   DIMENSIONS,		 //x
   1,		 //level
   1,		 //_packedRecords0
   1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
   assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
   disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
   msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
      msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
      "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
      "send(int)", destination
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
   msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
      msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
      "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
      "receive(int)", source
      );
      triggeredTimeoutWarning = true;
   }
   if (
      tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
      (clock()>timeOutShutdown)
   ) {
      tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
      "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Debug) && !defined(Parallel) && defined(Asserts)
peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_INT,		 //insideOutsideDomain
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //isHangingNode
1,		 //refinementControl
1,		 //insideOutsideDomain
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._insideOutsideDomain))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
   msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
   "peano::applications::shallowwater::records::SpacetreeGridVertex",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::SpacetreeGridVertex",
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



void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
   msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
   "peano::applications::shallowwater::records::SpacetreeGridVertex",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::SpacetreeGridVertex",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
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
_maximumSubtreeHeight(maximumSubtreeHeight) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain()) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
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
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._packedRecords0))), 		&disp[1] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
   msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
   "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
   "send(int)", destination
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
   msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
   "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
   "receive(int)", source
   );
   triggeredTimeoutWarning = true;
}
if (
   tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
   (clock()>timeOutShutdown)
) {
   tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
   "peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif !defined(Parallel) && defined(Debug) && !defined(Asserts)
peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_x(x),
_level(level) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._x, persistentRecords._level) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //isHangingNode
1,		 //refinementControl
DIMENSIONS,		 //x
1,		 //level
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._x[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._level))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
"peano::applications::shallowwater::records::SpacetreeGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertex",
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



void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
"peano::applications::shallowwater::records::SpacetreeGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertex",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_x(x),
_level(level) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getX() const {
return _x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_x = (x);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getLevel() const {
return _level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setLevel(const int& level) {
_level = level;
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._x, persistentRecords._level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const tarch::la::Vector<DIMENSIONS,double>& x, const int& level):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, x, level),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX() const {
return _persistentRecords._x;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(const tarch::la::Vector<DIMENSIONS,double>& x) {
_persistentRecords._x = (x);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getX(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
return _persistentRecords._x[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setX(int elementIndex, const double& x) {
assertion(elementIndex>=0);
assertion(elementIndex<DIMENSIONS);
_persistentRecords._x[elementIndex]= x;

}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getLevel() const {
return _persistentRecords._level;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setLevel(const int& level) {
_persistentRecords._level = level;
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "x:[";
   for (int i = 0; i < DIMENSIONS-1; i++) {
      out << getX(i) << ",";
   }
   out << getX(DIMENSIONS-1) << "]";
out << ",";
out << "level:" << getLevel();
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getX(),
getLevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 4;
MPI_Datatype subtypes[Attributes] = {
MPI_DOUBLE,		 //x
MPI_INT,		 //level
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
DIMENSIONS,		 //x
1,		 //level
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._x[0]))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._level))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&dummySpacetreeGridVertexPacked[1]._persistentRecords._x[0])), 		&disp[3] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#elif defined(Parallel) && !defined(Debug) && !defined(Asserts)
peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_isHangingNode(isHangingNode),
_refinementControl(refinementControl),
_maximumSubtreeHeight(maximumSubtreeHeight),
_insideOutsideDomain(insideOutsideDomain),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getIsHangingNode() const {
return _isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
_isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getRefinementControl() const {
return _refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
_refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getInsideOutsideDomain() const {
return _insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex() {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords._isHangingNode, persistentRecords._refinementControl, persistentRecords._maximumSubtreeHeight, persistentRecords._insideOutsideDomain, persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {

}


peano::applications::shallowwater::records::SpacetreeGridVertex::SpacetreeGridVertex(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {

}

peano::applications::shallowwater::records::SpacetreeGridVertex::~SpacetreeGridVertex() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertex::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getIsHangingNode() const {
return _persistentRecords._isHangingNode;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setIsHangingNode(const bool& isHangingNode) {
_persistentRecords._isHangingNode = isHangingNode;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControl() const {
return _persistentRecords._refinementControl;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setRefinementControl(const RefinementControl& refinementControl) {
_persistentRecords._refinementControl = refinementControl;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomain() const {
return _persistentRecords._insideOutsideDomain;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
_persistentRecords._insideOutsideDomain = insideOutsideDomain;
}



bool peano::applications::shallowwater::records::SpacetreeGridVertex::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::shallowwater::records::SpacetreeGridVertex::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertex::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const InsideOutsideDomain& param) {
switch (param) {
case Inside: return "Inside";
case Boundary: return "Boundary";
case Outside: return "Outside";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping() {
return "InsideOutsideDomain(Inside=0,Boundary=1,Outside=2)";
}
std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString(const RefinementControl& param) {
switch (param) {
case Unrefined: return "Unrefined";
case Refined: return "Refined";
case RefinementTriggered: return "RefinementTriggered";
case Refining: return "Refining";
case EraseTriggered: return "EraseTriggered";
case Erasing: return "Erasing";
}
return "undefined";
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping() {
return "RefinementControl(Unrefined=0,Refined=1,RefinementTriggered=2,Refining=3,EraseTriggered=4,Erasing=5)";
}


std::string peano::applications::shallowwater::records::SpacetreeGridVertex::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertex::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertex::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertex::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked peano::applications::shallowwater::records::SpacetreeGridVertex::convert() const{
return SpacetreeGridVertexPacked(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertex::_log( "peano::applications::shallowwater::records::SpacetreeGridVertex" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertex::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertex::initDatatype() {
const int Attributes = 6;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //isHangingNode
MPI_INT,		 //refinementControl
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //isHangingNode
1,		 //refinementControl
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertex dummySpacetreeGridVertex[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._isHangingNode))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._refinementControl))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanks[0]))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[4] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertex[1]._persistentRecords._isHangingNode))), 		&disp[5] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertex::Datatype );
MPI_Type_commit( &SpacetreeGridVertex::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertex::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertex::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertex::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertex "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertex "
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
"peano::applications::shallowwater::records::SpacetreeGridVertex",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertex",
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



void peano::applications::shallowwater::records::SpacetreeGridVertex::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertex from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertex failed: "
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
"peano::applications::shallowwater::records::SpacetreeGridVertex",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertex",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertex::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertex::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::PersistentRecords(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
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
_maximumSubtreeHeight(maximumSubtreeHeight),
_belongsToSubdomainBoundary(belongsToSubdomainBoundary),
_adjacentRanks(adjacentRanks),
_adjacentRanksOnSublevel(adjacentRanksOnSublevel) {
setIsHangingNode(isHangingNode);
setRefinementControl(refinementControl);
setInsideOutsideDomain(insideOutsideDomain);
assertion((6 < (8 * sizeof(short int))));

}


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterAbove() const {
return _heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightWaterRight() const {
return _heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightWaterRight(const double& heightWaterRight) {
_heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedAbove() const {
return _heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getHeightSeabedRight() const {
return _heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setHeightSeabedRight(const double& heightSeabedRight) {
_heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXAbove() const {
return _momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumXRight() const {
return _momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumXRight(const double& momentumXRight) {
_momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYAbove() const {
return _momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMomentumYRight() const {
return _momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMomentumYRight(const double& momentumYRight) {
_momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterAbove() const {
return _fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXAbove() const {
return _fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_fluxMomentumXAbove = (fluxMomentumXAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYAbove() const {
return _fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_fluxMomentumYAbove = (fluxMomentumYAbove);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxHeightWaterRight() const {
return _fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_fluxHeightWaterRight = (fluxHeightWaterRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumXRight() const {
return _fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_fluxMomentumXRight = (fluxMomentumXRight);
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getFluxMomentumYRight() const {
return _fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_fluxMomentumYRight = (fluxMomentumYRight);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _packedRecords0 = isHangingNode ? (_packedRecords0 | mask) : (_packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getMaximumSubtreeHeight() const {
return _maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_maximumSubtreeHeight = maximumSubtreeHeight;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _packedRecords0 = _packedRecords0 & ~mask;
   _packedRecords0 = _packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getBelongsToSubdomainBoundary() const {
return _belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanks() const {
return _adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_adjacentRanks = (adjacentRanks);
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::getAdjacentRanksOnSublevel() const {
return _adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked() {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const PersistentRecords& persistentRecords):
_persistentRecords(persistentRecords._heightWaterAbove, persistentRecords._heightWaterRight, persistentRecords._heightSeabedAbove, persistentRecords._heightSeabedRight, persistentRecords._momentumXAbove, persistentRecords._momentumXRight, persistentRecords._momentumYAbove, persistentRecords._momentumYRight, persistentRecords._fluxHeightWaterAbove, persistentRecords._fluxMomentumXAbove, persistentRecords._fluxMomentumYAbove, persistentRecords._fluxHeightWaterRight, persistentRecords._fluxMomentumXRight, persistentRecords._fluxMomentumYRight, persistentRecords.getIsHangingNode(), persistentRecords.getRefinementControl(), persistentRecords._maximumSubtreeHeight, persistentRecords.getInsideOutsideDomain(), persistentRecords._belongsToSubdomainBoundary, persistentRecords._adjacentRanks, persistentRecords._adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel) {
assertion((6 < (8 * sizeof(short int))));

}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::SpacetreeGridVertexPacked(const tarch::la::Vector<2,double>& heightWaterAbove, const double& heightWaterRight, const tarch::la::Vector<2,double>& heightSeabedAbove, const double& heightSeabedRight, const tarch::la::Vector<2,double>& momentumXAbove, const double& momentumXRight, const tarch::la::Vector<2,double>& momentumYAbove, const double& momentumYRight, const tarch::la::Vector<2,double>& fluxHeightWaterAbove, const tarch::la::Vector<2,double>& fluxMomentumXAbove, const tarch::la::Vector<2,double>& fluxMomentumYAbove, const tarch::la::Vector<2,double>& fluxHeightWaterRight, const tarch::la::Vector<2,double>& fluxMomentumXRight, const tarch::la::Vector<2,double>& fluxMomentumYRight, const bool& isHangingNode, const RefinementControl& refinementControl, const int& maximumSubtreeHeight, const int& numberOfAdjacentRefinedCells, const InsideOutsideDomain& insideOutsideDomain, const bool& belongsToSubdomainBoundary, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks, const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel):
_persistentRecords(heightWaterAbove, heightWaterRight, heightSeabedAbove, heightSeabedRight, momentumXAbove, momentumXRight, momentumYAbove, momentumYRight, fluxHeightWaterAbove, fluxMomentumXAbove, fluxMomentumYAbove, fluxHeightWaterRight, fluxMomentumXRight, fluxMomentumYRight, isHangingNode, refinementControl, maximumSubtreeHeight, insideOutsideDomain, belongsToSubdomainBoundary, adjacentRanks, adjacentRanksOnSublevel),_numberOfAdjacentRefinedCells(numberOfAdjacentRefinedCells) {
assertion((6 < (8 * sizeof(short int))));

}

peano::applications::shallowwater::records::SpacetreeGridVertexPacked::~SpacetreeGridVertexPacked() { }


tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove() const {
return _persistentRecords._heightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(const tarch::la::Vector<2,double>& heightWaterAbove) {
_persistentRecords._heightWaterAbove = (heightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterAbove(int elementIndex, const double& heightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightWaterAbove[elementIndex]= heightWaterAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightWaterRight() const {
return _persistentRecords._heightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightWaterRight(const double& heightWaterRight) {
_persistentRecords._heightWaterRight = heightWaterRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove() const {
return _persistentRecords._heightSeabedAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(const tarch::la::Vector<2,double>& heightSeabedAbove) {
_persistentRecords._heightSeabedAbove = (heightSeabedAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._heightSeabedAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedAbove(int elementIndex, const double& heightSeabedAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._heightSeabedAbove[elementIndex]= heightSeabedAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getHeightSeabedRight() const {
return _persistentRecords._heightSeabedRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setHeightSeabedRight(const double& heightSeabedRight) {
_persistentRecords._heightSeabedRight = heightSeabedRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove() const {
return _persistentRecords._momentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(const tarch::la::Vector<2,double>& momentumXAbove) {
_persistentRecords._momentumXAbove = (momentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXAbove(int elementIndex, const double& momentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumXAbove[elementIndex]= momentumXAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumXRight() const {
return _persistentRecords._momentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumXRight(const double& momentumXRight) {
_persistentRecords._momentumXRight = momentumXRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove() const {
return _persistentRecords._momentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(const tarch::la::Vector<2,double>& momentumYAbove) {
_persistentRecords._momentumYAbove = (momentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._momentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYAbove(int elementIndex, const double& momentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._momentumYAbove[elementIndex]= momentumYAbove;

}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMomentumYRight() const {
return _persistentRecords._momentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMomentumYRight(const double& momentumYRight) {
_persistentRecords._momentumYRight = momentumYRight;
}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove() const {
return _persistentRecords._fluxHeightWaterAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(const tarch::la::Vector<2,double>& fluxHeightWaterAbove) {
_persistentRecords._fluxHeightWaterAbove = (fluxHeightWaterAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterAbove(int elementIndex, const double& fluxHeightWaterAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterAbove[elementIndex]= fluxHeightWaterAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove() const {
return _persistentRecords._fluxMomentumXAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(const tarch::la::Vector<2,double>& fluxMomentumXAbove) {
_persistentRecords._fluxMomentumXAbove = (fluxMomentumXAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXAbove(int elementIndex, const double& fluxMomentumXAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXAbove[elementIndex]= fluxMomentumXAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove() const {
return _persistentRecords._fluxMomentumYAbove;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(const tarch::la::Vector<2,double>& fluxMomentumYAbove) {
_persistentRecords._fluxMomentumYAbove = (fluxMomentumYAbove);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYAbove(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYAbove[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYAbove(int elementIndex, const double& fluxMomentumYAbove) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYAbove[elementIndex]= fluxMomentumYAbove;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight() const {
return _persistentRecords._fluxHeightWaterRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(const tarch::la::Vector<2,double>& fluxHeightWaterRight) {
_persistentRecords._fluxHeightWaterRight = (fluxHeightWaterRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxHeightWaterRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxHeightWaterRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxHeightWaterRight(int elementIndex, const double& fluxHeightWaterRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxHeightWaterRight[elementIndex]= fluxHeightWaterRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight() const {
return _persistentRecords._fluxMomentumXRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(const tarch::la::Vector<2,double>& fluxMomentumXRight) {
_persistentRecords._fluxMomentumXRight = (fluxMomentumXRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumXRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumXRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumXRight(int elementIndex, const double& fluxMomentumXRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumXRight[elementIndex]= fluxMomentumXRight;

}



tarch::la::Vector<2,double> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight() const {
return _persistentRecords._fluxMomentumYRight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(const tarch::la::Vector<2,double>& fluxMomentumYRight) {
_persistentRecords._fluxMomentumYRight = (fluxMomentumYRight);
}



double peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getFluxMomentumYRight(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<2);
return _persistentRecords._fluxMomentumYRight[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setFluxMomentumYRight(int elementIndex, const double& fluxMomentumYRight) {
assertion(elementIndex>=0);
assertion(elementIndex<2);
_persistentRecords._fluxMomentumYRight[elementIndex]= fluxMomentumYRight;

}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getIsHangingNode() const {
short int mask = 1 << (0);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   return (tmp != 0);
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setIsHangingNode(const bool& isHangingNode) {
short int mask = 1 << (0);
   _persistentRecords._packedRecords0 = isHangingNode ? (_persistentRecords._packedRecords0 | mask) : (_persistentRecords._packedRecords0 & ~mask);
}



peano::applications::shallowwater::records::SpacetreeGridVertex::RefinementControl peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControl() const {
short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (1);
   assertion(( tmp >= 0 &&  tmp <= 5));
   return (RefinementControl) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setRefinementControl(const RefinementControl& refinementControl) {
assertion((refinementControl >= 0 && refinementControl <= 5));
   short int mask =  (1 << (3)) - 1;
   mask = mask << (1);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | refinementControl << (1);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getMaximumSubtreeHeight() const {
return _persistentRecords._maximumSubtreeHeight;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setMaximumSubtreeHeight(const int& maximumSubtreeHeight) {
_persistentRecords._maximumSubtreeHeight = maximumSubtreeHeight;
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getNumberOfAdjacentRefinedCells() const {
return _numberOfAdjacentRefinedCells;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setNumberOfAdjacentRefinedCells(const int& numberOfAdjacentRefinedCells) {
_numberOfAdjacentRefinedCells = numberOfAdjacentRefinedCells;
}



peano::applications::shallowwater::records::SpacetreeGridVertex::InsideOutsideDomain peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomain() const {
short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   short int tmp = _persistentRecords._packedRecords0 & mask;
   tmp = tmp >> (4);
   assertion(( tmp >= 0 &&  tmp <= 2));
   return (InsideOutsideDomain) tmp;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setInsideOutsideDomain(const InsideOutsideDomain& insideOutsideDomain) {
assertion((insideOutsideDomain >= 0 && insideOutsideDomain <= 2));
   short int mask =  (1 << (2)) - 1;
   mask = mask << (4);
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 & ~mask;
   _persistentRecords._packedRecords0 = _persistentRecords._packedRecords0 | insideOutsideDomain << (4);
}



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getBelongsToSubdomainBoundary() const {
return _persistentRecords._belongsToSubdomainBoundary;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setBelongsToSubdomainBoundary(const bool& belongsToSubdomainBoundary) {
_persistentRecords._belongsToSubdomainBoundary = belongsToSubdomainBoundary;
}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks() const {
return _persistentRecords._adjacentRanks;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanks) {
_persistentRecords._adjacentRanks = (adjacentRanks);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanks(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanks[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanks(int elementIndex, const int& adjacentRanks) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanks[elementIndex]= adjacentRanks;

}



tarch::la::Vector<TWO_POWER_D,int> peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel() const {
return _persistentRecords._adjacentRanksOnSublevel;
}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(const tarch::la::Vector<TWO_POWER_D,int>& adjacentRanksOnSublevel) {
_persistentRecords._adjacentRanksOnSublevel = (adjacentRanksOnSublevel);
}



int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getAdjacentRanksOnSublevel(int elementIndex) const {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
return _persistentRecords._adjacentRanksOnSublevel[elementIndex];

}



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::setAdjacentRanksOnSublevel(int elementIndex, const int& adjacentRanksOnSublevel) {
assertion(elementIndex>=0);
assertion(elementIndex<TWO_POWER_D);
_persistentRecords._adjacentRanksOnSublevel[elementIndex]= adjacentRanksOnSublevel;

}


std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const InsideOutsideDomain& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getInsideOutsideDomainMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getInsideOutsideDomainMapping();
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString(const RefinementControl& param) {
return peano::applications::shallowwater::records::SpacetreeGridVertex::toString(param);
}

std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getRefinementControlMapping() {
return peano::applications::shallowwater::records::SpacetreeGridVertex::getRefinementControlMapping();
}



std::string peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString() const {
std::ostringstream stringstr;
toString(stringstr);
return stringstr.str();
}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::toString (std::ostream& out) const {
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
out << "isHangingNode:" << getIsHangingNode();
out << ",";
out << "refinementControl:" << toString(getRefinementControl());
out << ",";
out << "maximumSubtreeHeight:" << getMaximumSubtreeHeight();
out << ",";
out << "numberOfAdjacentRefinedCells:" << getNumberOfAdjacentRefinedCells();
out << ",";
out << "insideOutsideDomain:" << toString(getInsideOutsideDomain());
out << ",";
out << "belongsToSubdomainBoundary:" << getBelongsToSubdomainBoundary();
out << ",";
out << "adjacentRanks:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanks(i) << ",";
   }
   out << getAdjacentRanks(TWO_POWER_D-1) << "]";
out << ",";
out << "adjacentRanksOnSublevel:[";
   for (int i = 0; i < TWO_POWER_D-1; i++) {
      out << getAdjacentRanksOnSublevel(i) << ",";
   }
   out << getAdjacentRanksOnSublevel(TWO_POWER_D-1) << "]";
out <<  ")";
}


peano::applications::shallowwater::records::SpacetreeGridVertexPacked::PersistentRecords peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getPersistentRecords() const {
return _persistentRecords;
}

peano::applications::shallowwater::records::SpacetreeGridVertex peano::applications::shallowwater::records::SpacetreeGridVertexPacked::convert() const{
return SpacetreeGridVertex(
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
getIsHangingNode(),
getRefinementControl(),
getMaximumSubtreeHeight(),
getNumberOfAdjacentRefinedCells(),
getInsideOutsideDomain(),
getBelongsToSubdomainBoundary(),
getAdjacentRanks(),
getAdjacentRanksOnSublevel()
);
}

#ifdef Parallel
#include "tarch/parallel/Node.h" 

tarch::logging::Log peano::applications::shallowwater::records::SpacetreeGridVertexPacked::_log( "peano::applications::shallowwater::records::SpacetreeGridVertexPacked" );

MPI_Datatype peano::applications::shallowwater::records::SpacetreeGridVertexPacked::Datatype = 0;


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::initDatatype() {
const int Attributes = 5;
MPI_Datatype subtypes[Attributes] = {
MPI_CHAR,		 //belongsToSubdomainBoundary
MPI_INT,		 //adjacentRanks
MPI_INT,		 //adjacentRanksOnSublevel
MPI_SHORT,		 //_packedRecords0
MPI_UB		 // end/displacement flag
};

int blocklen[Attributes] = {
1,		 //belongsToSubdomainBoundary
TWO_POWER_D,		 //adjacentRanks
TWO_POWER_D,		 //adjacentRanksOnSublevel
1,		 //_packedRecords0
1		 // end/displacement flag
};

MPI_Aint     disp[Attributes];
SpacetreeGridVertexPacked dummySpacetreeGridVertexPacked[2];

MPI_Aint base;
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]))), &base);
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[0] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanks[0]))), 		&disp[1] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._adjacentRanksOnSublevel[0]))), 		&disp[2] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[0]._persistentRecords._packedRecords0))), 		&disp[3] );
MPI_Address( const_cast<void*>(static_cast<const void*>(&(dummySpacetreeGridVertexPacked[1]._persistentRecords._belongsToSubdomainBoundary))), 		&disp[4] );

for (int i=1; i<Attributes; i++) {
assertion1( disp[i] > disp[i-1], i );
}
for (int i=0; i<Attributes; i++) {
disp[i] -= base;
}
MPI_Type_struct( Attributes, blocklen, disp, subtypes, &SpacetreeGridVertexPacked::Datatype );
MPI_Type_commit( &SpacetreeGridVertexPacked::Datatype );

}


void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::shutdownDatatype() {
MPI_Type_free( &SpacetreeGridVertexPacked::Datatype );

}

void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::send(int destination, int tag) {
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
msg << "was not able to send message peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
msg << "testing for finished send task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked "
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
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
"send(int)", destination
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



void peano::applications::shallowwater::records::SpacetreeGridVertexPacked::receive(int source, int tag) {
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
msg << "failed to start to receive peano::applications::shallowwater::records::SpacetreeGridVertexPacked from node "
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
msg << "testing for finished receive task for peano::applications::shallowwater::records::SpacetreeGridVertexPacked failed: "
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
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
"receive(int)", source
);
triggeredTimeoutWarning = true;
}
if (
tarch::parallel::Node::getInstance().isTimeOutDeadlockEnabled() &&
(clock()>timeOutShutdown)
) {
tarch::parallel::Node::getInstance().triggerDeadlockTimeOut(
"peano::applications::shallowwater::records::SpacetreeGridVertexPacked",
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



bool peano::applications::shallowwater::records::SpacetreeGridVertexPacked::isMessageInQueue(int tag) {
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

int peano::applications::shallowwater::records::SpacetreeGridVertexPacked::getSenderRank() const {
assertion( _senderRank!=-1 );
return _senderRank;

}
#endif




#endif


