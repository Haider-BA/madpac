#include "peano/applications/faxen/lbf/mappings/RegularGrid2ComputeResidualNorm.h"
#include <cmath>

tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm" );


peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::RegularGrid2ComputeResidualNorm() {
	logTraceIn( "RegularGrid2ComputeResidualNorm()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2ComputeResidualNorm()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::~RegularGrid2ComputeResidualNorm() {
	logTraceIn( "~RegularGrid2ComputeResidualNorm()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2ComputeResidualNorm()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	double Pij = cell.getP();
	double Pip1j = 2*vertices[enumerator(3)].getP1() - Pij;
	double Pim1j = 2*vertices[enumerator(2)].getP1() - Pij;
	double Pijp1 = 2*vertices[enumerator(3)].getP0() - Pij;
	double Pijm1 = 2*vertices[enumerator(1)].getP0() - Pij;
	double rhs   = cell.getRhs();

	double res_loc = (Pip1j-2*Pij+Pim1j)/(_dx*_dx)+
			(Pijp1-2*Pij+Pijm1)/(_dy*_dy)-rhs;

	_res += res_loc*res_loc;

	_cnum++;

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	_res = 0.0;
	_cnum = 0;
	_dx = solverState.getDelx();
	_dy = solverState.getDely();

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ComputeResidualNorm::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );

	solverState.setResidualNorm(sqrt(_res/_cnum));

	logTraceOutWith1Argument( "endIteration()", solverState );
}

