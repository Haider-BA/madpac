#include "peano/applications/faxen/lbf/mappings/RegularGrid2ExploreBoundaries.h"
#include "peano/applications/faxen/Flags.h"


tarch::logging::Log peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::_log( "peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries" );


peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::RegularGrid2ExploreBoundaries():
		_isPressureNodeSet(false){
	logTraceIn( "RegularGrid2ExploreBoundaries()" );
	// @todo Insert your code here
	logTraceOut( "RegularGrid2ExploreBoundaries()" );
}


peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::~RegularGrid2ExploreBoundaries() {
	logTraceIn( "~RegularGrid2ExploreBoundaries()" );
	// @todo Insert your code here
	logTraceOut( "~RegularGrid2ExploreBoundaries()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::createInnerVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::createBoundaryVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::destroyVertex(
		const tarch::la::Vector<DIMENSIONS,double>&  x,
		const tarch::la::Vector<DIMENSIONS,double>&  h,
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {
	logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
	// @todo Insert your code here
	logTraceOut( "destroyVertex()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::createCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::destroyCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
	// @todo Insert your code here
	logTraceOut( "destroyCell()" );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::handleCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
	logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

	int flag;

	flag = vertices[enumerator(0)].getFlag();
	if(flag){
		if(vertices[enumerator(2)].getFlag())
			flag |= UPWALL;
		if(vertices[enumerator(1)].getFlag())
			flag |= RIGHTWALL;
		vertices[enumerator(0)].setFlag(flag);
	}

	flag = vertices[enumerator(1)].getFlag();
	if(flag){
		if(vertices[enumerator(0)].getFlag())
			flag |= LEFTWALL;
		if(vertices[enumerator(3)].getFlag())
			flag |= UPWALL;
		vertices[enumerator(1)].setFlag(flag);
	}

	flag = vertices[enumerator(2)].getFlag();
	if(vertices[enumerator(2)].getFlag()){
		if(vertices[enumerator(0)].getFlag())
			flag |= DOWNWALL;
		if(vertices[enumerator(3)].getFlag())
			flag |= RIGHTWALL;
		vertices[enumerator(2)].setFlag(flag);
	}

	flag = vertices[enumerator(3)].getFlag();
	if(vertices[enumerator(3)].getFlag()){
		if(vertices[enumerator(1)].getFlag())
			flag |= DOWNWALL;
		if(vertices[enumerator(2)].getFlag())
			flag |= LEFTWALL;
		vertices[enumerator(3)].setFlag(flag);
	}

	logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::mergeWithNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
		const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour,
		int fromRank) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::touchVertexFirstTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
	logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::touchVertexLastTime(
		peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
		const tarch::la::Vector<DIMENSIONS,double>&  x
) {
	logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
	int flag = vertex.getFlag();
//	std::cout << "vertex position: " << x << std::endl;
//	std::cout << "flag: " << flag << std::endl;
//	std::cout << "BOUNDARY: " << BOUNDARY << std::endl;
//	std::cout << "flag & BOUNDARY: " << (flag & BOUNDARY) << std::endl;
//	std::cout << "is pressure nod set: "<< _isPressureNodeSet << std::endl;
//	if(!_isPressureNodeSet && ((flag & BOUNDARY) == 0) && ((flag & OBSTACLE) == 0) ) {
//		flag |= FIXPRESSURE;
//		vertex.setFlag(flag);
//		_isPressureNodeSet = true;
//	}
	logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::prepareSendToNeighbour(
		peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {
	// @todo Insert your code here
}
#endif

void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::beginIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "beginIteration()", solverState );

	_dx = solverState.getDelx();
	_dy = solverState.getDely();
	_width = solverState.getXlength();
	_height = solverState.getYlength();

	std::cout << "dx,dy: " << _dx << "," << _dy << "\n";
	std::cout << "width,height: " << _width << "," << _height << "\n";

	logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::faxen::lbf::mappings::RegularGrid2ExploreBoundaries::endIteration(
		peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
	logTraceInWith1Argument( "endIteration()", solverState );
	// @todo Insert your code here
	logTraceOutWith1Argument( "endIteration()", solverState );
}

