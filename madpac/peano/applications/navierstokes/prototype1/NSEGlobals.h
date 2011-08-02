#ifndef _NSE_NSE_GLOBALS
#define _NSE_NSE_GLOBALS


#include "peano/utils/Globals.h"
#include "tarch/logging/Log.h"
//#include "tarch/la/Utilities.h"
#include "tarch/la/Vector.h"
#include "tarch/la/DynamicVector.h"
#include "tarch/la/Matrix.h"
#include "tarch/la/DynamicMatrix.h"
#include <iostream>


/**
 * Defines the number of DoF entries for enhanced div-free elements:
 * VERTEX_NUMBER_OF_EDGE_DOFS (for additional flux entries on edge centers) plus
 * DIMENSIONS (for standard velocity data on vertex locations).
 */
#define VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM (VERTEX_NUMBER_OF_EDGE_DOFS + DIMENSIONS)


/**
 * @todo check refactoring: remove Vector and euqals() etc. below.
 */
typedef tarch::la::Vector<DIMENSIONS,double> Vector;
typedef tarch::la::Vector<DIMENSIONS,int> IntVector;



namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        /**
         * Represents the type of the used elements.
         * We use this to distinguish between the divergence-free and the bilinear elements as
         * long as they use the same vertex/cell-classes.
         */
        enum ElementType {
          /**
           * Dlinear elements
           */
          Dlinear,
          /**
           * Divergence free elements.
           */
          DivergenceFree,
          /**
           * Enhanced divergence free elements.
           */
          EnhancedDivergenceFree,
          /**
           * Undefined element type.
           */
          ELEMENT_TYPE_UNDEF
        };


        /**
         * Represents the type of a vertex.
         */
        enum FluidVertexType {
          /**
           * Inner fluid vertex with no boundary edge touching.
           */
          INNER,
          /**
           * Fluid vertex on a Dirichlet boundary part.
           */
          DIRICHLET,
          /**
           * Fluid vertex on a Neumann boundary part.
           */
          NEUMANN,
          /**
           * Fluid vertex on a mixed boundary part (Dirichlet and Neumann for
           * different components of the velocities).
           */
          MIXED_DIRICHLET_NEUMANN,
          /**
           * Fluid vertex on a periodic boundary part. Newly introduced for peano
           * periodic BC. BoundaryType holds specific types of periodic nodes.
           */
          PERIODIC,
          /**
           * Fluid vertex on an outer position (should not occur in peano grid but
           * may occur in trivialgrid).
           * The individual setup has to be done by the BoundaryType.
           */
          OUTER,
          /**
           * Undefined fluid vertex type. This is necessary for hanging nodes,
           * because they don't get any in /out information from the scenario.
           */
          UNDEF
        };

        /**
         * Enumeration for boundary type.
         */
        enum BoundaryType {
          /**
           * Security number (for init only). This may be checked via assertions etc.
           */
          BOUNDARY_TYPE_UNDEF,
          /**
           * Unique number of all inflow boundaries. Also used for periodic
           * x-direction boundaries.
           */
          INFLOW,
          /**
           * Unique number of all outflow boundaries. Also used for periodic
           * x-direction boundaries.
           */
          OUTFLOW,
          /**
           * Unique number of the "lid" (moving) boundary for DrivenCavity.
           */
          LID,
          /**
           * Unique number of all obstacle boundaries.
           */
          OBSTACLE,
          /**
           * Unique number of periodic left boundaries (as used in
           * FluidObstacleInTurbulentChannel for z-direction).
           */
          PERIODIC_LEFT,
          /**
           * Unique number of periodic right boundaries (as used in
           * FluidObstacleInTurbulentChannel for z-direction).
           */
          PERIODIC_RIGHT,
          /**
           * Unique number of periodic corner boundaries (as used in
           * FluidObstacleInTurbulentChannel for combined x- and z-direction).
           */
          PERIODIC_CORNER,
          /**
           * Unique number of all no-slip wall boundaries.
           */
          WALL,
          /**
           * Unique number of free-slip wall boundaries with wall normal to y-axis.
           */
          WALL_FREE_SLIP_Y,
          /**
           * Unique number of free-slip wall boundaries with wall normal to z-axis.
           */
          WALL_FREE_SLIP_Z,
          /**
           * Unique number of free-slip wall boundaries with wall normal to y- and
           * z-axis.
           */
          WALL_FREE_SLIP_YZ,
          /**
           * Unique number of free-slip/Neumann-inlet boundary corners.
           */
          WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN,
          /**
           * Unique number of free-slip/Neumann-outlet boundary corners.
           */
          WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN,
          /**
           * Unique number for ignored boundary nodes in 3D CircleFlow (coming from
           * sweep of 2D where we have no walls on bottom and top (z-direction).
           *
           * @todo check rauswerfen?
           */
          IGNORED
        };


        /**
         * Typedef for an integer vector of length @f$ 2^D @f$.
         *
         * Usage for example for holding the neighbouring cell numbers on a corner.
         *
         * @sa TwoPowDDoubleVector
         */
        typedef  tarch::la::Vector<TWO_POWER_D, int> TwoPowDVector;

        /**
         * Typedef for a double vector of length @f$ 2^D @f$.
         *
         * Usage for example for holding the weight of M of the neighbouring cells
         * on a corner. The local numbering is the same as for TwoPowDVector (int).
         *
         * @sa TwoPowDVector
         */
        typedef  tarch::la::Vector<TWO_POWER_D, double> TwoPowDDoubleVector;

  //      /**
  //       * The following methods are wrapped due to Vector above: using namespace
  //       * tarch::la is not usable. Hence wrapping.
  //       *
  //       * @todo check refactoring: remove Vector above and this stuff.
  //       */
  //      bool equals(  double lhs, double rhs, double tolerance = tarch::la::NUMERICAL_ZERO_DIFFERENCE) {
  //      //bool equals(  double lhs, double rhs) {
  //        return tarch::la::equals(lhs, rhs);
  //      }
  //      bool smaller (double lhs, double rhs, double tolerance = tarch::la::NUMERICAL_ZERO_DIFFERENCE) {
  //      //bool smaller (double lhs, double rhs) {
  //        return tarch::la::smaller(lhs, rhs);
  //      }
  //      bool greater (double lhs, double rhs, double tolerance = tarch::la::NUMERICAL_ZERO_DIFFERENCE) {
  //      //bool greater (double lhs, double rhs) {
  //        return tarch::la::greater(lhs, rhs);
  //      }
      }
    }
	}
}

#endif
