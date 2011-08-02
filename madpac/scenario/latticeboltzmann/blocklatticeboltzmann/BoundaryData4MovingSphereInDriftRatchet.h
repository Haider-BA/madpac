#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4MOVINGSPHEREINDRIFTRATCHET_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4MOVINGSPHEREINDRIFTRATCHET_H_

#include "peano/geometry/Geometry.h"
#include "tarch/la/Vector.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Scenario.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include "peano/integration/partitioncoupling/services/CouplingService.h"
#include "peano/integration/partitioncoupling/services/SendDataService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/ForceSynchronisationService.h"

namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      class BoundaryData4MovingSphereInDriftRatchet;
    }
  }
}


class scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4MovingSphereInDriftRatchet:
public scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario {
  public:
    BoundaryData4MovingSphereInDriftRatchet(
      peano::geometry::Geometry* basicGeometry,
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &domainOffset,
      const double &inletVelocity,
      double timePerSineCycle
    );
    ~BoundaryData4MovingSphereInDriftRatchet();

    void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    );

    /** update moving sphere and inlet condition */
    void advance(double dt);

  protected:
    virtual double getInletVelocity(
      const tarch::la::Vector<DIMENSIONS,double> &position
    ){
      return sin(2.0*tarch::la::PI*(_time/_timePerSineCycle))*_inletVelocity;
    }

  private:
    /** returns true, if the next lattice node in pdfDirection
     *  lies outside the basic geometry. This is not 100 percent
     *  consistent as the inlet and outlet nodes might be
     *  (and typically are) outside the geometry as well.
     *  Therefore, this function is called within
     *  getBoundaryData() AFTER performing inlet and outlet checks.
     */
    bool isNoSlipBoundary(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection
    );

    /** returns true, if the next lattice node in pdfDirection
     *  lies in front of the domain, i.e. the x-coordinate is smaller
     *  than the _domainOffset(0).
     */
    bool isInletBoundary(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection
    );

    /** returns true, if the next lattice node in pdfDirection
     *  lies behind the domain, i.e. the x-coordinate is greater
     *  than _domainSize(0)+_domainOffset(0).
     */
    bool isOutletBoundary(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection
    );

    /** basic builtin geometry that has been parsed. This
     *  should be the same as the _basicGeometry in the
     *  PartitionCoupling4MovingSphere-class.
     */
    peano::geometry::Geometry *_basicGeometry;

    /** domain size */
    tarch::la::Vector<DIMENSIONS,double> _domainSize;

    /** domain offset */
    tarch::la::Vector<DIMENSIONS,double> _domainOffset;

    /** (mean) inlet velocity */
    double _inletVelocity;

    /** time per sine cycle */
    double _timePerSineCycle;
    /** elapsed time */
    double _time;
};
#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4MOVINGSPHEREINDRIFTRATCHET_H_
