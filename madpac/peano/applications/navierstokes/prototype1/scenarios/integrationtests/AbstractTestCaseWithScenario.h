#ifndef _FLUID_SCENARIO_TEST_CASE_WITH_SCENARIO_H_
#define _FLUID_SCENARIO_TEST_CASE_WITH_SCENARIO_H_


#include "tarch/tests/TestCase.h"
#include "tarch/logging/Log.h"

//#include "peano/applications/navierstokes/prototype1/runners/TrivialgridFluidRunnerTypedefs.h"
//#include "peano/applications/navierstokes/prototype1/NonLinearTrivialgridFluidSimulation.h"

//#include "peano/applications/navierstokes/prototype1/adapters/TrivialgridDummyEventHandle2FluidAdapter.h"
#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDlinear.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"

//#include "fluid-scenario/adapter/GridGeometryHandle2FluidScenarioAdapter.h"

#if defined(ComponentTrivialgrid)
#include "trivialgrid/Trivialgrid.h"
#endif

namespace peano {
  namespace geometry {
    /**
     * Forward declaration. Include comes in .cpp.
     */
    class Intersection;
  }
}



#if defined(ComponentPETSc)
namespace petsc {
  /**
   * Forward declaration.
   */
  class PETScSolver;
}
#endif


namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace scenarios {
          namespace integrationtests {
            /*
             * Forward declaration. Include comes in .cpp.
             */
            class AbstractTestCaseWithScenario;
          }  // namespace integrationtests
          /**
           * Forward declaration. Include comes in .cpp.
           */
          class FluidScenario;
          /**
           * forward declaration. Include comes in .cpp.
           */
          class TimeDependentBoundaryData;
        }  // namespace scenarios
      }  // namespace prototype1
    }  // namespace navierstokes
  }  // namespace applications
}

  namespace peano {
    namespace applications {
      namespace navierstokes {
        namespace prototype1 {
      /**
       * Forward declaration for pointer. Include comes in .cpp.
       */
      class AbstractCalculateF;
      /**
       * Forward declaration for pointer. Include comes in .cpp.
       */
      class TrivialgridRepository4Fluid;
      /**
       * Forward declaration for pointer. Include comes in .cpp.
       */
      class TrivialgridRepository4FluidRootEvents;
      /**
       * Forward declaration for pointer. Include comes in .cpp.
       */
      class TrivialgridRepository4FluidNonLinear;
      /**
       * Forward declaration for pointer. Include comes in .cpp.
       */
      class TrivialgridRepository4FluidRootEventsNonLinear;
        }  // namespace prototype1
      }  // namespace navierstokes
    }  // namespace applications
  }
  /**
   * Abstract super class for fluid tests covering some basic stuff.
   *
   * We now also offer creation methods for scenarios directly (used in
   * peano::fluid::AbstractTestCaseWithFluidSimulationCreator, e.g.).
   *
   * It was impossible to set up the creation methods for
   * TrivialgridGeometryHandle2FluidScenarioAdapter by simple encapsulating all
   * the construction of the other objects (geometry, scenario) since we got
   * segmentation faults from the (non-existing) local instances when using the
   * returned adapter. That is why the idea of using pointer attributes for
   * geometry and scenario came up (which allow for asserting a final deletion in
   * the destructor and deletions before creations in the creation methods; thus,
   * this should be "invisible" to the test case developer). Using this setup, we
   * are able to avoid a lot of includes (geometries, scenarios) in the
   * corresponding individual test cases. This helps reducing compile time when
   * one of these include files are changed. In addition, the Creation Method
   * Pattern allows for a complete encapsulation of all the constructor calls,
   * thus reducing maintainance costs for the tests.
   *
   * We initially had this test class in fluid/tests/, but since it has aspects
   * related to more than just fluid (i.e. scenario, and general validation stuff)
   * we put it in the utils. T.W. made the correct comment, that utils must not be
   * dependent on another component. That is why this test base class is now in
   * the scenario component (since it creates (fluid) scenarios).
   *
   * Remark T.W.: Moved the aspects that do #not# belong to fluid (comparison of
   * arrays, e.g.) into the test case. All the fluid-specific operations
   * remained in this class.
   *
   * @author Tobias Neckel
   */
  class peano::applications::navierstokes::prototype1::scenarios::integrationtests::AbstractTestCaseWithScenario : public tarch::tests::TestCase {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

  protected:
    /**
     * Default offset: Vector(0.0).
     *
     * This data is used in some derived tests as well as in the creation
     * methods such as createTGScenarioAdapter_UnitCubeDC().
     */
    static const Vector DEFAULT_OFFSET;

    /**
     * Default velocity for the used geometry: Vector(0.0)
     */
    static const Vector DEFAULT_GEOMETRY_VELOCITY;

    /**
     * Default box dimensions: Vector(1.0).
     *
     * This data is used in some derived tests as well as in the creation
     * methods such as createTGScenarioAdapter_UnitCubeDC().
     */
    static const Vector DEFAULT_BOX;

    /**
     * Default mesh size: Vector(1.0).
     *
     * This data is used in some derived tests as well as in the creation
     * methods such as createTGScenarioAdapter_UnitCubeDC().
     */
    static const Vector DEFAULT_MESHSIZE;

    /**
     * Default geometry inversion flag: false.
     *
     * This is the default inversion flag for geometry initialisations.
     */
    static const bool   DEFAULT_INVERTED;

    /**
     * Default geometry base number: 0.
     *
     * This is the default base number for geometry initialisations.
     */
    static const int    DEFAULT_BASENUMBER;

    /**
     * Default velocity: 1.0.
     *
     * This data is used in some derived tests as well as in the creation
     * methods such as createTGScenarioAdapter_UnitCubeDC().
     */
    static const double DEFAULT_VELOCITY;

    /**
     * Default inlet dimensions: Vector(1.0).
     *
     * This data is used in some derived tests as well as in the creation
     * methods such as createTGScenarioAdapter_UnitCubeChannel().
     */
    static const Vector DEFAULT_INLET_DIMENSIONS;

    /**
     * Default flag for usage of inletVel in whole channel: false.
     *
     */
    static const bool DEFAULT_USE_INLET_VELOCITY_IN_WHOLE_CHANNEL;
    /**
     * Default init velocity mean value: 0.0
     */
    static const double DEFAULT_MEAN_INIT_VELOCITY;
    /**
     * Default flag for usage of periodic boundary conditions: false
     */
    static const bool   DEFAULT_USE_PERIODIC_BC;

    /**
     * Default adjustment factor: 1.0
     */
    static const double DEFAULT_ADJUSTMENT_FACTOR;
    /**
     * Default theta: 1.0
     * This is used for steady-state and implicit Euler sims. If you want to use
     * a real Crank-Nicholson (like trapzoidal rule), you will need to modify
     * this.
     */
    static const double DEFAULT_THETA;


#if defined(ComponentGeometry)
    /**
     * \brief Pointer to the geometry intersection created by one of the
     *        creation methods.
     *
     * Since Intersection holds all geometries internally (via pointers), they
     * don't have to be hold outside somewhere and we just need an Intersection.
     *
     * Is deleted in the creation methods (before creating a new instance) and
     * in the destructor.
     */
    peano::geometry::Intersection* _geometry;
#elif defined(ComponentPrecice) // ComponentGeometry
    precice::PreciceHandle* _geometry;
#endif // ComponentPrecice

    /**
     * Pointer to the scenario created by one of the creation methods.
     *
     * Is deleted in the creation methods (before creating a new instance) and
     * in the destructor.
     */
    FluidScenario* _fluidScenario;

    /**
     * Pointer to handler for time dependent boundary data.
     */
    peano::applications::navierstokes::prototype1::scenarios::TimeDependentBoundaryData* _timeDependentBoundaryData;

    /**
     * Pointer to AbstractCalculateF. Set in
     * createAndSaveObjectsForAdapters().
     */
    peano::applications::navierstokes::prototype1::fluidnumerics::AbstractCalculateF* _calculateF;


#if defined(ComponentTrivialgrid)
    /**
     * Pointer for repository of trivialgrid adapter references.
     */
    peano::fluid::TrivialgridRepository4Fluid* _trivialgridRepository4Fluid;
    /**
     * Pointer for repository of trivialgrid root event references.
     */
    peano::fluid::TrivialgridRepository4FluidRootEvents* _trivialgridRepository4FluidRootEvents;
    /**
     * Pointer for repository of non-linear adapter references.
     */
    peano::fluid::TrivialgridRepository4FluidNonLinear* _trivialgridRepository4FluidNonLinear;
    /**
     * Pointer for repository of non-linear trivialgrid references ("root
     * events").
     */
    peano::fluid::TrivialgridRepository4FluidRootEventsNonLinear* _trivialgridRepository4FluidRootEventsNonLinear;

    /**
     * Pointer for trivialgrid scenario adapter.
     */
    peano::fluid::TGScenarioAdapter*           _gridScenarioAdapterTG;
    /**
     * Pointer for trivialgrid mock adapter.
     */
    peano::fluid::TGMockGridAdapter*           _mockAdapterTG;
#ifdef Parallel
    /**
     * Pointer for trivialgrid inner cell counting adapter in parallel.
     */
    peano::fluid::TGInnerCellCountingParallelAdapter*  _innerCellCountingParallelAdapterTG;
#endif
    /**
     * Pointer for trivialgrid update grid adapter.
     */
    peano::fluid::TGUpdateGridAdapter*         _updateGridAdapterTG;
    /**
     * Pointer for trivialgrid assemble Q adapter.
     */
#if defined(ComponentPETSc)
    peano::fluid::TGAssembleQAdapter*          _assembleQAdapterTG;
    /**
     * Pointer for trivialgrid assemble Q (div corr) adapter.
     */
    peano::fluid::TGAssembleQAdapter*          _assembleQAdapterDivCorrTG;
#endif
    /**
     * Pointer for trivialgrid F adapter.
     */
    peano::fluid::TGCalculateFAdapter*         _calculateFAdapterTG;
#if defined(ComponentPETSc)
    /**
     * Pointer for trivialgrid PPE rhs adapter.
     */
    peano::fluid::TGPPERHSAdapter* _pPERHSAdapterTG;
    /**
     * Pointer for trivialgrid grad p adapter.
     */
    peano::fluid::TGPressureGradientAdapter* _pressureGradientAdapterTG;
#endif
    /**
     * Pointer for trivialgrid force adapter.
     */
    peano::fluid::TGGlobalForceAdapter* _globalForceAdapterTG;

    /**
     * Pointer for the adapter computing FSI.
     */
    peano::fluid::TGFluidStructureInteractionAdapter* _fluidStructureInteractionAdapterTG;

#if defined(ComponentPETSc)
    /**
     * Pointer for trivialgrid update u div corr adapter.
     */
    peano::fluid::TGUpdateVelocitiesWithDivCorrectionAdapter* _updateUWithDivCorrAdapterTG;
#endif
    /**
     * Pointer for trivialgrid update u adapter.
     */
    peano::fluid::TGUpdateVelocitiesAdapter*    _updateVelocitiesAdapterTG;
#if defined(ComponentPrecice)
    /**
     * Pointer for trivialgrid advect geometry adapter.
     */
    peano::fluid::TGAdvectGeometryAdapter*    _advectGeometryAdapterTG;
#endif
    /**
     * Pointer for trivialgrid read restart adapter.
     */
    peano::fluid::TGRestartReadAdapter*  _readRestartAdapterTG;
    /**
     * Pointer for trivialgrid write restart adapter.
     */
    peano::fluid::TGRestartWriteAdapter* _writeRestartAdapterTG;
    /**
     * Pointer for trivialgrid vtk adapter.
     */
    peano::fluid::TGVTKWriterAdapter*  _vtkWriterAdapterTG;
#ifdef ComponentSteering
    /**
     * Pointer for trivialgrid vtk client adapter.
     */
    peano::fluid::TGVTKClientAdapter*  _vtkClientAdapterTG;
#endif
    /**
     * Pointer for trivialgrid tec writer adapter.
     */
    peano::fluid::TGTECWriterAdapter* _tecWriterAdapterTG;
    /**
     * Pointer for trivialgrid cartesian writer adapter.
     */
    peano::fluid::TGCartesianWriterAdapter* _cartesianWriterAdapterTG;

#if defined(ComponentStaggeredPoisson)
    peano::fluid::TGPPERHSMergeAdapter* _pPERHSMergeAdapterTG;
    peano::fluid::TGPressureGradientMergeAdapter* _pressureGradientMergeAdapterTG;
    peano::fluid::TGUpdateVelocitiesWithDivCorrectionMergeAdapter* _updateUWithDivCorrMergeAdapterTG;
    peano::fluid::TGStencilSetupMergeAdapter* _stencilSetupMergeAdapterTG;
    peano::fluid::TGSORSolverMergeAdapter* _sorSolverMergeAdapterTG;
#endif

#if defined(ComponentPETSc)
    peano::fluid::TGAbstractJacobianAdapter*                       _calculateJacobianAdapter;
#endif
    peano::fluid::TGNumberCellsAndVerticesAdapter*                 _numberCellsAndVerticesAdapter;
    peano::fluid::TGUploadUPAdapter*                               _uploadUPAdapter;
    peano::fluid::TGDownloadUPAdapter*                             _downloadUPAdapter;
    peano::fluid::TGCalculateBAdapter*                             _calculateBAdapter;
    peano::fluid::TGCalculateBCrankNicholsonAdapter*               _calculateBCrankNicholsonAdapter;
    peano::fluid::TGInitCrankNicholsonAdapter*                     _initCrankNicholsonAdapter;

    /**
     * Pointer to trivialgrid data.
     */
    peano::fluid::TGData* _trivialgridData;

    /**
     * Trivialgrid instance for mock adapter.
     */
    peano::fluid::MockTG* _mockTG;
#ifdef Parallel
    /**
     * Trivialgrid instance for inner cell counting adapter in parallel.
     */
    peano::fluid::InnerCellCountingParallelTG*  _innerCellCountingParallelTG;
#endif
    /**
     * Trivialgrid instance for update grid adapter.
     */
    peano::fluid::UpdateGridTG*  _updateGridTG;
    /**
     * Trivialgrid instance for assemble Q adapter.
     */
#if defined(ComponentPETSc)
    peano::fluid::AssembleQTG* _assembleQTG;
    /**
     * Trivialgrid instance for assemble Q (div corr) adapter.
     */
    peano::fluid::AssembleQTG* _assembleQDivCorrTG;
#endif
    /**
     * Trivialgrid instance for calculate F adapter.
     */
    peano::fluid::CalculateFTG* _calculateFTG;
    /**
     * Trivialgrid instance for ppe rhs adapter.
     */
#if defined(ComponentPETSc)
    peano::fluid::PpeRHSTG*  _ppeRHSTG;
    /**
     * Trivialgrid instance for grad P adapter.
     */
    peano::fluid::PressureGradientTG* _pressureGradientTG;
#endif
    /**
     * Trivialgrid instance for global force adapter.
     */
    peano::fluid::GlobalForceTG* _globalForceTG;

    /**
     * Trivialgrid instance for the adapter computing FSI.
     */
    peano::fluid::FluidStructureInteractionTG* _fluidStructureInteractionTG;

#if defined(ComponentPETSc)
    /**
     * Trivialgrid instance for update u (div corr) adapter.
     */
    peano::fluid::UpdateUWithDivCorrTG* _updateUWithDivCorrTG;
#endif

    /**
     * Trivialgrid instance for update u adapter.
     */
    peano::fluid::UpdateUTG* _updateUTG;

#if defined(ComponentPrecice)
    /**
     * Trivialgrid instance for update u adapter.
     */
    peano::fluid::AdvectGeometryTG* _advectGeometryTG;
#endif

    /**
     * Trivialgrid instance for restart read adapter.
     */
    peano::fluid::RestartReadTG* _restartReadTG;
    /**
     * Trivialgrid instance for restart write adapter.
     */
    peano::fluid::RestartWriteTG* _restartWriteTG;
    /**
     * Trivialgrid instance for vtk adapter.
     */
    peano::fluid::VtkWriterTG* _vtkWriterTG;
#ifdef ComponentSteering
    /**
     * Trivialgrid instance for vtk client adapter.
     */
    peano::fluid::VtkClientTG* _vtkClientTG;
#endif
    /**
     * Trivialgrid instance for tec adapter.
     */
    peano::fluid::TecWriterTG* _tecWriterTG;
    /**
     * Trivialgrid instance for cartesian writer adapter.
     */
    peano::fluid::CartesianWriterTG* _cartesianWriterTG;


#if defined(ComponentStaggeredPoisson)
    /**
     * Analogous pointers as above, but based on the merge data-structures!
     */
    peano::fluid::TGDataMerge* _trivialgridDataMerge;
    peano::fluid::MockTGMerge* _mockTGMerge;
#ifdef Parallel
    peano::fluid::InnerCellCountingParallelTGMerge*  _innerCellCountingParallelTGMerge;
#endif
    peano::fluid::UpdateGridTGMerge*  _updateGridTGMerge;
#if defined(ComponentPETSc)
    peano::fluid::AssembleQTGMerge* _assembleQTGMerge;
    peano::fluid::AssembleQTGMerge* _assembleQDivCorrTGMerge;
#endif
    peano::fluid::CalculateFTGMerge* _calculateFTGMerge;
#if defined(ComponentPETSc)
    peano::fluid::PpeRHSTG4Petsc*  _ppeRHSTG4Petsc;
    peano::fluid::PressureGradientTG4Petsc* _pressureGradientTG4Petsc;
#endif
    peano::fluid::PpeRHSTGMerge* _ppeRHSTGMerge;
    peano::fluid::PressureGradientTGMerge* _pressureGradientTGMerge;
    peano::fluid::GlobalForceTGMerge* _globalForceTGMerge;
    peano::fluid::FluidStructureInteractionTGMerge* _fluidStructureInteractionTGMerge;
#if defined(ComponentPETSc)
    peano::fluid::UpdateUWithDivCorrTG4Petsc* _updateUWithDivCorrTG4Petsc;
#endif
    peano::fluid::UpdateUWithDivCorrTGMerge* _updateUWithDivCorrTGMerge;
    peano::fluid::UpdateUTGMerge* _updateUTGMerge;
    peano::fluid::RestartReadTGMerge* _restartReadTGMerge;
    peano::fluid::RestartWriteTGMerge* _restartWriteTGMerge;
    peano::fluid::VtkWriterTGMerge* _vtkWriterTGMerge;
#ifdef ComponentSteering
    peano::fluid::VtkClientTGMerge* _vtkClientTGMerge;
#endif
    peano::fluid::TecWriterTGMerge* _tecWriterTGMerge;
    peano::fluid::CartesianWriterTGMerge* _cartesianWriterTGMerge;
    peano::fluid::StencilSetupTGMerge* _stencilSetupTGMerge;
    peano::fluid::SORSolverTGMerge* _sorSolverTGMerge;
#endif

    /**
     * TG for non-linear
     */
    peano::fluid::TGDataCrankNicholson* _trivialgridDataCrankNicholson;
    peano::fluid::MockTGCrankNicholson* _mockTGCrankNicholson;
#ifdef Parallel
    peano::fluid::InnerCellCountingParallelTGCrankNicholson*  _innerCellCountingParallelTGCrankNicholson;
#endif
    peano::fluid::UpdateGridTGCrankNicholson*         _updateGridTGCrankNicholson;
    // super-epsi
#if defined(ComponentPETSc)
    peano::fluid::AssembleQTGCrankNicholson*          _assembleQTGCrankNicholson;
    peano::fluid::AssembleQTGCrankNicholson*          _assembleQDivCorrTGCrankNicholson;
#endif
    peano::fluid::CalculateFTGCrankNicholson*         _calculateFTGCrankNicholson;
    // super-epsi
#if defined(ComponentPETSc)
    peano::fluid::PpeRHSTGCrankNicholson*             _ppeRHSTGCrankNicholson;
    peano::fluid::PressureGradientTGCrankNicholson*   _pressureGradientTGCrankNicholson;
    peano::fluid::GlobalForceTGCrankNicholson*        _globalForceTGCrankNicholson;
    peano::fluid::FluidStructureInteractionTGCrankNicholson*         _fluidStructureInteractionTGCrankNicholson;
    peano::fluid::UpdateUWithDivCorrTGCrankNicholson* _updateUWithDivCorrTGCrankNicholson;
    peano::fluid::UpdateUTGCrankNicholson*            _updateUTGCrankNicholson;
#if defined(ComponentPrecice)
    peano::fluid::AdvectGeometryTGCrankNicholson*     _advectGeometryTGCrankNicholson;
#endif // ComponentPrecice
#endif // ComponentPETSc
    peano::fluid::RestartReadTGCrankNicholson*        _restartReadTGCrankNicholson;
    peano::fluid::RestartWriteTGCrankNicholson*       _restartWriteTGCrankNicholson;
    peano::fluid::VtkWriterTGCrankNicholson*          _vtkWriterTGCrankNicholson;
#ifdef ComponentSteering
    peano::fluid::VtkClientTGCrankNicholson*          _vtkClientTGCrankNicholson;
#endif
    peano::fluid::TecWriterTGCrankNicholson*          _tecWriterTGCrankNicholson;
    peano::fluid::CartesianWriterTGCrankNicholson*    _cartesianWriterTGCrankNicholson;

    peano::fluid::AbstractJacobianTG*         _calculateJacobianTG;
    peano::fluid::NumberCellsAndVerticesTG*   _numberCellsAndVerticesTG;
    peano::fluid::UploadUPTG*                 _uploadUPTG;
    peano::fluid::DownloadUPTG*               _downloadUPTG;
    peano::fluid::CalculateBTG*               _calculateBTG;
    peano::fluid::CalculateBCrankNicholsonTG* _calculateBCrankNicholsonTG;
    peano::fluid::InitCrankNicholsonTG*       _initCrankNicholsonTG;

    /**
     * Method for allocating adapters and instances for trivialgrid setup.
     *
     * If you want to use the non-linear (time-implicit or steady-state) stuff,
     * you have to provide createNonlinearStuff with true.
     *
     * Note that a lot of default arguments concern the turbulent stuff as we
     * need to use the correct loading for CalculateF.
     *
     * @param useMeshStretching   (Optional) flag for mesh-stretching.
     * @param stretchingDirection (Optional) direction for mesh-stretching.
     * @param stretchingParameter (Optional) parameter for mesh-stretching.
     * @param useTurbulentComputeDFactor (Optional) flag to decide whether
     *                                   OperatorFactory or LESOperatorFactory
     *                                   shall be used to create CalculateF.
     */
    void createAndSaveTrivialgridAdaptersAndInstances(
        const IntVector&  numberOfVerticesInDirection,
        const Vector&     domainSize,
        const Vector&     domainOffset,
        const bool        createNonlinearStuff       = false,
        const std::string elementType                = peano::fluid::CalculateF::ELEMENT_TYPE,
        const bool        useImplicitTimeIntegration = false,
        const std::string JacobianAssemblingType     = peano::fluid::NonLinearTrivialgridFluidSimulation::JACOBIAN_ASSEMBLING_ANALYTICAL,
        const double      theta                      = 1.0,
        const IntVector   cpuConfig = IntVector(1),
        const bool        useMeshStretching = false,
        const int         stretchingDirection = -1,
        const double      stretchingParameter = -1.0,
        const bool        useTurbulentComputeDFactor = false,
        const double      cSmag                      = 0.0,
        const bool        isVanDriestDampingInUse    = false,
        const double&     delta                      = 0.0,
        const Vector&     offset                     = Vector(0.0)
    );
    /**
     * Method to delete stuff allocated in
     * createAndSaveTrivialgridAdaptersAndInstances().
     */
    void deleteTrivialgridAdaptersAndInstances();

#endif // defined(ComponentTrivialgrid)


    /**
     * Method for deleting all pointer instances. Is called in the destructor.
     */
    void deletePointers();
    /**
     * Method for deleting geometry pointer instance. Is called in
     * deletePointers() and in CreateXXXGeo() methods.
     */
    void deleteGeometryPointer();
    /**
     * Method for deleting scenario pointer instance. Is called in
     * deletePointers() and in CreateXXXGeo() methods.
     */
    void deleteFluidScenarioPointer();

    /**
     * Method for creating a default box (and saving it in _geometry).
     *
     * We call createAndSaveHexahedron() with default DEFAULT_BOX and
     * DEFAULT_OFFSET as parameters.
     *
     * @see createAndSaveHexahedron()
     */
    void createAndSaveDefaultHexahedron();

    /**
     * Method for creating a box (and saving it in _geometry).
     *
     * deleteGeometryPointer() is called to avoid memory leaks.
     *
     * @param dimensions Size of the box to be created.
     * @param origin     Origin of the box to be created.
     * @param hMin       (Optional) minimum mesh size.
     * @param hMax       (Optional) maximum mesh size.
     * @param velocity   Initial velocity of the box to be created.
     *
     * @see createAndSaveDefaultHexahedron()
     */
    void createAndSaveHexahedron(
        const Vector dimensions,
        const Vector origin,
        const Vector hMin=DEFAULT_MESHSIZE,
        const Vector hMax=DEFAULT_MESHSIZE,
        const Vector velocity = 0.0
    );

    /**
     * Method for creating a box intersected with a sphere (and saving it in
     * _geometry).
     *
     * The sphere is inverted to represent an obstacle. It gets the default base
     * number (0) plus 6.
     *
     * deleteGeometryPointer() is called to avoid memory leaks.
     *
     * @param boxDimensions    Size of the box to be created.
     * @param boxOrigin        Origin of the box to be created.
     * @param sphereOrigin     Origin of the sphere to be created.
     * @param sphereRadius     Radius of the sphere to be created.
     * @param hMin             (Optional) minimum mesh size.
     * @param hMax             (Optional) maximum mesh size.
     * @param velocity         Initial velocity of the box to be created.
     *
     * @see createAndSaveDefaultHexahedron()
     */
    void createAndSaveHexahedronAndSphere(
        const Vector boxDimensions,
        const Vector boxOrigin,
        const Vector sphereOrigin,
        const double sphereRadius,
        const Vector hMin     = DEFAULT_MESHSIZE,
        const Vector hMax     = DEFAULT_MESHSIZE,
        const Vector velocity = 0.0
    );

#if defined(ComponentPrecice)
    /**
     * Method for creating the handle to Precice.
     *
     * @param couplingConfigFilename Path to Precice configuration xml-file.
     */
    void createPreciceHandle(const std::string& couplingConfigFilename);
#endif // ComponentPrecice

    /**
     * Method for creating a driven cavity (and saving it in _fluidScenario).
     *
     * @param lidVelocity Value of the lid velocity.
     */
    void createAndSaveDrivenCavityScenario(
        const double lidVelocity
    );

    /**
     * \brief Method for creating a channel (and saving it in _fluidScenario)
     *        that uses velocity inlet BC.
     *
     * @param inletDimensions   Inlet Dimensions of the channel.
     * @param inletOffset       Inlet offset of the channel.
     * @param meanInletVelocity Mean inlet velocity.
     * @param useInletVelocityInWholeChannel Whether or not to set inlet vel. in
     *                                       whole channel (often false).
     */
    void createAndSaveChannelScenario(
        const Vector& inletDimensions,
        const Vector& inletOffset,
        const double& meanInletVelocity,
        const bool    useInletVelocityInWholeChannel
    );
    /**
     * \brief Method for creating a channel (and saving it in _fluidScenario)
     *        that uses pressure BC (eventually periodic).
     *
     * @param inletDimensions   Inlet Dimensions of the channel.
     * @param inletOffset       Inlet offset of the channel.
     * @param pInlet            Inlet pressure.
     * @param pOutlet           Outlet pressure.
     * @param useInletVelocityInWholeChannel Whether or not to set inlet vel. in
     *                                       whole channel (often false).
     * @param meanInitVelocity  Mean init velocity.
     * @param usePeriodicBC     Flag for usage of periodic BC.
     */
    void createAndSaveChannelWithPressureBCScenario(
        const Vector& inletDimensions,
        const Vector& inletOffset,
        const double& pInlet,
        const double& pOutlet,
        const bool    useInletVelocityInWholeChannel,
        const double& meanInitVelocity,
        const bool    usePeriodicBC
    );
    /**
     * \brief Method for creating a channel with slip walls (and saving it in
     *        _fluidScenario) that uses velocity inlet BC.
     *
     * @param inletDimensions   Inlet Dimensions of the channel.
     * @param inletOffset       Inlet offset of the channel.
     * @param meanInletVelocity Mean inlet velocity.
     * @param useInletVelocityInWholeChannel Whether or not to set inlet vel. in
     *                                       whole channel (often false).
     */
    void createAndSaveChannelWithSlipWallsScenario(
        const Vector& inletDimensions,
        const Vector& inletOffset,
        const double& meanInletVelocity,
        const bool    useInletVelocityInWholeChannel
    );
    /**
     * \brief Method for creating a channel with slip walls (and saving it in
     *        _fluidScenario) that uses pressure BC (eventually periodic).
     *
     * @param inletDimensions   Inlet Dimensions of the channel.
     * @param inletOffset       Inlet offset of the channel.
     * @param pInlet            Inlet pressure.
     * @param pOutlet           Outlet pressure.
     * @param useInletVelocityInWholeChannel Whether or not to set inlet vel. in
     *                                       whole channel (often false).
     * @param meanInitVelocity  Mean init velocity.
     * @param usePeriodicBC     Flag for usage of periodic BC.
     */
    void createAndSaveChannelWithSlipWallsPBCScenario(
        const Vector& inletDimensions,
        const Vector& inletOffset,
        const double& pInlet,
        const double& pOutlet,
        const bool    useInletVelocityInWholeChannel,
        const double& meanInitVelocity,
        const bool    usePeriodicBC
    );

    /**
     * \brief Method for creating a turublent channel.
     *
     * @param inletDimensions   Inlet Dimensions of the channel.
     * @param inletOffset       Inlet offset of the channel.
     * @param pInlet            Inlet pressure.
     * @param pOutlet           Outlet pressure.
     * @param useInletVelocityInWholeChannel Whether or not to set inlet vel. in
     *                                       whole channel (often false).
     * @param meanInitVelocity  Mean init velocity.
     * @param usePeriodicBC     Flag for usage of periodic BC.
     */
    void createAndSaveTurbulentChannel(
        const Vector& inletDimensions,
        const Vector& inletOffset,
        const double& pInlet,
        const double& pOutlet,
        const bool    useInletVelocityInWholeChannel,
        const double& meanInitVelocity,
        const bool    usePeriodicBC
    );

    /**
     * Method to create a default drift ratchet in a unit square.
     *
     * Here, we create not only the scenario but also the geometry.
     */
    void createAndSaveDefaultDriftRatchet(
        const double  inletRadius,
        const Vector  inletOffset,
        const double  meanInletVelocity
    );

    /**
     * Method to create a default step in a unit square.
     *
     * Here, we create not only the scenario but also the geometry.
     */
    void createAndSaveDefaultStep(
        const Vector inletDimensions,
        const Vector inletOffset,
        const double meanInletVelocity,
        const bool   usePBC = false,
        const bool   useInletVelocityInWholeChannel = false,
        const double pInlet = 0.0,
        const double pOutlet = 0.0
    );

    /**
     * Method to create a default step in a unit square.
     *
     * Here, we create not only the scenario but also the geometry.
     */
    void createAndSaveDefaultTurbulentChannel(
        const double meanInletVelocity,
        const bool   useInletVelocityInWholeChannel,
        const double pInlet,
        const double pOutlet
    );

#if defined(ComponentGeometry)
    /**
     * \brief Creation method for trivialgrid driven cavity scenario adapter on
     *        the unit square/cube.
     *
     * This method simply calls createTGScenarioAdapter_BoxDC() with default
     * parameters. If one does not specify any lidVelocity, DEFAULT_VELOCITY is
     * used.
     *
     * @param lidVelocity (optional) Lid velocity of the driven cavity.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_UnitCubeDC(
        const double lidVelocity = DEFAULT_VELOCITY
    );

    /**
     * \brief Creation method for trivialgrid driven cavity scenario adapter on
     *        a specified box.
     *
     * If one does not specify any lidVelocity, DEFAULT_VELOCITY is used.
     *
     * @param boxDimensions Vector of box dimensions
     * @param origin        Vector of box origin (offset).
     * @param lidVelocity   (optional) Lid velocity of the driven cavity.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_BoxDC(
        const Vector boxDimensions,
        const Vector origin,
        const double lidVelocity = DEFAULT_VELOCITY
    );

    /**
     * \brief Creation method for trivialgrid circle flow scenario adapter on
     *        the unit square/cube.
     *
     * This method simply calls createTGScenarioAdapter_BoxDC() with default
     * parameters. If one does not specify any lidVelocity, DEFAULT_VELOCITY is
     * used.
     *
     * @param lidVelocity (optional) Lid velocity of the driven cavity.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_UnitCubeCircleFlow();


    /**
     * \brief Creation method for trivialgrid free channel scenario adapter on
     *        the unit square/cube with inlet velocity prescribed.
     *
     * This method is realised via a call of
     * createTGScenarioAdapter_BoxChannel() with default parameters for the box.
     * If one does not specify any inletVelocity, DEFAULT_VELOCITY is used.
     *
     * @param inletVelocity (optional) Inlet velocity of the channel.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_UnitCubeChannel(
        const double inletVelocity = DEFAULT_VELOCITY
    );
    /**
     * \brief Creation method for trivialgrid free channel (with slip walls)
     *        scenario adapter on the unit square/cube with inlet velocity
     *        prescribed.
     *
     * @param inletVelocity (optional) Inlet velocity of the channel.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_UnitCubeChannelWithSlipWalls(
        const double inletVelocity = DEFAULT_VELOCITY
    );
    /**
     * \brief Creation method for trivialgrid slip channel scenario adapter on
     *        the unit square/cube with pressure boundary conditions (pBC).
     *
     * The parameters useInletVelocityInWholeChannel and meanInitVelocity are
     * optional for usage of init velocity in interior part of the channel.
     *
     * @param pInlet           Desired inlet pressure.
     * @param pOutlet          Desired outlet pressure.
     * @param useInletVelocityInWholeChannel (Optional) Flag for init velocity
     *                                       in whole channel
     * @param meanInitVelocity (Optional) desired (mean) init velocity on
     *                         interior of fluid.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_UnitCubeChannelWithSlipWallsPBC(
        const double pInlet,
        const double pOutlet,
        const bool   useInletVelocityInWholeChannel = false,
        const double meanInitVelocity = 0.0
    );

    /**
     * \brief Creation method for trivialgrid free channel scenario adapter on
     *        the unit square/cube with pressure boundary conditions (pBC).
     *
     * The parameters useInletVelocityInWholeChannel and meanInitVelocity are
     * optional for usage of init velocity in interior part of the channel.
     *
     * @param pInlet           Desired inlet pressure.
     * @param pOutlet          Desired outlet pressure.
     * @param useInletVelocityInWholeChannel (Optional) Flag for init velocity
     *                                       in whole channel
     * @param meanInitVelocity (Optional) desired (mean) init velocity on
     *                         interior of fluid.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_UnitCubeChannelPBC(
        const double pInlet,
        const double pOutlet,
        const bool   useInletVelocityInWholeChannel = false,
        const double meanInitVelocity = 0.0
    );
    /**
     * \brief Creation method for trivialgrid free channel scenario adapter on
     *        the unit square/cube with periodic boundary conditions (needing
     *        pBC).
     *
     * The parameters useInletVelocityInWholeChannel and meanInitVelocity are
     * optional for usage of init velocity in interior part of the channel.
     *
     * @param pInlet           Desired inlet pressure.
     * @param pOutlet          Desired outlet pressure.
     * @param useInletVelocityInWholeChannel (Optional) Flag for init velocity
     *                                       in whole channel
     * @param meanInitVelocity (Optional) desired (mean) init velocity on
     *                         interior of fluid.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_UnitCubeChannelPeriodicBC(
        const double pInlet,
        const double pOutlet,
        const bool   useInletVelocityInWholeChannel = false,
        const double meanInitVelocity = 0.0
    );

#endif // defined(ComponentGeometry)

    /**
     * \brief Creation method for trivialgrid free channel scenario adapter on
     *        a specified box.
     *
     * This method is realised via a call of
     * createTGScenarioAdapter_BoxChannelWithInlet() with inletOffset==origin
     * and a modified boxDimensions-Vector as inletDimensions.
     * If one does not specify any inletVelocity, DEFAULT_VELOCITY is used.
     *
     * @param boxDimensions Vector of box dimensions
     * @param origin        Vector of box origin (offset).
     * @param inletVelocity (optional) Inlet velocity of the channel.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
//#if defined(ComponentGeometry)
//    TrivialgridGeometryHandle2FluidScenarioAdapter
//#else
//    TrivialgridPreCICEHandle2FluidScenarioAdapter
//#endif
//    createTGScenarioAdapter_BoxChannel(
//        const Vector boxDimensions,
//        const Vector origin,
//        const double inletVelocity = DEFAULT_VELOCITY
//    );
    /**
     * \brief Creation method for trivialgrid free channel scenario adapter on
     *        a specified box with a separate inlet.
     *
     * If one does not specify any inletVelocity, DEFAULT_VELOCITY is used.
     *
     * @param boxDimensions   Vector of box dimensions.
     * @param origin          Vector of box origin (offset).
     * @param inletDimensions Vector of inlet dimensions.
     * @param inletOffset     Vector of inlet origin (offset).
     * @param inletVelocity   (optional) Inlet velocity of the channel.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
#if defined(ComponentGeometry)
    TrivialgridGeometryHandle2FluidScenarioAdapter
#else
//    TrivialgridPreCICEHandle2FluidScenarioAdapter
#endif
//    createTGScenarioAdapter_BoxChannelWithInlet(
//        const Vector boxDimensions,
//        const Vector boxOrigin,
//        const Vector inletDimensions,
//        const Vector inletOffset,
//        const double inletVelocity = DEFAULT_VELOCITY
//    );

#if defined(ComponentGeometry)
    /**
     * \brief Creation method for trivialgrid sphere in channel scenario
     *        adapter on a specified box with specified inlet velocity.
     *
     * If one does not specify any inletVelocity, DEFAULT_VELOCITY is used.
     *
     * @param boxDimensions Vector of box dimensions.
     * @param boxOrigin     Vector of box origin (offset).
     * @param sphereCenter  Vector of the center of the sphere.
     * @param sphereRadius  Radius of the sphere.
     * @param inletVelocity (optional) Inlet velocity of the channel.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_SphereInChannel(
        const Vector boxDimensions,
        const Vector boxOrigin,
        const Vector sphereCenter,
        const double sphereRadius,
        const double inletVelocity = DEFAULT_VELOCITY
    );

    /**
     * \brief Creation method for the adaptive grid sphere in channel
     *        scenario adapter on a specified box with specified inlet
     *        velocity.
     *
     * If one does not specify any inletVelocity, DEFAULT_VELOCITY is used.
     *
     * @param boxDimensions Vector of box dimensions.
     * @param boxOrigin     Vector of box origin (offset).
     * @param sphereCenter  Vector of the center of the sphere.
     * @param sphereRadius  Radius of the sphere.
     * @param inletVelocity (optional) Inlet velocity of the channel.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    GridGeometryHandle2FluidScenarioAdapter createGridScenarioAdapter_SphereInChannel(
        const Vector boxDimensions,
        const Vector boxOrigin,
        const Vector sphereCenter,
        const double sphereRadius,
        const double inletVelocity = DEFAULT_VELOCITY
    );

    /**
     * \brief Creation method for a trivialgrid box in channel
     *        scenario adapter on a specified box-shaped channel with specified inlet
     *        velocity.
     *
     * If one does not specify any inletVelocity, DEFAULT_VELOCITY is used.
     *
     * @param channelDimensions Vector of channel dimensions.
     * @param channelOrigin     Vector of channel origin (offset).
     * @param obstacleOffset  Vector of the obstacle's offset.
     * @param obstacleDimensions Vector of obstacle's dimensions.
     * @param obstacleVelocity Vector of obstacle's translational velocity.
     * @param inletVelocity (optional) Inlet velocity of the channel.
     *
     * @return Created instance of the corresponding scenario adapter.
     */
    TrivialgridGeometryHandle2FluidScenarioAdapter createTGScenarioAdapter_BoxInChannel(
        const Vector channelDimensions,
        const Vector channelOrigin,
        const Vector obstacleOffset,
        const double obstacleDimensions,
        const Vector obstacleVelocity,
        const double inletVelocity = DEFAULT_VELOCITY
    );


#endif // defined(ComponentGeometry)
  public:
    /**
     * Constructor setting test name in base test (TestCase).
     *
     * @param testCaseName Name of the test case. If a class is tested, this
     *                     string should equal the class name added the
     *                     namespace.
     */
    AbstractTestCaseWithScenario( const std::string& testCaseName );
    /**
     * Standard destructor
     */
    virtual ~AbstractTestCaseWithScenario();
    /**
     * Abstract method (for running the test case in subclasses).
     */
    virtual void run() = 0;
  };

#endif // _FLUID_SCENARIO_TEST_CASE_WITH_SCENARIO_H_
