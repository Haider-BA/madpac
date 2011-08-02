#ifndef _PEANO_GEOMETRY_EXTENSIONS_GEOMETRYENLARGEMENT_H_
#define _PEANO_GEOMETRY_EXTENSIONS_GEOMETRYENLARGEMENT_H_

#include "peano/geometry/Geometry.h"
#include "tarch/la/Vector.h"

namespace peano {
  namespace geometry {
    namespace extensions {
      class GeometryEnlargement;
    }
  }
}

/** this class takes a given geometry and enlarges it in the following sense:
 *  Consider the example of a block-structured approach, where a subgrid
 *  is stored in each vertex ( an example for such block-structured grids is the
 *  blocklatticeboltzmann component). The arising grid on which is worked on consequently
 *  has a finer meshsize as the grid which is produced by the Peano kernel. Thus,
 *  it can happen that a cell of the (fine) block-structured grid is still inside
 *  the comp. domain, although the vertex that stores this cell is already considered
 *  to be outside the domain by the Peano grid and consequently is not created!
 *  For this purpose the present class can be used: It creates a new geometry out of another
 *  (e.g. the original!) one and - when handed over to the grid constructors - helps
 *  to create a grid that also stores vertices which are already outside the comp. domain
 *  (but not too far from the boundary).
 *
 *  @author Philipp Neumann
 */
class peano::geometry::extensions::GeometryEnlargement:
public peano::geometry::Geometry {
  public:
    /** constructor obtains an original geometry and a vector enlargementFactor
     *  defining the surrounding in which vertices should still be considered to
     *  be "not outside" the comp. domain. "enlargementFactor" thus should equal the
     *  the minimal meshsize of the underlying Peano grid (TODO CHECK FOR ADAPTIVE GRID!)! Note that when using this
     *  geometry representation, the vertex and cell states predefined by Peano (inside,
     *  outside etc.) do not represent the original geometry anymore! In order to set up
     *  a respective flagging of cells and vertices, you should provide respective routines
     *  and states by your own!
     */
    GeometryEnlargement(
      peano::geometry::Geometry &geo, const tarch::la::Vector<DIMENSIONS,double>& enlargementFactor
    );
    ~GeometryEnlargement(){}

     bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

  private:
    peano::geometry::Geometry &_geometry;
    const tarch::la::Vector<DIMENSIONS,double> _enlargementFactor;
};
#endif // _PEANO_GEOMETRY_PROXIES_GEOMETRYENLARGEMENT_H_
