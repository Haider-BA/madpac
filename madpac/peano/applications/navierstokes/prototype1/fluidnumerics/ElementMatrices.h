#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ELEMENTMATRICES_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ELEMENTMATRICES_H_

#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"
/**
 * This file holds the pure entries of the element matrices.
 *
 * The factors like h or eta/rho have to be considered when applying the matrices!
 *
 * It has been too complicated to generate a workaround just to get eta/rho as an additional
 * factor for D1. That's why this factor has to be provided manually for calculateF().
 *
 * Up to now, only 2D is supported.
 *
 * @author Tobias Neckel
 */


/**
 * The preprocessor variable _PEANO_FLUID_SUPPORTED identifies whether there is
 * a fluid code for this dimension
 */
#ifdef Dim2
  #define _PEANO_FLUID_SUPPORTED
#endif
#ifdef Dim3
  #define _PEANO_FLUID_SUPPORTED
#endif

/**
 * Matrix (vector 1 x DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT) for the
 * discretisation of divergence in bilinear and div-free case.
 * This matrix been integrated using the maple worksheet
 * FluidElementMatrices_interactiveIntegration.mw for interactive integration.
 *
 * The enumeration of the nodes of a cell is in the peano syntax (dimension
 * ordered).
 * The entries correspond to manual calculations via the boundaries of a cell.
 *
 * A negative sign has to be used if one wants to get the physical pressure
 * gradient.
 *
 * !! 2D:
 * The first four entries are for x0-direction, the second four for x1-direction.
 * A factor of h has to be added when used.
 *
 * \warning Due to the changed element numbers in comparison to quickfluid/
 * stokes, we have to change entries in the matrices. The mapping is:
 *
 * Peano | quickfluid    Cartesian view (x left2right, y down2up) for Peano:
 * ------------------
 *  0    |   2                2 ----- 3
 *  1    |   3                |       |
 *  2    |   0                |       |
 *  3    |   1                0 ----- 1
 *
 * !! 3D:
 * M-Matrix for the 3D case.
 *
 * At the moment, we only implemented dLinear versions. A factor of h^2 has
 * to be added when used. We have to check div-free future versions.
 *
 * The first 8 entries are for x0-direction, the second 8 for x1 and the last 8
 * for x2-direction.
 *
 * @todo check how it looks like for 3D div-free?
 */
const double MDlinearElementMatrix[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT] =
  {
#ifdef Dim2
  	// quickfluid entries
  	// -1.0/2.0,  1.0/2.0, -1.0/2.0, 1.0/2.0, 1.0/2.0, 1.0/2.0, -1.0/2.0, -1.0/2.0
  	// peano entries
  	-1.0/2.0, 1.0/2.0, -1.0/2.0,  1.0/2.0,  -1.0/2.0, -1.0/2.0, 1.0/2.0, 1.0/2.0

#elif Dim3
    -1.0/4.0,  1.0/4.0, -1.0/4.0,  1.0/4.0, -1.0/4.0,  1.0/4.0, -1.0/4.0,  1.0/4.0,
    -1.0/4.0, -1.0/4.0,  1.0/4.0,  1.0/4.0, -1.0/4.0, -1.0/4.0,  1.0/4.0,  1.0/4.0,
    -1.0/4.0, -1.0/4.0, -1.0/4.0, -1.0/4.0,  1.0/4.0,  1.0/4.0,  1.0/4.0,  1.0/4.0,

#endif
  };



#ifdef Dim2
/**
 * Element mass matrix in 2D. Is currently used for nonlinear computations (in
 * Jacobian, e.g.).
 */
const double ElementMassMatrix[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT][DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT] =  {
{ 4.0/36.0, 2.0/36.0, 2.0/36.0, 1.0/36.0 ,      0.0,      0.0,      0.0,      0.0},
{ 2.0/36.0, 4.0/36.0, 1.0/36.0, 2.0/36.0 ,      0.0,      0.0,      0.0,      0.0},
{ 2.0/36.0, 1.0/36.0, 4.0/36.0, 2.0/36.0 ,      0.0,      0.0,      0.0,      0.0},
{ 1.0/36.0, 2.0/36.0, 2.0/36.0, 4.0/36.0 ,      0.0,      0.0,      0.0,      0.0},
{      0.0,      0.0,      0.0,      0.0 , 4.0/36.0, 2.0/36.0, 2.0/36.0, 1.0/36.0},
{      0.0,      0.0,      0.0,      0.0 , 2.0/36.0, 4.0/36.0, 1.0/36.0, 2.0/36.0},
{      0.0,      0.0,      0.0,      0.0 , 2.0/36.0, 1.0/36.0, 4.0/36.0, 2.0/36.0},
{      0.0,      0.0,      0.0,      0.0 , 1.0/36.0, 2.0/36.0, 2.0/36.0, 4.0/36.0}
};




   /**
   * @todo echte Massenmatrizen fuer bilinear und div-free fehlen noch.
   */
/*

% mass matrix for bilinear elements (without factor h^2)
A1_BILINEAR = 1.0/36 * [    [4, 2, 2, 1];
                            [2, 4, 1, 2];
                            [2, 1, 4, 2];
                            [1, 2, 2, 4] ];
A2_BILINEAR = zeros(4,4);

MATRIX_A_BILINEAR = [A1_BILINEAR, A2_BILINEAR;
                     A2_BILINEAR, A1_BILINEAR];


% mass matrix for Blanke elements (without factor h^2)
A1_BLANKE = 1.0/24 * [ [3, 1, 1, 1];
                       [1, 3, 1, 1];
                       [1, 1, 3, 1];
                       [1, 1, 1, 3] ];

A2_BLANKE = 1.0/24 * [ [-1, 0, 0, -1];
                       [0,  1, 1,  0];
                       [0,  1, 1,  0];
                       [-1, 0, 0, -1] ];

MATRIX_A_BLANKE = [A1_BLANKE, A2_BLANKE;
                   A2_BLANKE, A1_BLANKE];
*/


#elif Dim3


/**
 * Element mass matrix in 3D. Is currently used for nonlinear computations (in
 * Jacobian, e.g.).
 */
  const double ElementMassMatrix[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT][DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT] =  {
{ 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{ 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{ 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{ 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{ 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{ 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{ 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{ 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0, 2.0/216.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0, 4.0/216.0},
{       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0,       0.0, 4.0/216.0, 2.0/216.0, 1.0/216.0, 2.0/216.0, 4.0/216.0, 2.0/216.0, 4.0/216.0, 8.0/216.0}

  };

#endif // Dim2/Dim3

  namespace peano {
    namespace applications {
      namespace navierstokes {
        namespace prototype1 {
          namespace fluidnumerics {
            class ElementMatrices;
          }}}}}  // namespaces end


/**
 * Small class for element matrices add ons.
 *
 * This class has been introduced in order to encapsulate small function calls
 * (such as h-factor computation for M) in a central instance.
 *
 *  @author Tobias Neckel
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::ElementMatrices {
  public:
    /**
     * Standard constructor.
     *
     *
     *
     *
     *
     * Computation of the element mass matrix
     *
     * Let DIMENSIONS = 2.
     * Considering the following cell:
     *
     *\f{eqnarray*}
     *  &&  2 ----- 3    \\
     *  &&\left|\;\;\;\;\;\;\;\;\;\right|   \\
     *  &&\left|\;\;\;\;\;\;\;\;\;\right|   \\
     *  &&  0 ----- 1
     *\f}
     *
     * the element mass matrix has the following form
     *
     * \f$ A=(\left\langle \Phi _{i} , \Phi _{j} \right\rangle )_{0\leq i,j \leq 3} \f$
     *
     * with
     * \f$ \left\langle f(x),g(x) \right\rangle = \int_{\mathbb{R} ^ {2}} f(x)g(x) dx \f$
     *
     *
     * Those \f$ \Phi _{i} \f$ are the interpolation functions
     * from the linearisation of the velocities:
     *
     * \f$ u(x,t)\dot{=} \sum_{i=1}^{N} \Phi _{i}(x) u_{i}^{h} (t) \f$
     *
     * with \f$ u_{i}^{h} (t) = (u_{i}^{0} (t),u_{i}^{1} (t))^{t} \f$
     *
     *
     *
     * Those functions have the form:
     * (simple bilinear interpolation)
     *
     * \f$ \Phi_{i}(x)\;= \;\cdot \; \left\{
     *  \begin{array}{lr}
     *  \frac{x_{o}}{h_{o}}\frac{x_{1}}{h_{1}} & for \;x \in LU(i) \\
     *  (1-\frac{x_{o}}{h_{o}})\frac{x_{1}}{h_{1}} & for\; x \in RU(i) \\
     *  (1-\frac{x_{o}}{h_{o}})(1-\frac{x_{1}}{h_{1}})& for \;x \in RA(i) \\
     *  \frac{x_{o}}{h_{o}}(1-\frac{x_{1}}{h_{1}})& for\; x \in LA(i)
     * \end{array} \right. \f$
     *
     * with sitting on the vertex i the surrounding cells are called as following:
     *
     * \f{eqnarray*}
     * *-----*-----*    \\
     * \left| LA \;  \right| RA  \left|   \right. \\
     * *-----i-----*    \\
     * \left| LU  \; \right| RU  \left|   \right. \\
     * *-----*-----*
     * \f}
     *
     * please remark: those coordinates here are local coordinates of every cell
     * where the origin is always on the vertex with the local number 0.
     *
     * But this does not make any trouble as we will see later.
     *
     * So for the element mass matrix, we have to use the following computations:
     *
     * (use the substitution \f$ x_{i} = \frac{x_{i}}{h_{i}} \f$)
     *
     * \f$ \int_{0}^{1} x_{i}^{2} dx_{i} = \frac{1}{3} \f$
     *
     * \f$ \int_{0}^{1} x_{i}(1-x_{i})dx_{i} = \frac{1}{6} \f$
     *
     * \f$ \int_{0}^{1} (1-x_{i})^{2}dx_{i} = \frac{1}{3} \f$
     *
     *  and finally we get for \f$ u_{0} \f$:
     *
     *  (for all integrals the local coordinates fit perfectly together)
     *
     *  \f$ A_{element}^{'} \; = \; \frac{h_{0}h_{1}}{36} \; \left(
     *  \begin{array}{cccc}
     *  4 & 2 & 2 & 1\\
     *  2 & 4 & 1 & 2\\
     *  2 & 1 & 4 & 2\\
     *  1 & 2 & 2 & 4
     *  \end{array}
     *  \right)
     *  \f$
     *
     *  and for both components:
     *
     *  \f$ A_{element} \; = \; \left(
     *  \begin{array} {cc}
     *  A_{element}^{'} & 0\\
     *  0 & A_{element}^{'}
     *  \end{array}
     *  \right)
     *  \f$
     *
     * Now let's consider the case DIMENSIONS = 3.
     * This case differs not much from the first case.
     * Instead of bilinearisation we use trilinearisation.
     * The approach is similar.
     * The final solution is:
     *
     * \f$ A_{element}^{'} \; = \; \frac{h_{0}h_{1}h_{2}}{216} \; \left(
     *  \begin{array}{cccccccc}
     *  8 & 4 & 4 & 2 & 4 & 2 & 2 & 1\\
     *  4 & 8 & 2 & 4 & 2 & 4 & 1 & 2\\
     *  4 & 2 & 8 & 4 & 2 & 1 & 4 & 2\\
     *  2 & 4 & 4 & 8 & 1 & 2 & 2 & 4\\
     *  4 & 2 & 2 & 1 & 8 & 4 & 4 & 2\\
     *  2 & 4 & 1 & 2 & 4 & 8 & 2 & 4\\
     *  2 & 1 & 4 & 2 & 4 & 2 & 8 & 4\\
     *  1 & 2 & 2 & 4 & 2 & 4 & 4 & 8
     *  \end{array}
     *  \right)
     *  \f$
     *
     *  and for all components:
     *
     *  \f$ A_{element} \; = \; \left(
     *  \begin{array} {ccc}
     *  A_{element}^{'} & 0 & 0\\
     *  0 & A_{element}^{'} & 0\\
     *  0 & 0 & A_{element}^{'}
     *  \end{array}
     *  \right)
     *  \f$
     *
     */
    ElementMatrices();

    /**
     * Virtual destructor.
     */
    virtual ~ElementMatrices();

    /**
     * Method for computing the h factor for M or C for each component.
     *
     * The factor is the same for both M and C matrices. For D, you can use it
     * in the same way by just dividing by hi for component i (see below).
     *
     * In order to support non-square/cube h-entries, we don't accumulate a
     * central single hFactor any longer but a Vector for each dimensions. This is
     * done by computing  the cyclic contributions inside ar dimension loop.
     *
     * The cyclic h factor looks as following:
     * - 2D:
     *   - contribution in x: hy
     *   - contribution in y: hx
     * - 3D:
     *   - contribution in x: hy*hz
     *   - contribution in y: hx*hz
     *   - contribution in z: hx*hy
     *
     * This method is used
     * - for M in CalculatePressureGradient and CalculatePPERHS at several
     *   points as well as for the assemblation of Q (in the trivialgrid case).
     * - for C and D in CalculateF.
     *
     * For D, you just need to divide by hi for component i. This results in the
     * following:
     * - in 2D:  x: hy/hx,    y: hx/hy
     * - in 3D:  x: hy*hz/hx, y: hz*hx/hy, z: hx*hy/hz
     *
     * This method is necessary to support mesh stretching etc.
     *
     * @param h Vector of mesh sizes of current cell.
     */
    Vector getHFactorForMOrC(const Vector& h) const;

    /**
     * \brief Method to compute the volume of a cell as needed for gravity
     *        contributions.
     *
     * This method simply computes the h factor directly from the integration
     * over one cell (with edge lengths h) as necessary for A or gravity
     * contributions.
     */
    double getVolumeOfCell(const Vector& h) const;
};


#endif //_PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_FLUIDNUMERICS_ELEMENTMATRICES_H_
