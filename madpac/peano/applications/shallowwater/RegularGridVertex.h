// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_SHALLOWWATER_RegularGridVertex_H_
#define _PEANO_APPLICATIONS_SHALLOWWATER_RegularGridVertex_H_


#include "peano/applications/shallowwater/records/RegularGridVertex.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace shallowwater { 
      class RegularGridVertex; 
}
}
}


/**
 * Blueprint for regular grid vertex.
 * 
 * This file has originally been created by RaPeP and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author RaPeP
 */


class peano::applications::shallowwater::RegularGridVertex: public peano::kernel::regulargrid::Vertex< peano::applications::shallowwater::records::RegularGridVertex > { 
  private: 
    typedef class peano::kernel::regulargrid::Vertex< peano::applications::shallowwater::records::RegularGridVertex >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    RegularGridVertex();

    /**
     * Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it. It is kind of a copy constructor that converts an object which 
     * comprises solely persistent attributes into a full attribute. This very 
     * functionality is implemented within the super type, i.e. this constructor 
     * has to invoke the correponsing super type's constructor and not the super 
     * type standard constructor.
     */
    RegularGridVertex(const Base::PersistentVertex& argument);
    




    #ifdef Parallel
    void mergeWithNeighbour(const RegularGridVertex& neighbour, int fromRank);

    void prepareSendToNeighbour();
    #endif 


    void init();
    /**
     * Update the vertex with cell data
     */
    static void updateWithCellData(double heightSeabed, double heightWater, double momentumX, double momentumY, const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices);

    /**
     * Return the height update for the corresponding cell.
     */
    static double getHeightWaterUpdate(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices);

    /**
     * Return the momentum update in x-direction for the corresponding cell.
     */
    static double getMomentumXUpdate(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices);

    /**
     * Return the momentum update in y-direction for the corresponding cell.
     */
    static double getMomentumYUpdate(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices);

    /**
     * Calculate fluctuations for the given vertex.
     *
     * This method is called by touchVertexLastTime, so the given values on the edges are up to date.
     * Please note that edges are mapped to vertices in our implementation (see [4] chapter 4.1 for details).
     *
     * We proceed in assuming a Riemann Problem at the Edges. In the current implementation there is only one Solver avaiable.
     * We do a so called f-wave decomposition.
     *
     * The original implementation can be found within the Clawpack-framework (http://www.clawpack.org). More precisely in the GeoClaw plugin.
     * Please check the corresponding fortran-files. Most of the steps done in in calculateFluctuations, solveRiemannProblem and solveFWave were taken over.
     *
     *
     * Most of the code is well described in the following paper:
     *
     * [1]
     * A WAVE PROPAGATION METHOD FOR CONSERVATION LAWS AND BALANCE LAWS WITH SPATIALLY VARYING
     * FLUX FUNCTIONS∗ DEREK S. BALE†, RANDALL J. LEVEQUE†, SORIN MITRAN†, AND
     * JAMES A. ROSSMANITH†
     *
     * SIAM J. SCI. COMPUT.
     * Vol. 24, No. 3, pp. 955–978
     *
     * Additional information can be found here:
     *
     * [2]
     * R. J. LeVeque. Finite Volume Methods For Hyperbolic Problems. Cambridge University Press, 2002.
     *
     *
     * [3]
     * Finite Volume Methods and Adaptive Refinement for Tsunami Propagation and Inundation, Dissertation, David L. George
     *
     * [4]
     * Finite-Volumen Tsunami-Simulation im Peano-Framework, Diploma Thesis, Alexander Breuer
     *
     * By interest you can check the source code (calculateFluctuations, solveRiemannProblem, solveFWave) too,
     * as we provide additional notes, where you can find the particular region in literature.
     */
    void calculateFluctuations(const tarch::la::Vector<DIMENSIONS,double>&  x);

    /**
     * Calculate fluctuations in one single direction. More or less a 1-D Problem (note the transverse waves!)
     */
    void calculateFluctuationsInOneDirection(double hL, double hR, double huL, double huR, double hvL, double hvR, double bL, double bR, double drytol, double g, const tarch::la::Vector<DIMENSIONS,double>&  x, int direction);

    /**
     * This method handles with most of the pre-processing steps before the pure f-wave decomposition is applied:
     */
    void solveRiemannProblem(double hL, double hR, double huL, double huR, double hvL, double hvR, double bL, double bR, double drytol, double g, double** s, double*** fwave);

    /**
     * Pure f-wave decomposition
     */
    void solveFWave(int meqn, int mwaves, double hL, double hR, double huL, double huR, double hvL, double hvR, double bL, double bR, double uL, double uR, double vL, double vR, double phiL, double phiR, double s1, double s2, double drytol, double g, double* sw, double** fw);

};


#endif
