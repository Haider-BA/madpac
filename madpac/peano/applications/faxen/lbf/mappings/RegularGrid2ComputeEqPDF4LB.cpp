#include "peano/applications/faxen/lbf/mappings/RegularGrid2ComputeEqPDF4LB.h"

// definition of function for computation of equilibrium pdf
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB" );


peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::RegularGrid2ComputeEqPDF4LB() {
	logTraceIn( "RegularGrid2ComputeEqPDF4LB()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2ComputeEqPDF4LB()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::~RegularGrid2ComputeEqPDF4LB() {
	logTraceIn( "~RegularGrid2ComputeEqPDF4LB()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2ComputeEqPDF4LB()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	// compute equilibrium pdf for the bottom left vertex
	computeEqPDF4LBCell(vertices,enumerator,0);

	// compute equilibrium pdf for the bottom right vertex
	computeEqPDF4LBCell(vertices,enumerator,1);

	// compute equilibrium pdf for the top left vertex
	computeEqPDF4LBCell(vertices,enumerator,2);

	// compute equilibrium pdf for the top right vertex
	computeEqPDF4LBCell(vertices,enumerator,3);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeEqPDF4LB::computeEqPDF4LBCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
		int vertexNumber){
	// velocity
	tarch::la::Vector<DIMENSIONS,double> velocityL(0.0);
	// for equilibrium distribution
	tarch::la::Vector<LB_CURRENT_DIR,double> feq(0.0);

	int correction = LB_BLOCKSIZE%2;
	int origin;

	switch(vertexNumber) {
	case 0:
		origin = LB_BLOCK_NUMBER_OF_CELLS + LB_BLOCKSIZE*(1-correction)-correction;
		break;
	case 1:
		origin = LB_BLOCK_NUMBER_OF_CELLS - LB_BLOCKSIZE*correction;
		break;
	case 2:
		origin = LB_BLOCKSIZE - correction;
		break;
	case 3:
		origin = 0;
		break;
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
	// pdf
	tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdfeq(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());
	// location flag
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());

	// compute equilibrium pdf for each LB cell in one quarter of block
	for(int yc=0;yc<LB_BLOCKSIZE/2+correction;yc++){
		for(int xc=0;xc<LB_BLOCKSIZE/2+correction;xc++){

			// compute pdf only in inner LB cells
			if(inner[origin/2+yc*LB_BLOCKSIZE+xc]){

				velocityL[0] = velocity[origin+yc*2*LB_BLOCKSIZE+2*xc];
				velocityL[1] = velocity[origin+yc*2*LB_BLOCKSIZE+2*xc+1];

				// compute equilibrium distribution
				peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeFeq(
						density[origin/2+yc*LB_BLOCKSIZE+xc],velocityL,feq);

				// set equ. distribution
				for (int k = 0; k < LB_CURRENT_DIR; k++){
					pdfeq[(origin/2+yc*LB_BLOCKSIZE+xc)*LB_CURRENT_DIR+k] = feq(k);
				}
			}
		}
	}
}
