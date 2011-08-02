#include "peano/applications/faxen/lbf/mappings/RegularGrid2SwitchFromNSE2LB.h"

// interpolation functions
#include "peano/applications/faxen/lbf/interpolation/Interpolation.h"

#include <bitset>


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB" );


peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::RegularGrid2SwitchFromNSE2LB() {
	logTraceIn( "RegularGrid2SwitchFromNSE2LB()" );

	_cellVertices = new peano::applications::faxen::lbf::RegularGridBlockVertex*[TWO_POWER_D];

	logTraceOut( "RegularGrid2SwitchFromNSE2LB()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::~RegularGrid2SwitchFromNSE2LB() {
	logTraceIn( "~RegularGrid2SwitchFromNSE2LB()" );

	delete[] _cellVertices;

	logTraceOut( "~RegularGrid2SwitchFromNSE2LB()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	// only for 2D implementation

	_cellVertices[0] = &vertices[enumerator(0)];
	_cellVertices[1] = &vertices[enumerator(1)];
	_cellVertices[2] = &vertices[enumerator(2)];
	_cellVertices[3] = &vertices[enumerator(3)];

	// inject values to the bottom left vertex (zero node)
	inject2LBCell(vertices,cell,enumerator,0);

	// inject values to the bottom right vertex (node one)
	inject2LBCell(vertices,cell,enumerator,1);

	// inject values to the top left vertex (node two)
	inject2LBCell(vertices,cell,enumerator,2);

	//inject values to the top right vertex (node three)
	inject2LBCell(vertices,cell,enumerator,3);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	// LB cell edge size
	_dx = solverState.getDx();

	// getting the transformation coefficient
	_dtbydx = solverState.getDt()/solverState.getDx();

	// getting density of the fluid
	_rho = solverState.getDensity();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

void peano::applications::faxen::lbf::mappings::RegularGrid2SwitchFromNSE2LB::inject2LBCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
		int vertexNumber
){
	// coordinates relative to cell bottom left vertex
	tarch::la::Vector<DIMENSIONS,double> rp;
	// corrected coordinates for interpolation
	tarch::la::Vector<DIMENSIONS,double> rc;
	// cell size
	tarch::la::Vector<DIMENSIONS,double> cellSize = enumerator.getCellSize();
	// offset for relative position
	tarch::la::Vector<DIMENSIONS,double> offset;

	int correction = LB_BLOCKSIZE%2;
	int origin;

	switch(vertexNumber) {
	case 0:
		origin = LB_BLOCK_NUMBER_OF_CELLS + LB_BLOCKSIZE*(1-correction)-correction;
		offset[0] = (_dx/2)*(1-correction);
		offset[1] = (_dx/2)*(1-correction);
	case 1:
		origin = LB_BLOCK_NUMBER_OF_CELLS - LB_BLOCKSIZE*correction;
		offset[0] = (_dx/2)*(1-correction) + cellSize[0]/2;
		offset[1] = (_dx/2)*(1-correction);
	case 2:
		origin = LB_BLOCKSIZE - correction;
		offset[0] = (_dx/2)*(1-correction);
		offset[1] = (_dx/2)*(1-correction) + cellSize[1]/2;
	case 3:
		origin = 0;
		offset[0] = (_dx/2)*(1-correction) + cellSize[0]/2;
		offset[1] = (_dx/2)*(1-correction) + cellSize[1]/2;
	default:
		return;
	}

	// load vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertices[enumerator(vertexNumber)].getVertexNumber());
	// densities
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
	// velocities
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& velocity(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
	// location flag
	 std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());

	// interpolate values in each LB cell in one quarter of block
	for(int i=0;i<LB_BLOCKSIZE/2+correction;i++){
		for(int j=0;j<LB_BLOCKSIZE/2+correction;j++){

			// interpolate only in inner LB cells
			if(inner[origin/2+i*LB_BLOCKSIZE+j]){

				rp[0] = i*_dx + offset[0];
				rp[1] = j*_dx + offset[1];

				// interpolate pressure values
				rc = peano::applications::faxen::lbf::interpolation::
						getBarycentricCoordinatesPressure(vertexNumber+1,rp,cellSize);
				density[origin/2+i*LB_BLOCKSIZE+j] = peano::applications::faxen::lbf::interpolation::
						interpolateBarycentricPressure(vertexNumber+1,rc,_cellVertices,cell)*3*_dtbydx*_dtbydx;

				// interpolate horizontal velocity values
				rc = peano::applications::faxen::lbf::interpolation::
						getRelativeCoordinatesU(1,rp,cellSize);
				velocity[origin+i*2*LB_BLOCKSIZE+2*j] =	peano::applications::faxen::lbf::interpolation::
						interpolateU(vertexNumber+1,rc,_cellVertices,cell)*_dtbydx;

				// interpolate vertical velocity values
				rc = peano::applications::faxen::lbf::interpolation::
						getRelativeCoordinatesV(vertexNumber+1,rp,cellSize);
				velocity[origin+i*2*LB_BLOCKSIZE+2*j+1] =	peano::applications::faxen::lbf::interpolation::
						interpolateV(vertexNumber+1,rc,_cellVertices,cell)*_dtbydx;
			}
		}
	}
}

