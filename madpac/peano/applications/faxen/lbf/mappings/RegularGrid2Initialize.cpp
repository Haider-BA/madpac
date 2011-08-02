#include "peano/applications/faxen/lbf/mappings/RegularGrid2Initialize.h"
#include "peano/applications/faxen/Flags.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2Initialize" );


peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::RegularGrid2Initialize():_PI(0.0),_UI(0.0),_VI(0.0){
	logTraceIn( "RegularGrid2Initialize()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2Initialize()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::~RegularGrid2Initialize() {
	logTraceIn( "~RegularGrid2Initialize()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2Initialize()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	vertex.init();
	vertex.createVertex(x,h);
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	vertex.init();
	vertex.createVertex(x,h);
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// TODO insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
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



void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
	//	double loc;
	//	loc = cell.getP()/2;
	//
	//	vertices[enumerator(3)].setP0(vertices[enumerator(3)].getP0()+loc);
	//	vertices[enumerator(3)].setP1(vertices[enumerator(3)].getP1()+loc);
	//	vertices[enumerator(2)].setP1(vertices[enumerator(2)].getP1()+loc);
	//	vertices[enumerator(1)].setP0(vertices[enumerator(1)].getP0()+loc);
	//
	//	loc = cell.getU()/2;
	//
	//	vertices[enumerator(3)].setU0(vertices[enumerator(3)].getU0()+loc/2);
	//	vertices[enumerator(3)].setU1(vertices[enumerator(3)].getU1()+loc);
	//	vertices[enumerator(3)].setU2(vertices[enumerator(3)].getU2()+loc);
	//	vertices[enumerator(2)].setU0(vertices[enumerator(2)].getU0()+loc/2);
	//	vertices[enumerator(2)].setU2(vertices[enumerator(2)].getU2()+loc);
	//	vertices[enumerator(1)].setU0(vertices[enumerator(1)].getU0()+loc/2);
	//	vertices[enumerator(1)].setU1(vertices[enumerator(1)].getU1()+loc);
	//	vertices[enumerator(0)].setU0(vertices[enumerator(0)].getU0()+loc/2);
	//
	//	loc = cell.getV()/2;
	//
	//	vertices[enumerator(3)].setV0(vertices[enumerator(3)].getV0()+loc/2);
	//	vertices[enumerator(3)].setV1(vertices[enumerator(3)].getV1()+loc);
	//	vertices[enumerator(3)].setV2(vertices[enumerator(3)].getV2()+loc);
	//	vertices[enumerator(2)].setV0(vertices[enumerator(2)].getV0()+loc/2);
	//	vertices[enumerator(2)].setV2(vertices[enumerator(2)].getV2()+loc);
	//	vertices[enumerator(1)].setV0(vertices[enumerator(1)].getV0()+loc/2);
	//	vertices[enumerator(1)].setV1(vertices[enumerator(1)].getV1()+loc);
	//	vertices[enumerator(0)].setV0(vertices[enumerator(0)].getV0()+loc/2);

	tarch::la::Vector<DIMENSIONS, double> cellSize = enumerator.getCellSize();
	tarch::la::Vector<DIMENSIONS, double> vertexPosition;

	for(int i=0; i<TWO_POWER_D; i++){
		int flag = vertices[enumerator(i)].getFlag();
		vertexPosition = enumerator.getVertexPosition(i);
		if(!peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(vertexPosition,cellSize) &&
				!peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(vertexPosition)){
			flag |= BOUNDARY;
			vertices[enumerator(i)].setFlag(flag);
		} else
			if(peano::geometry::services::GeometryService::getInstance().getGeometry().isOutsideClosedDomain(vertexPosition)){
				flag |= OBSTACLE;
				vertices[enumerator(i)].setFlag(flag);
			}
	}

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

	vertex.setP0(_PI);
	vertex.setP1(_PI);

	vertex.setU0(_UI);
	vertex.setU1(_UI);
	vertex.setU2(_UI);

	vertex.setV0(_VI);
	vertex.setV1(_VI);
	vertex.setV2(_VI);

	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	_PI = solverState.getInitialP();
	_UI = solverState.getInitialU();
	_VI = solverState.getInitialV();

	logInfo("beginIteration()","initial P: " << _PI);
	logInfo("beginIteration()","initial U: " << _UI);
	logInfo("beginIteration()","initial V: " << _VI);

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2Initialize::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

