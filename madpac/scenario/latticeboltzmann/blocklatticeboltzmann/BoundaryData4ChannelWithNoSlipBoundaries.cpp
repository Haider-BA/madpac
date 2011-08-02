#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4ChannelWithNoSlipBoundaries.h"


scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4ChannelWithNoSlipBoundaries::
BoundaryData4ChannelWithNoSlipBoundaries(
  const tarch::la::Vector<DIMENSIONS,double> &domainSize,
  const tarch::la::Vector<DIMENSIONS,double> &offset,
  const double &meanInletVelocity,
  const bool &useParabolicProfile
):
scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel(
  domainSize,offset,meanInletVelocity,useParabolicProfile
){}


void scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4ChannelWithNoSlipBoundaries::
fillBoundaryData4InnerBoundaries(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection,
  const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
) {
  boundaryData.setBoundaryType(
    peano::applications::latticeboltzmann::BoundaryData::HW_BB
  );
}
