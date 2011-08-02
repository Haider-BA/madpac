#include "peano/applications/faxen/lbf/mappings/RegularGrid2ControlTimeStep.h"
#include <cmath>

tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep" );


peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::RegularGrid2ControlTimeStep() {
	logTraceIn( "RegularGrid2ControlTimeStep()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2ControlTimeStep()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::~RegularGrid2ControlTimeStep() {
	logTraceIn( "~RegularGrid2ControlTimeStep()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2ControlTimeStep()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	double uCell = cell.getU();
	double vCell = cell.getV();

	_umax = (_umax < fabs(uCell)) ? fabs(uCell) : _umax;
	_vmax = (_vmax < fabs(vCell)) ? fabs(vCell) : _vmax;

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	double dx = solverState.getDelx();
	double dy = solverState.getDely();

	_umax = _vmax = 0.0;
	_dt = solverState.getReynoldsNumber()/(1/(dx*dx)+1/(dy*dy))/2;

//	std::cout << "R = " << solverState.getReynoldsNumber() << std::endl;
//	std::cout << "1/(dx*dx)+1/(dy*dy) " << 1/(dx*dx)+1/(dy*dy) << std::endl;
//	std::cout << "dt = " << _dt << std::endl;

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ControlTimeStep::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );

	double dx = solverState.getDelx();
	double dy = solverState.getDely();

//	std::cout << "U max: " << _umax << ", V max: " << _vmax << std::endl;

	_dt = ((_umax != 0) && (_dt > dx/_umax)) ? dx/_umax : _dt;
	_dt = ((_vmax != 0) && (_dt > dy/_vmax)) ? dy/_vmax : _dt;

	_dt *= solverState.getTimeSafetyFactor();

//	std::cout << "time step: " << _dt << std::endl;

	solverState.setDelt(_dt);

	logTraceOutWith1Argument( "endIteration()", solverState );
}

