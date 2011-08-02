// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_RegularGridFluidVertexEnhancedDivFreeEulerExplicit_H_ 
#define _PEANO_APPLICATIONS_NAVIERSTOKES_RegularGridFluidVertexEnhancedDivFreeEulerExplicit_H_


#include "peano/applications/navierstokes/prototype1/records/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 {
        class RegularGridFluidVertexEnhancedDivFreeEulerExplicit;
      }
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


class peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit: public peano::kernel::regulargrid::Vertex< peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit > { 
  private: 
    typedef class peano::kernel::regulargrid::Vertex< peano::applications::navierstokes::prototype1::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit >  Base;

    /**
     * Weighting factor 1/sqrt(2) for rotation of vectors in 45 degree axes.
     */
    static const double _oneOverSqrt2;

    /**
     * L2h norm of u. Used for relative difference measurement.
     *
     * This member holds the accumulated squared contributions. The overall
     * square root is drawn in the corresponding getter.
     */
    static double _uL2h;
    /**
     * Maximum norm of u. Used for relative difference measurement.
     */
    static double _uMax;
    /**
     * Current improvement of u in L2h norm (@f$ \| u_{old} - u_{new}\|_{L2h} @f$).
     *
     * This member holds the accumulated squared contributions. The overall
     * square root is drawn in the corresponding getter.
     *
     * \warning The improvement in calculateUMeasurement() is currently only
     *            calculated in the Euler update. Exterior settings of u are
     *            NOT considered!
     */
    static double _uImprovementL2h;
    /**
     * Current improvement of u in maximum norm (@f$ max | u_{old} - u_{new}| @f$).
     *
     * \warning The improvement in calculateUMeasurement() is currently only
     *            calculated in the Euler update. Exterior settings of u are
     *            NOT considered!
     */
    static double _uImprovementMax;
    /**
     * Maximum absolute value of velocities in each dimension. Used for variable
     * time step criterion.
     */
    static Vector _uMaxPerDimension;

    /**
     * This method calculates the data for the velocity measurement when it is
     * updated.
     *
     * For the variable time step size criterion, we always check if the
     * absolute value of the new velocity in each dimension is greater than the
     * currently saved one (and update that if necessary).
     *
     * For the measurement of u, we use the Vector of the velocity update in
     * each dimension. The squared length of this vector is saved in
     * velocityImprovementLengthSquared and used for the maximum norm and the
     * discrete L2h norm of the velocity improvement. For 2D it has the
     * following form:
     * \f{eqnarray*}
     *   \|du\|_{max} &=& \max |du_i| = \max \sqrt{(du_i(0)^2 + du_i(1)^2)} \\
     *   \|du\|^2_{L2h} &=& \sum_i h_i(0)\cdot h_i(1) \cdot (du_i(0)^2 + du_i(1)^2).
     * \f}
     *
     * In 3D it looks like this:
     * \f{eqnarray*}
     *   \|du\|_{max} &=& \max |du_i| = \max \sqrt{(du_i(0)^2 + du_i(1)^2 + du_i(2)^2)} \\
     *   \|du\|^2_{L2h} &=& \sum_i h_i(0)\cdot h_i(1)\cdot h_i(2) \cdot (du_i(0)^2 + du_i(1)^2 + du_i(2)^2).
     * \f}
     *
     * For the L2h norm, we have to use a mesh size h. for regular refined parts
     * of the grid, this is clear. For adaptive situations (i.e. father nodes of
     * hanging nodes), h (automatically coming from the grid) corresponds to the
     * correct coarser mesh size. For the norm, h is used in order to calculate
     * the volume of one corresponding grid cell. This done in dD via a loop.
     *
     * @param velocityImprovement Vector of difference between old and new
     *                            velocity values.
     * @param newVelocity         Vector of new velocity values.
     * @param h                   Vector of current mesh size.
     */
    void calculateUMeasurement(
      const Vector& velocityImprovement,
      const Vector& newVelocity,
      const Vector& h
    );

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    RegularGridFluidVertexEnhancedDivFreeEulerExplicit();

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
    RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const Base::PersistentVertex& argument);
    
    static tarch::la::Vector<TWO_POWER_D,double>  readA(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices);

    /**
     * This routine resets the values of A, F, gradP, u to zero.
     *
     * It is calling all the single reset routines.
     *
     * Possible usage: flash of data between two independent fluid runs
     *                 on the same grid.
     */
    virtual void resetAllVariables();

    /**
     * This routine resets all velocity values of the current vertex to zero.
     */
    void resetVelocityValues();
    /**
     * This routine adds a (Vector) value to the velocities on vertex locations
     * only.
     * It is necessary for the interpolation of hanging nodes.
     *
     * @param addValue Vector reference for adding the value to U on the node.
     */
    void addValueToVelocities(const Vector& addValue);

    /**
     * This routine adds a vector to gradP on vertex locations only.
     *
     * @param delta desired value to be added to gradP1 on the current vertex.
     */
    void addValueToGradP(Vector delta);
    /**
     * Method for adding the gradP value from an array. Is used to avoid too
     * much knowledge in adapters.
     *
     * @todo raus?
     *
     * @param idx        Local index of the current node.
     * @param gradPArray Array of gradP values to be added.
     */
    void addValueToGradPViaArray(
      const int idx,
      double    gradPArray[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT]
    );
    /**
     * This routine resets all gradP values.
     */
    void resetPressureGradients();

    #ifdef Parallel
    /**
     * This method resets all gradPUpdate values.
     */
    void resetGradPUpdate();
    /**
     * This routine adds a vector to gradPUpdate on vertex locations only. GradPUpdate
     * ist the update performed on the pressure gradient during one Gauss-Seidel iteration.
     *
     * @param delta desired value to be added to gradPUpdate on the current vertex.
     */
    void addValueToGradPUpdate(tarch::la::Vector<DIMENSIONS,double>& deltaUpdate);
    /**
     * Returns the current value of the gradPUpdate.
     */
    tarch::la::Vector<DIMENSIONS,double> getGradPUpdate() const;
    /**
     * Sets the current value of the gradPUpdate.
     */
    void setGradPUpdate(const tarch::la::Vector<DIMENSIONS,double>& newGradPUpdate);

    /**
     * Proxy for getting an edge gradPUpdate.
     *
     * @param idx Index of the DoF one wants to get gradP from (1=horiz, 2=vert).
     */
    double getGradPUpdateEdge(
      const int idx
    ) const;
    /**
     * Proxy for setting an edge gradPUpdate.
     *
     * @param idx      Index of the DoF one wants to set gradP (1=horiz, 2=vert).
     * @param newGradP New gradP value to be set.
     */
    void setGradPUpdateEdge(
      const int     idx,
      const double& newGradPUpdate
    );
    #endif

    /**
     * This routine adds a vector to F on vertex locations only.const Vector& h
     *
     * @param delta desired value for F1 on the current vertex.
     */
    void addValueToF(Vector delta);
    /**
     * This routine resets all F values.
     */
    void resetFValues();

    /**
     * This routine resets all force values.
     */
    void resetForceValues();

    /**
     * This routine returns the (private) value of the inverse (lumped) mass
     * matrix A on a vertex.
     *
     * It is checked via an assertion, if _A is (numerically) equal to zero. Thatconst Vector& h
     * should never be the case if any non-outer cell borders on the current vertex
     * and if calculateInverseA has been called.
     *
     * @return inverse mass matrix value on current vertex.
     */
    double getInverseA() const;
    /**
     * This routine adds a value to the (private) value of the
     * the mass matrix A on a vertex.
     * The lumped inverse of the mass matrix is returned by getInverseA()
     *
     * @see getInverseA()
     *
     * @param delta desired value to be added to A.
     */
    void addValueToA(double delta);

    /**
     * This routine sets the (private) value of the (lumped) mass
     * matrix A on a vertex to zero.
     *
     * @see getInverseA()
     */
    void resetA();

    /**
     * This method resets all measurement members for u (i.e. _uL2h, _uMax,
     * _uImprovementL2h, _uImprovementMax, _uMaxPerDimension).
     */
    static void resetMeasurementMembers();

    /**
     * This method returns the current value of u in the L2h norm.
     *
     * Since the accumulated values are a sum of squares, we have to take the
     * root of _uL2h.
     */
    static double getUL2h();

    /**
     * This method returns the current value of u in the maximum norm.
     */
    static double getUMax();

    /**
     * This method sets the current value of u in the maximum norm.
     */
    static void setUMax(double newUMax);

    /**
     * This method returns the improvement of u in L2h norm
     * (@f$ \| u_{old} - u_{new}\|_{L2h} @f$).
     *
     * Since the accumulated values are a sum of squares, we have to take the
     * root of _uImprovementL2h.
     */
    static double getUImprovementL2h();

    /**
     * This method returns the improvement of u in maximum norm
     * (@f$ \max |u_{old} - u_{new}| @f$).
     */
    static double getUImprovementMax();

    /**
     * This method returns maximum absolute values of the velocity field
     * separated in dimensions. Note that the values differ in general (even in
     * sum) from the one of getUMax().
     *
     * This method is needed for variable time step size computations.
     */
    static Vector getUMaxPerDimension();

    /**
     * This method sets the  maximum absolute values of the velocity field
     * separated in dimensions. Note that the values differ in general (even in
     * sum) from the one of getUMax().
     *
     * This method is needed for variable time step size computations.
     */
    static void setUMaxPerDimension(int d, double newUMaxPerDimensionD);

    /**
     * Proxy for getting the fluid vertex type.
     *
     * @return Type of the vertex in fluid way of thinking.
     */
    FluidVertexType getFluidVertexType() const;
    /**
     * Proxy for setting the fluid vertex type.
     *
     * @param fluidVertexType Type of vertex to be set
     */
    void setFluidVertexType(const FluidVertexType& fluidVertexType);

    /**
     * Proxy for getting the boundary part number (boundary type).
     *
     * @todo check name
     */
    BoundaryType getBoundaryType() const;
    /**
     * Proxy for setting the boundary part number.
     *
     * @param newBoundaryType New boundary type to be set.
     */
    void setBoundaryType(const BoundaryType& newBoundaryType);
    /**
     * Proxy for setting the boundary part number via a direct int.
     *
     * @param newBoundaryType New boundary number to be set.
     */
    void setBoundaryType(const int newBoundaryType);

    /**
     * Proxy for getting the velocities of the vertex location only.
     */
    tarch::la::Vector<DIMENSIONS,double> getU() const;
    /**
     * Proxy for setting the velocities.
     *
     * @param newU New velocity vector to be set.
     */
    void setU(const tarch::la::Vector<DIMENSIONS,double>& newU);
    /**
     * Proxy for getting an edge velocity.
     *
     * @param idx Index of the DoF one wants to get u from (1=horiz, 2=vert).
     */
    double getUEdge(
      const int idx
    ) const;
    /**
     * Proxy for setting an edge velocity.
     *
     * @param idx  Index of the DoF one wants to set u (1=horiz, 2=vert).
     * @param newU New velocity value to be set.
     */
    void setUEdge(
      const int     idx,
      const double& newU
    );

    /**
     * Proxy getting the pressure gradient of the vertex location only.
     */
    tarch::la::Vector<DIMENSIONS,double> getGradP() const;
    /**
     * Proxy for setting the complete pressure gradient of the vertex location
     * only.
     *
     * @param newGradP New pressure gradient vector to be set.
     *
     */
    void setGradP(const tarch::la::Vector<DIMENSIONS,double>& newGradP);
    /**
     * Proxy for setting one component dimension of the pressure gradient of the
     * vertex location only.
     *
     * @param componentNumber Component (dim) number where new value shall be
     *                        set.
     * @param newValue        New pressure gradient entry to be set.
     *
     */
    void setGradPComponent(
      const int     componentNumber,
      const double& newValue
    );
    /**
     * Proxy for getting an edge gradP.
     *
     * @param idx Index of the DoF one wants to get gradP from (1=horiz, 2=vert).
     */
    double getGradPEdge(
      const int idx
    ) const;
    /**
     * Proxy for setting an edge gradP.
     *
     * @param idx      Index of the DoF one wants to set gradP (1=horiz, 2=vert).
     * @param newGradP New gradP value to be set.
     */
    void setGradPEdge(
      const int     idx,
      const double& newGradP
    );

    /**
     * Proxy for getting F of the vertex location only.
     */
    Vector getF() const;
    /**
     * Proxy for setting F of the vertex location only.
     *
     * @param newF New F vector to be set.
     */
    void setF(const tarch::la::Vector<DIMENSIONS,double>& newF);
    /**
     * Proxy for getting an edge F.
     *
     * @param idx Index of the DoF one wants to get F from (1=horiz, 2=vert).
     */
    double getFEdge(
      const int idx
    ) const;
    /**
     * Proxy for setting an edge F.
     *
     * @param idx  Index of the DoF one wants to set F (1=horiz, 2=vert).
     * @param newF New F value to be set.
     */
    void setFEdge(
      const int     idx,
      const double& newF
    );

    /**
     * Proxy for getting the force Vector of the vertex location only.
     */
    tarch::la::Vector<DIMENSIONS,double> getForce() const;
    /**
     * Proxy for setting the force Vector of the vertex location only.
     *
     * @param newForce New Force vector to be set.
     */
    void setForce(const tarch::la::Vector<DIMENSIONS,double>& newForce);
      /**
     * Proxy for getting an edge force.
     *
     * @param idx Index of the DoF one wants to get force from (1=horiz, 2=vert).
     */
    double getForceEdge(
      const int idx
    ) const;
    /**
     * Proxy for setting an edge force.
     *
     * @param idx      Index of the DoF one wants to set force (1=horiz, 2=vert).
     * @param newForce New force value to be set.
     */
    void setForceEdge(
      const int     idx,
      const double& newForce
    );

    /**
     * Proxy for getting A.
     */
    double getA() const;
    /**
     * Proxy for setting A.
     *
     * @param newValue New value to be set.
     */
    void setA(double newValue);

    /**
     * Proxy for getting the velocity improvement that corresponds to the
     * current gradP and F.
     */
    Vector getVelocityDelta();
    /**
     * Proxy for setting the velocity improvement that corresponds to the
     * current gradP and F. This value is stored in the variable for the
     * force value.
     */
    void setVelocityDelta(Vector& velocityDelta);

    /**
     * Method for eliminating normal component of inputVector at slip walls.
     *
     * @todo check allgemeiner fuer mixed machen?
     */
    Vector removeNormalComponentsForSlipWall(
      const Vector& inputVector
    ) const;

    /**
     * Proxy method for detecting if the vertex holds a real degree of freedom.
     *
     * The return value is true for INNER, PERIODIC, NEUMANN, and
     * MIXED_DIRICHLET_NEUMANN vertices. It is false for OUTER, DIRICHLET, and
     * UNDEF vertices. Every other vertex type is throwing an assertion (not yet
     * supported);
     *
     * @return True if vertex holds a real DoF (inner, periodic, Neumann, mixed
     *         Dirichlet-Neumann).
     */
    bool isVertexHoldingARealDoF() const;


    /**
     * Getter to return length of dynamic vector used for this specific element.
     *
     * In this case: DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 4
     */
    static int getLengthOfDynamicVectorForFiniteElement();

    /**
     * @brief Method for rotating a vector by 45 degrees (pi/4 rad) in clockwise
     *        direction ("right").
     *
     * @param input Input vector to be rotated.
     *
     * @return Rotated output vector (new instance).
     */
    static Vector rotateClockwise(
      const Vector& input
    );
    /**
     * @brief Method for rotating a vector by 45 degrees (pi/4 rad) in
     *        counter-clockwise direction ("left").
     *
     * @param input Input vector to be rotated.
     *
     * @return Rotated output vector (new instance).
     */
    static Vector rotateCounterClockwise(
      const Vector& input
    );
    /**
     * @brief Coordinate transformation from the standard Cartesian to the
     *        new 45 representation.
     *
     * Method for rotating a vector by 45 degrees (pi/4 rad) in
     * counter-clockwise direction ("left") and flip y (to point to lower right).
     *
     * The inverse method to this one is this method itself (orthogonal)!.
     *
     * @param input Input vector to be rotated.
     *
     * @return Rotated output vector (new instance).
     */
    static Vector rotateCartesianTo45(
      const Vector& input
    );

    /**
     * Method for preparing the ode derivative for enhanced divergence free elements.
     *
     */
    void prepareODEDerivativeEnhancedDivFree(
      const double& updateTimeAccumulated,
      const Vector& h
    );

    /**
     * Method for preparing the ode derivative for d-linear elements.
     *
     */
    void prepareODEDerivativeDlinear(
      const double& updateTimeAccumulated,
      const Vector& h
    );

    /**
     * Method for handling internal time update for explicit Euler.
     *
     * For explicit, we just update ;-)
     * The update-formula is the following (done in the FluidVertexData):
     * @f$ u^{n+1} = u^n + tau \cdot A^{-1} \cdot (-F - \nabla p) @f$.
     *
     * @param updateTimeAccumulated  Time for accumulation.
     * @param h                      Mesh size vector for L2-measurement.
     */
    void handleODETimeUpdate(
      const double& updateTimeAccumulated,
      const Vector& h
    );

    /**
     * Merges a remote copy from a neighbouring computation node into this vertex.
     */
    void mergeA(
      const RegularGridFluidVertexEnhancedDivFreeEulerExplicit& remoteVertex
    );
    /**
     * Merges a remote copy from a neighbouring computation node into this vertex.
     */
    void mergeF(
        const RegularGridFluidVertexEnhancedDivFreeEulerExplicit& remoteVertex
    );

    #ifdef Parallel
    /**
     * Merges a remote copy from a neighbouring computation node into this vertex.
     */
    void mergeGradPUpdate(
      const RegularGridFluidVertexEnhancedDivFreeEulerExplicit& remoteVertex
    );
    #endif


    /**
     * Method to add values from a DynamicVector to F of all vertices.
     *
     * This is somehow the inverse method of
     * fillUpVelocityDynamicVectorFromVertices().
     *
     * Note that depending on the version of the grid, the array of vertices is
     * a different one (total array of all vertices in trivialgrid vs.
     * serialised 4x4 array in the adaptive case). This is no problem, as the
     * array of indices holds the valid indices in both cases (set up by the
     * trivialgrid or the adaptive grid adapters).
     *
     * @param vertices    Array of vertex instances.
     * @param enumerator  Enumerator to access vertices in locally correct order.
     * @param FDynVec     DynamicVector of F values to be added.
     */
    static void addValuesToFViaDynamicVector(
      RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
      const tarch::la::DynamicVector<double>&                FDynVec
    );
    /**
     * Method to retrieve additional data that is needed for further
     * computations belonging to gravity. Here it will return a dynamic
     * vector of size 1, because one typically needs no more information.
     * This method will be overwritten e.g. in the chemical component, where
     * one might need to have access to the temperature.
     *
     * Dummy method as in AbstractFluidVertex.
     *
     * @param vertices    Array of vertex instances.
     * @param enumerator  Enumerator to access vertices in locally correct order.
     */
    static tarch::la::DynamicVector<double> fillUpAdditionalGravityData(
      RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    /**
     * Method to fill up a DynamicVector of Velocities with data from vertices.
     *
     * Note that depending on the version of the grid, the array of vertices is
     * a different one (total array of all vertices in trivialgrid vs.
     * serialised 4x4 array in the adaptive case). This is no problem, as the
     * array of indices holds the valid indices in both cases (set up by the
     * trivialgrid or the adaptive grid adapters).
     *
     * The input corresponds to all vertices of a given cell. On each vertex,
     * one velocity vector with DIMENSIONS entries is located.
     *
     * This method is used in CalculateF::accumulateFValues() in order
     * to support different type of elements (containing different velocity DoF
     * numbers in the vertices).
     *
     * Note that the order of the entries is (for d-linear FEM DoF) the same as
     * for Jacobian stuff in implicit case (for N=NUMBER_OF_VERTICES_PER_ELEMENT
     * and 2D):
     * (u0, v0, u1, v1, ... uN, vN, uA, uB, vC, vD)
     * The ordering is as follows:
\code
     * 2---D---3
     * |       |
     * A       B
     * |       |
     * 0---C---1
\endcode
     *
     * This is somehow the inverse method of addValuesToFViaDynamicVector.
     *
     * @param vertices    Array of vertex instances.
     * @param enumerator  Enumerator to access vertices in locally correct order.
     *
     * @return Resulting DynamicVector of velocities (length=d*N).
     */
    static tarch::la::DynamicVector<double> fillUpVelocityDynamicVectorFromVertices(
        RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
        const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
        const peano::applications::navierstokes::prototype1::ElementType elementType
    );
    /**
     * Method to fill up a DynamicVector of F values with data from vertices.
     *
     * Identical to fillUpVelocityDynamicVectorFromVertices(), just using F
     * values.
     *
     * @param vertices    Array of vertex instances.
     * @param enumerator  Enumerator to access vertices in locally correct order.
     *
     * @return Resulting DynamicVector of F (length=d*N).
     */
    static tarch::la::DynamicVector<double> fillUpFDynamicVectorFromVertices(
        RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
        const peano::kernel::gridinterface::VertexEnumerator& enumerator
    );
    /**
     * Method to fill up a DynamicVector of A^-1 values with data from vertices.
     *
     * In this case, the length of the DynamicVector is
     * NUMBER_OF_VERTICES_PER_ELEMENT, and the values are just inserted one
     * after the other (i.e. [invA0, invA1, ..., invA3] in 2D).
     *
     * @param vertices    Array of vertex instances.
     * @param enumerator  Enumerator to access vertices in locally correct order.
     *
     * @return Resulting DynamicVector of F (length=d*N).
     */
    static tarch::la::DynamicVector<double> fillUpInverseADynamicVectorFromVertices(
        RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
        const peano::kernel::gridinterface::VertexEnumerator& enumerator
    );
};


#endif
