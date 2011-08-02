#include "peano/applications/faxen/lbf/mappings/RegularGrid2ExtractDataNSE2LB.h"

// interpolations
#include "peano/applications/faxen/lbf/interpolation/Interpolation.h"

#include <iostream>

tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB" );


peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::RegularGrid2ExtractDataNSE2LB() {
	logTraceIn( "RegularGrid2ExtractDataNSE2LB()" );

	_cellVertices = new peano::applications::faxen::lbf::RegularGridBlockVertex*[TWO_POWER_D];

	logTraceOut( "RegularGrid2ExtractDataNSE2LB()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::~RegularGrid2ExtractDataNSE2LB() {
	logTraceIn( "~RegularGrid2ExtractDataNSE2LB()" );

	delete[] _cellVertices;

	logTraceOut( "~RegularGrid2ExtractDataNSE2LB()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::handleCell(
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

	// inject values to the bottom left vertex
	inject2LBCell(vertices,cell,enumerator,0);

	// inject values to the bottom right vertex
	inject2LBCell(vertices,cell,enumerator,1);

	// inject values to the top left vertex
	inject2LBCell(vertices,cell,enumerator,2);

	//inject values to the top right vertex
	inject2LBCell(vertices,cell,enumerator,3);

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	tarch::la::Vector<DIMENSIONS,double> h = _h*((double)LB_BLOCKSIZE);

	tarch::la::Vector<DIMENSIONS,double> position(0.0);
	tarch::la::Vector<DIMENSIONS,double> meshSize((1.0/((double) LB_BLOCKSIZE))*h(0));

	int cellCounter = 0;

	// load vertex
	peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
			loadVertex(vertex.getVertexNumber());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& boundary(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary());

	// initialize boundary flags

	// for boundary vertices: check for boundary states
#if (DIMENSIONS == 3)
	for (int zv = 0; zv < LB_BLOCKSIZE; zv++){
		position(2) = x(2) - 0.5*h(2) + 0.5*meshSize(2) + zv*meshSize(2);
#endif
		for (int yv = 0; yv < LB_BLOCKSIZE; yv++){
			position(1) = x(1) - 0.5*h(1) + 0.5*meshSize(1) + yv*meshSize(1);
			for (int xv = 0; xv < LB_BLOCKSIZE; xv++){
				position(0) = x(0) - 0.5*h(0) + 0.5*meshSize(0) + xv*meshSize(0);

				// if the cell is inner, do the same as in createInnerVertex
				if (peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(position,meshSize)){
					logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is completely inside");
					inner[cellCounter] = true;
					boundary[cellCounter] = false;
				} else {
					// for outer cells: set inner-flag to false
					if (peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(position)){
						inner[cellCounter] = false;
						logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is outside closed domain");
					} else {
						inner[cellCounter] = true;
						logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is not outside closed domain");
					}

					// if the cell is outside and away from the boundary, set boundary flag to false, otherwise true
					if (peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyOutside(position,meshSize)){
						boundary[cellCounter] = false;
						logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is completely outside");
					} else {
						boundary[cellCounter] = true;
						logDebug("setBoundaryFlags()", "Cell " << cellCounter << ", position " << position << " is not completely outside");
					}
				}
				cellCounter++;
			}
		}
#if (DIMENSIONS == 3)
	}
#endif

	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	// LB cell edge size
	_dx = solverState.getDx();

	// getting the transformation coefficient
	_dtbydx = solverState.getDt()/solverState.getDx();

	// getting density of the fluid
	_rho = solverState.getDensity();

	// number of LB cells for injection
	_numberOfInjLBCells = 0;

	// average density
	_avrDensity = 0.0;

	// set multi-level simulation data
	_multiLevelSimData = std::auto_ptr<peano::applications::latticeboltzmann::MultiLevelSimData>(
			new peano::applications::latticeboltzmann::MultiLevelSimData(solverState)
	);
	assertion(_multiLevelSimData.get() != NULL);

	// determine simulation level
	_level = _multiLevelSimData->getSimData(0).getLevel();

	// determine meshsize
	_h = tarch::la::Vector<DIMENSIONS,double>(
			_multiLevelSimData->getSimData(_level).getDx()
			*tarch::la::Vector<DIMENSIONS,double>(1.0)
	);

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );

	_avrDensity /= _numberOfInjLBCells;
	solverState.setAvrExtractedDensity(_avrDensity);

	logTraceOutWith1Argument( "endIteration()", solverState );
}

void peano::applications::faxen::lbf::mappings::RegularGrid2ExtractDataNSE2LB::inject2LBCell(
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
		break;
	case 1:
		origin = LB_BLOCK_NUMBER_OF_CELLS - LB_BLOCKSIZE*correction;
		offset[0] = (_dx/2)*(1-correction) + cellSize[0]/2;
		offset[1] = (_dx/2)*(1-correction);
		break;
	case 2:
		origin = LB_BLOCKSIZE - correction;
		offset[0] = (_dx/2)*(1-correction);
		offset[1] = (_dx/2)*(1-correction) + cellSize[1]/2;
		break;
	case 3:
		origin = 0;
		offset[0] = (_dx/2)*(1-correction) + cellSize[0]/2;
		offset[1] = (_dx/2)*(1-correction) + cellSize[1]/2;
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
	// location flag
	std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(
			peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());

	// interpolate values in each LB cell in one quarter of block
	for(int yc=0;yc<LB_BLOCKSIZE/2+correction;yc++){
		rp[1] = yc*_dx + offset[1];
		for(int xc=0;xc<LB_BLOCKSIZE/2+correction;xc++){
			rp[0] = xc*_dx + offset[0];

			// interpolate only in inner LB cells
			if(inner[origin/2+yc*LB_BLOCKSIZE+xc]){

				// interpolate pressure values
				rc = peano::applications::faxen::lbf::interpolation::
						getBarycentricCoordinatesPressure(vertexNumber+1,rp,cellSize);
				density[origin/2+yc*LB_BLOCKSIZE+xc] = peano::applications::faxen::lbf::interpolation::
						interpolateBarycentricPressure(vertexNumber+1,rc,_cellVertices,cell)*3*_dtbydx*_dtbydx;
				_avrDensity += density[origin/2+yc*LB_BLOCKSIZE+xc];
				_numberOfInjLBCells++;

				// interpolate horizontal velocity values
				rc = peano::applications::faxen::lbf::interpolation::
						getRelativeCoordinatesU(vertexNumber+1,rp,cellSize);
				velocity[origin+yc*2*LB_BLOCKSIZE+2*xc] =	peano::applications::faxen::lbf::interpolation::
						interpolateU(vertexNumber+1,rc,_cellVertices,cell)*_dtbydx;

				// interpolate vertical velocity values
				rc = peano::applications::faxen::lbf::interpolation::
						getRelativeCoordinatesV(vertexNumber+1,rp,cellSize);
				velocity[origin+yc*2*LB_BLOCKSIZE+2*xc+1] =	peano::applications::faxen::lbf::interpolation::
						interpolateV(vertexNumber+1,rc,_cellVertices,cell)*_dtbydx;
			}
		}
	}
}





