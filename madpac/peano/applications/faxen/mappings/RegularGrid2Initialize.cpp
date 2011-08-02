#include "peano/applications/faxen/mappings/RegularGrid2Initialize.h"
#include "peano/applications/faxen/Flags.h"

tarch::logging::Log peano::applications::faxen::mappings::RegularGrid2Initialize::_log( "peano::applications::faxen::mappings::RegularGrid2Initialize" );


peano::applications::faxen::mappings::RegularGrid2Initialize::RegularGrid2Initialize():
							_PI(0.0),
							_UI(0.0),
							_VI(0.0) {
	logTraceIn( "RegularGrid2Initialize()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2Initialize()" );
}


peano::applications::faxen::mappings::RegularGrid2Initialize::~RegularGrid2Initialize() {
	logTraceIn( "~RegularGrid2Initialize()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2Initialize()" );
}


void peano::applications::faxen::mappings::RegularGrid2Initialize::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	vertex.init();
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2Initialize::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	vertex.init();
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2Initialize::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::RegularGridVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::mappings::RegularGrid2Initialize::createCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	cell.setP(_PI);
	cell.setU(_UI);
	cell.setV(_VI);
	cell.setF(0.0);
	cell.setG(0.0);
	cell.setRes(0.0);
	cell.setRhs(0.0);
	logTraceOutWith1Argument( "createCell()", cell );
}

void peano::applications::faxen::mappings::RegularGrid2Initialize::destroyCell(
		peano::applications::faxen::RegularGridVertex const * const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::mappings::RegularGrid2Initialize::handleCell(
		peano::applications::faxen::RegularGridVertex* const vertices,
		peano::applications::faxen::RegularGridCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
	double loc;

	loc = cell.getP()/2;
	//	vertices[enumerator(0)].setP0(vertices[enumerator(0)].getP0()+loc);
	//	vertices[enumerator(0)].setP1(vertices[enumerator(0)].getP1()+loc);
	//	vertices[enumerator(1)].setP0(vertices[enumerator(1)].getP0()+loc);
	//	vertices[enumerator(2)].setP1(vertices[enumerator(2)].getP1()+loc);

	vertices[enumerator(3)].setP0(vertices[enumerator(3)].getP0()+loc);
	vertices[enumerator(3)].setP1(vertices[enumerator(3)].getP1()+loc);
	vertices[enumerator(2)].setP1(vertices[enumerator(2)].getP1()+loc);
	vertices[enumerator(1)].setP0(vertices[enumerator(1)].getP0()+loc);

	loc = cell.getU()/2;
	//	vertices[enumerator(0)].setU0(vertices[enumerator(0)].getU0()+loc/2);
	//	vertices[enumerator(0)].setU1(vertices[enumerator(0)].getU1()+loc);
	//	vertices[enumerator(0)].setU2(vertices[enumerator(0)].getU2()+loc);
	//	vertices[enumerator(1)].setU0(vertices[enumerator(1)].getU0()+loc/2);
	//	vertices[enumerator(1)].setU1(vertices[enumerator(0)].getU1()+loc);
	//	vertices[enumerator(2)].setU0(vertices[enumerator(0)].getU0()+loc/2);
	//	vertices[enumerator(2)].setU2(vertices[enumerator(2)].getU2()+loc);
	//	vertices[enumerator(3)].setU0(vertices[enumerator(3)].getU0()+loc/2);

	vertices[enumerator(3)].setU0(vertices[enumerator(3)].getU0()+loc/2);
	vertices[enumerator(3)].setU1(vertices[enumerator(3)].getU1()+loc);
	vertices[enumerator(3)].setU2(vertices[enumerator(3)].getU2()+loc);
	vertices[enumerator(2)].setU0(vertices[enumerator(2)].getU0()+loc/2);
	vertices[enumerator(2)].setU2(vertices[enumerator(2)].getU2()+loc);
	vertices[enumerator(1)].setU0(vertices[enumerator(1)].getU0()+loc/2);
	vertices[enumerator(1)].setU1(vertices[enumerator(1)].getU1()+loc);
	vertices[enumerator(0)].setU0(vertices[enumerator(0)].getU0()+loc/2);

	loc = cell.getV()/2;
	//	vertices[enumerator(0)].setV0(vertices[enumerator(0)].getV0()+loc/2);
	//	vertices[enumerator(0)].setV1(vertices[enumerator(0)].getV1()+loc);
	//	vertices[enumerator(0)].setV2(vertices[enumerator(0)].getV2()+loc);
	//	vertices[enumerator(1)].setV0(vertices[enumerator(1)].getV0()+loc/2);
	//	vertices[enumerator(1)].setV1(vertices[enumerator(0)].getV1()+loc);
	//	vertices[enumerator(2)].setV0(vertices[enumerator(0)].getV0()+loc/2);
	//	vertices[enumerator(2)].setV2(vertices[enumerator(2)].getV2()+loc);
	//	vertices[enumerator(3)].setV0(vertices[enumerator(3)].getV0()+loc/2);

	vertices[enumerator(3)].setV0(vertices[enumerator(3)].getV0()+loc/2);
	vertices[enumerator(3)].setV1(vertices[enumerator(3)].getV1()+loc);
	vertices[enumerator(3)].setV2(vertices[enumerator(3)].getV2()+loc);
	vertices[enumerator(2)].setV0(vertices[enumerator(2)].getV0()+loc/2);
	vertices[enumerator(2)].setV2(vertices[enumerator(2)].getV2()+loc);
	vertices[enumerator(1)].setV0(vertices[enumerator(1)].getV0()+loc/2);
	vertices[enumerator(1)].setV1(vertices[enumerator(1)].getV1()+loc);
	vertices[enumerator(0)].setV0(vertices[enumerator(0)].getV0()+loc/2);

	int flag;

	if(vertices[enumerator(0)].isBoundary()){
		flag = vertices[enumerator(0)].getFlag();
		if(vertices[enumerator(2)].isBoundary())
			flag += UPWALL;
		if(vertices[enumerator(1)].isBoundary())
			flag += RIGHTWALL;
		vertices[enumerator(0)].setFlag(flag);
	}

	if(vertices[enumerator(1)].isBoundary()){
		flag = vertices[enumerator(1)].getFlag();
		if(vertices[enumerator(0)].isBoundary())
			flag += LEFTWALL;
		if(vertices[enumerator(3)].isBoundary())
			flag += UPWALL;
		vertices[enumerator(1)].setFlag(flag);
	}

	if(vertices[enumerator(2)].isBoundary()){
		flag = vertices[enumerator(2)].getFlag();
		if(vertices[enumerator(0)].isBoundary())
			flag += DOWNWALL;
		if(vertices[enumerator(3)].isBoundary())
			flag += RIGHTWALL;
		vertices[enumerator(2)].setFlag(flag);
	}

	if(vertices[enumerator(3)].isBoundary()){
		flag = vertices[enumerator(3)].getFlag();
		if(vertices[enumerator(1)].isBoundary())
			flag += DOWNWALL;
		if(vertices[enumerator(2)].isBoundary())
			flag += LEFTWALL;
		vertices[enumerator(3)].setFlag(flag);
	}

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2Initialize::mergeWithNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex,
		const peano::applications::faxen::RegularGridVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2Initialize::touchVertexFirstTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::mappings::RegularGrid2Initialize::touchVertexLastTime(
		peano::applications::faxen::RegularGridVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::mappings::RegularGrid2Initialize::prepareSendToNeighbour(
		peano::applications::faxen::RegularGridVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::mappings::RegularGrid2Initialize::beginIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	_PI = solverState.getInitialP();
	_UI = solverState.getInitialU();
	_VI = solverState.getInitialV();

	std::cout << "initial P: " << _PI << "\n";
	std::cout << "initial U: " << _UI << "\n";
	std::cout << "initial V: " << _VI << "\n";

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::mappings::RegularGrid2Initialize::endIteration(
		peano::applications::faxen::RegularGridState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

