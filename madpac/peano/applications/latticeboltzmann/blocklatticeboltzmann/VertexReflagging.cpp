#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/VertexReflagging.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::VertexReflagging::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::VertexReflagging"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::VertexReflagging::VertexReflagging(
  peano::geometry::Geometry &geometry,
  peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData
): _geometry(geometry), _multiLevelSimData(multiLevelSimData){}


peano::applications::latticeboltzmann::blocklatticeboltzmann::VertexReflagging::~VertexReflagging(){}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::VertexReflagging::
reflagVertex(
  const tarch::la::Vector<DIMENSIONS,double> &x,
  const tarch::la::Vector<DIMENSIONS,double> &h,
  std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
  std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &boundary,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  const int level,
  const bool isPassive
)  {

  // only reflagging if necessary
  if (_multiLevelSimData.getSimData(level).hasDynamicGeometry()){

    // size of subcells
    double cellsize = h(0)/(LB_BLOCKSIZE);
    tarch::la::Vector<DIMENSIONS,double> cellH(cellsize);

    // position of first subcell on this vertex
    tarch::la::Vector<DIMENSIONS,double> start((-0.5)*h);
    start = start+x + 0.5*cellH;

    // position of each subcell
    tarch::la::Vector<DIMENSIONS,double> position(0.0);

    // cell id (local index in cell array)
    int cellId = 0;

  #if (DIMENSIONS == 3)
    for(int zz = 0; zz < LB_BLOCKSIZE; zz++){
  #endif
      for (int yy = 0; yy < LB_BLOCKSIZE; yy++){
        for (int xx = 0; xx < LB_BLOCKSIZE; xx++){

          // compute local id in cell array (on this vertex)
          cellId = xx + LB_BLOCKSIZE*yy
  #if (DIMENSIONS == 3)
                     + zz*LB_BLOCKSIZE*LB_BLOCKSIZE
  #endif
                     ;

          // compute midpoint position of embedded cell
          position = start
                   + tarch::la::Vector<DIMENSIONS,double>(
                     xx*cellsize,
                     yy*cellsize
  #if (DIMENSIONS == 3)
                     ,zz*cellsize
  #endif
                   );


          // set boundary condition id according to spatial position:

          // completely inside domain
          if (_geometry.isCompletelyInside(position,cellH)){
            // if the cell had no inner flag before, there is an error (since the reflagging jumped over
            // at least one cell!)
            assertion(inner[cellId]);
            boundary[cellId] = false;

          // outside domain
          } else {
            // for outer cells: set inner-flag to false
            if (_geometry.isOutsideClosedDomain(position)){
              inner[cellId] = false;
              // reset density value in this cell to zero
              // (-> density is going to be interpolated from fluid cells,
              //     velocity is going to be set directly from ReceiveBoundaryData-Interface)
              density(cellId) = 0.0;
              logDebug("reflagVertex()", "Cell " << position << " is outside closed domain");
            } else {
              // if this has not been an inner cell before, do initialisation
              if (!inner[cellId]){
                inner[cellId] = true;
                // TODO initialise velocity field at this position
              }
              logDebug("reflagVertex()", "Cell " << position << " is not outside closed domain");
            }

            // if the cell is outside and away from the boundary, set boundary flag to false, otherwise true
            if (_geometry.isCompletelyOutside(position,cellH)){
              boundary[cellId] = false;
              logDebug("reflagVertex()", "Cell " << position << " is completely outside");
            } else {
              boundary[cellId] = true;
              logDebug("reflagVertex()", "Cell " << position << " is not completely outside");
            }
          }

        } // xx
      } // yy
  #if (DIMENSIONS == 3)
    } // zz
  #endif
  } // allow reflagging
}
