#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/CellTopology.h"
#include "tarch/la/WrappedVector.h"

//tarch::logging::Log
//peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
//CellTopology::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::CellTopology");


peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::CellTopology():
_vertexGrid(createVertexGrid()){}



tarch::la::Vector<TWO_POWER_D,tarch::la::Vector<LB_NUMBER_OF_CELLS_IN_CELLSUBBLOCK,int> >
peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::createVertexGrid(){
  tarch::la::Vector<TWO_POWER_D,tarch::la::Vector<LB_NUMBER_OF_CELLS_IN_CELLSUBBLOCK,int> > vertexGrid;

  // loop over all blocks (i.e. vertices) This is always 2^d
#if (DIMENSIONS == 3)
  for (int z = 0; z < 2; z++){
#endif
	for (int y = 0; y < 2; y++){
	  for (int x = 0; x < 2; x++){
		int block = x+ 2*y
#if (DIMENSIONS == 3)
		          +4*z
#endif
		          ;
		//logDebug("createVertexGrid()", "Examine vertex no. " << block);

		// determine start and end coordinates of single block (with respect to the numbering of the subcells
		// ON THE VERTICES
	    int startX,endX,startY,endY;
#if (DIMENSIONS == 3)
	    int startZ,endZ;
#endif

	    if (x > 0){
	      startX = 0;
	      endX = (LB_BLOCKSIZE)/2;
	    } else {
	      startX = (LB_BLOCKSIZE-1)/2;
	      endX = LB_BLOCKSIZE-1;
	    }
	    if (y > 0){
		  startY = 0;
		  endY = (LB_BLOCKSIZE)/2;
		} else {
		  startY = (LB_BLOCKSIZE-1)/2;
		  endY = LB_BLOCKSIZE-1;
	    }
#if (DIMENSIONS == 3)
	    if (z > 0){
		  startZ = 0;
		  endZ = (LB_BLOCKSIZE)/2;
	    } else {
		  startZ = (LB_BLOCKSIZE-1)/2;
		  endZ = LB_BLOCKSIZE-1;
	    }
#endif

	    //logDebug("createVertexGrid()", "X-coords: " << startX << "," << endX);
	    //logDebug("createVertexGrid()", "Y-coords: " << startY << "," << endY);
#if (DIMENSIONS == 3)
	    //logDebug("createVertexGrid()", "Z-coords: " << startZ << "," << endZ);
#endif


	    // initialise this block
#if (DIMENSIONS == 3)
	    for (int zz=startZ; zz <= endZ; zz++){
#endif
	      for (int yy=startY; yy <=endY; yy++){
	    	for (int xx=startX; xx <=endX; xx++){
	    	  // determine the entry in the block
	    	  int entry = xx-startX +((LB_BLOCKSIZE)/2 +1)*(yy-startY)
#if (DIMENSIONS == 3)
                        + ((LB_BLOCKSIZE)/2 +1)*((LB_BLOCKSIZE)/2 +1)*(zz-startZ)
#endif
                        ;

	    	  // determine the number (= number of subcell ON THE VERTEX)
	    	  int cellNumber = xx + LB_BLOCKSIZE*yy
#if (DIMENSIONS == 3)
	    	                 + LB_BLOCKSIZE*LB_BLOCKSIZE*zz
#endif
	    	                 ;

	    	  // store the number
	    	  //logDebug("createVertexGrid()", "Set entry " << entry << " in block " << block << " to cell number " << cellNumber);
	    	  vertexGrid(block)(entry) = cellNumber;
	    	}
	      }
#if (DIMENSIONS == 3)
	    }
#endif
	  }
	}
#if (DIMENSIONS == 3)
  }
#endif

  return vertexGrid;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::getVertexNumber(
  int x, int y
#if (DIMENSIONS == 3)
  , int z
#endif
) const {
#if (DIMENSIONS == 2)
  //logDebug("getVertexNumber()", "Determine vertex number for coordinates " << x << "," << y);
#elif (DIMENSIONS == 3)
  //logDebug("getVertexNumber()", "Determine vertex number for coordinates " << x << "," << y << "," << z);
#endif
  assertion ( (x > -1) && (x < 2*(((LB_BLOCKSIZE)/2 +1) ) ) );
  assertion ( (y > -1) && (y < 2*(((LB_BLOCKSIZE)/2 +1) ) ) );
#if (DIMENSIONS == 3)
  assertion ( (z > -1) && (z < 2*(((LB_BLOCKSIZE)/2 +1) ) ) );
#endif

  int xx = x/((LB_BLOCKSIZE)/2 +1) ;
  int yy = y/((LB_BLOCKSIZE)/2 +1) ;
#if (DIMENSIONS == 3)
  int zz = z/((LB_BLOCKSIZE)/2 +1) ;
#endif

#if (DIMENSIONS == 2)
  //logDebug("getVertexNumber()", "Local vertex coords: " << xx << "," << yy);
#elif (DIMENSIONS == 3)
  //logDebug("getVertexNumber()", "Local vertex coords: " << xx << "," << yy << "," << zz);
#endif

  int result = xx + 2*yy
#if (DIMENSIONS == 3)
             + 4*zz
#endif
             ;

  return result;
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::getLocalCellNumber(
  int x,int y
#if (DIMENSIONS == 3)
  ,int z
#endif
) const {
#if (DIMENSIONS == 2)
  //logDebug("getLocalCellNumber()", "Determine local cell number for coordinates " << x << "," << y);
#elif (DIMENSIONS == 3)
  //logDebug("getLocalCellNumber()", "Determine local cell number for coordinates " << x << "," << y << "," << z);
#endif
  assertion ( (x > -1) && (x < 2*(((LB_BLOCKSIZE)/2 +1) ) ) );
  assertion ( (y > -1) && (y < 2*(((LB_BLOCKSIZE)/2 +1) ) ) );
#if (DIMENSIONS == 3)
  assertion ( (z > -1) && (z < 2*(((LB_BLOCKSIZE)/2 +1) ) ) );
#endif

  int xx = x - (x/((LB_BLOCKSIZE)/2 +1) )*((LB_BLOCKSIZE)/2 +1);
  int yy = y - (y/((LB_BLOCKSIZE)/2 +1) )*((LB_BLOCKSIZE)/2 +1);
#if (DIMENSIONS == 3)
  int zz = z - (z/((LB_BLOCKSIZE)/2 +1) )*((LB_BLOCKSIZE)/2 +1);
#endif

#if (DIMENSIONS == 2)
  //logDebug("getLocalCellNumber()", "Local cell coordinates: " << xx << "," << yy);
#elif (DIMENSIONS == 3)
  //logDebug("getLocalCellNumber()", "Local cell coordinates: " << xx << "," << yy << "," << zz);
#endif

  int localIndex = xx + ((LB_BLOCKSIZE)/2 +1)*yy
#if (DIMENSIONS == 3)
                 + ((LB_BLOCKSIZE)/2 +1)*((LB_BLOCKSIZE)/2 +1)*zz
#endif
                 ;
  //logDebug("getLocalCellNumber()", "This yields the index: " << localIndex);

  return localIndex;
}



int peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::getVertexGrid(int vertexNumber,int localCellNumber) const {
  return _vertexGrid(vertexNumber)(localCellNumber);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::findCellsOfNeighbouredVertices4OddBlockSize(
int vertex1, int vertex2,
std::vector< tarch::la::Vector<3,int> > &vec) const {

  assertion1(vertex1 < vertex2, "Vertex 1 has always to be smaller than vertex 2");
  tarch::la::Vector<DIMENSIONS,int> vertex1Coords(0);
  tarch::la::Vector<DIMENSIONS,int> vertex2Coords(0);
  const peano::applications::latticeboltzmann::LatticeVelocities<LB_CURRENT_DIR> latVel(createLatticeVelocities<LB_CURRENT_MODEL,LB_CURRENT_DIR>());
  int helpVertex1Coords = vertex1;
  int helpVertex2Coords = vertex2;

  //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()", "Determine vertex coordinates for vertices " << vertex1 << "," << vertex2);
  for (int d = DIMENSIONS-1; d > -1; d--){
	vertex1Coords(d) = helpVertex1Coords/tarch::la::aPowI(d,2);
	helpVertex1Coords -= vertex1Coords(d)*tarch::la::aPowI(d,2);
	vertex2Coords(d) = helpVertex2Coords/tarch::la::aPowI(d,2);
	helpVertex2Coords -= vertex2Coords(d)*tarch::la::aPowI(d,2);
  }
  //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()", "Vertex1: " << vertex1Coords << " Vertex2: " << vertex2Coords);


#if (DIMENSIONS == 3)
  for (int z = 0; z < ((LB_BLOCKSIZE)/2 +1); z++){
#endif
	for (int y = 0; y < ((LB_BLOCKSIZE)/2 +1); y++){
      for (int x = 0; x < ((LB_BLOCKSIZE)/2 +1); x++){
    	// determine index in the _vertexGrid
    	int index1 = x + ((LB_BLOCKSIZE)/2 +1)*y
#if (DIMENSIONS == 3)
    	          + ((LB_BLOCKSIZE)/2 +1)*((LB_BLOCKSIZE)/2 +1)*z
#endif
    	          ;

    	//logDebug("findCellsOfNeighbouredVertices4OddBlockSize()", "Look at block " << index1);

    	// loop over all lattice velocities
    	for (int i = 0; i < LB_CURRENT_DIR; i++){
    	  // determine local neighbour coordinates on the cell grid
    	  int xNeighbour = x + (int)latVel._entries[i](0) + vertex1Coords(0)*((LB_BLOCKSIZE)/2 +1);
    	  int yNeighbour = y + (int)latVel._entries[i](1) + vertex1Coords(1)*((LB_BLOCKSIZE)/2 +1);
#if (DIMENSIONS == 3)
    	  int zNeighbour = z + (int)latVel._entries[i](2) + vertex1Coords(2)*((LB_BLOCKSIZE)/2 +1);
#endif
#if (DIMENSIONS == 2)
    	  //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()", "Neigbhour coords for pdf " << i << ": " << xNeighbour << "," << yNeighbour);
#elif (DIMENSIONS == 3)
    	  //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()", "Neigbhour coords for pdf " << i << ": " << xNeighbour << "," << yNeighbour << "," << zNeighbour);
#endif

    	  // if the corresponding cell is still inside the cell domain, go on
    	  if (   (xNeighbour > -1) && (xNeighbour < 2*((LB_BLOCKSIZE)/2 +1) )
    		  && (yNeighbour > -1) && (yNeighbour < 2*((LB_BLOCKSIZE)/2 +1) )
#if (DIMENSIONS == 3)
              && (zNeighbour > -1) && (zNeighbour < 2*((LB_BLOCKSIZE)/2 +1) )
#endif
          ) {
    		//logDebug("findCellsOfNeighbouredVertices4OddBlockSize()","Coordinates in suitable range; determine vertex number of neighbour");
    	    // determine the vertex number to which the pdf i would be streamed
    	    int vertexNumber = getVertexNumber(
	                             xNeighbour,yNeighbour
#if (DIMENSIONS == 3)
	                             ,zNeighbour
#endif
  	                           );
    	    //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()","Vertex number: " << vertexNumber);

    	    // if it is the right vertex...
    	    if (vertexNumber == vertex2){
    	      //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()","This corresponds to vertex no. 2. Go on...");

    		  // determine the cell number on this vertex
        	  int index2 = getLocalCellNumber(
        			         xNeighbour,yNeighbour
#if (DIMENSIONS == 3)
         			         ,zNeighbour
#endif
        			       );
        	  //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()","Cell number on this vertex: " << index2);

        	  // find out if this pdf has already or will soon be streamed
        	  int planeCoords = 2*((LB_BLOCKSIZE)/2 +1) - 1;
        	  // determine original coordinates on the cell grid
        	  int xOriginal = x + vertex1Coords(0)*((LB_BLOCKSIZE)/2 +1);
        	  int yOriginal = y + vertex1Coords(1)*((LB_BLOCKSIZE)/2 +1);
#if (DIMENSIONS == 3)
        	  int zOriginal = z + vertex1Coords(2)*((LB_BLOCKSIZE)/2 +1);
#endif

        	  if (   ((xOriginal == planeCoords) && (xNeighbour == planeCoords))
        		  || ((yOriginal == planeCoords) && (yNeighbour == planeCoords))
#if (DIMENSIONS == 3)
                  || ((zOriginal == planeCoords) && (zNeighbour == planeCoords))
#endif
              ){
        	    //logDebug("findCellsOfNeighbouredVertices4OddBlockSize()","This vertex pair is at the last coordinates in x-,y- or z-direction. No streaming needed!");
        	  } else {
        		//logDebug("findCellsOfNeighbouredVertices4OddBlockSize()","Valid vertex pair. Append indices");
            	// set up the vector with index1 (original cell), index2(cell to which pdf i is streamed to)
            	// and pdf no. i
            	tarch::la::Vector<3,int> buffer(_vertexGrid(vertex1)(index1),_vertexGrid(vertex2)(index2),i);

            	// push_back vector
            	vec.push_back(buffer);
        	  }
    	    }
    	  }
    	} // loop pdfs
      }
	}
#if (DIMENSIONS == 3)
  }
#endif

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::findCellsOfNeighbouredVertices4EvenBlockSize(
int vertex1, int vertex2,
std::vector< tarch::la::Vector<3,int> > &vec) const {

  assertion1(vertex1 < vertex2, "Vertex 1 has always to be smaller than vertex 2");
  tarch::la::Vector<DIMENSIONS,int> vertex1Coords(0);
  tarch::la::Vector<DIMENSIONS,int> vertex2Coords(0);
  const peano::applications::latticeboltzmann::LatticeVelocities<LB_CURRENT_DIR> latVel(createLatticeVelocities<LB_CURRENT_MODEL,LB_CURRENT_DIR>());
  int helpVertex1Coords = vertex1;
  int helpVertex2Coords = vertex2;
  tarch::la::Vector<DIMENSIONS,int> start(0);
  tarch::la::Vector<DIMENSIONS,int> end(0);

  //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()", "Determine vertex coordinates for vertices " << vertex1 << "," << vertex2);
  for (int d = DIMENSIONS-1; d > -1; d--){
	vertex1Coords(d) = helpVertex1Coords/tarch::la::aPowI(d,2);
	helpVertex1Coords -= vertex1Coords(d)*tarch::la::aPowI(d,2);
	vertex2Coords(d) = helpVertex2Coords/tarch::la::aPowI(d,2);
	helpVertex2Coords -= vertex2Coords(d)*tarch::la::aPowI(d,2);

	if (vertex1Coords(d)>0){
	  start(d) = 0;
	  end(d) = ((LB_BLOCKSIZE)/2 +1)-1;
	} else {
	  start(d) = 1;
	  end(d) = ((LB_BLOCKSIZE)/2 +1);
	}
  }
  //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()", "Vertex1: " << vertex1Coords << " Vertex2: " << vertex2Coords);
  //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()", "Start and end coords for loop: " << start << "," << end);

  // only loop over INNER cells, i.e. all subcells that are completely contained inside one real grid cell
#if (DIMENSIONS == 3)
  for (int z = start(2); z < end(2); z++){
#endif
	for (int y = start(1); y < end(1); y++){
      for (int x = start(0); x < end(0); x++){

    	// determine index in the _vertexGrid
    	int index1 = x + ((LB_BLOCKSIZE)/2 +1)*y
#if (DIMENSIONS == 3)
    	          + ((LB_BLOCKSIZE)/2 +1)*((LB_BLOCKSIZE)/2 +1)*z
#endif
    	          ;

    	//logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()", "Look at block " << index1);

    	// loop over all lattice velocities
    	for (int i = 0; i < LB_CURRENT_DIR; i++){
    	  // determine local neighbour coordinates on the cell grid
    	  int xNeighbour = x + (int)latVel._entries[i](0) + vertex1Coords(0)*((LB_BLOCKSIZE)/2 +1);
    	  int yNeighbour = y + (int)latVel._entries[i](1) + vertex1Coords(1)*((LB_BLOCKSIZE)/2 +1);
#if (DIMENSIONS == 3)
    	  int zNeighbour = z + (int)latVel._entries[i](2) + vertex1Coords(2)*((LB_BLOCKSIZE)/2 +1);
#endif

#if (DIMENSIONS == 2)
    	  //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()", "Neigbhour coords for pdf " << i << ": " << xNeighbour << "," << yNeighbour);
#elif (DIMENSIONS == 3)
    	  //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()", "Neigbhour coords for pdf " << i << ": " << xNeighbour << "," << yNeighbour << "," << zNeighbour);
#endif

    	    // determine the vertex number to which the pdf i would be streamed
    	    int vertexNumber = getVertexNumber(
	                             xNeighbour,yNeighbour
#if (DIMENSIONS == 3)
	                             ,zNeighbour
#endif
  	                           );

    	    //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()","Vertex number: " << vertexNumber);

    	    // if it is the right vertex...
    	    if (vertexNumber == vertex2){

    		  //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()","This corresponds to vertex no. 2. Go on...");
    		  // determine the cell number on this vertex
        	  int index2 = getLocalCellNumber(
        	                 xNeighbour,yNeighbour
#if (DIMENSIONS == 3)
         		  	         ,zNeighbour
#endif
        			       );

        	  //logDebug("findCellsOfNeighbouredVertices4EvenBlockSize()","Cell number on this vertex: " << index2);

        	  // set up the vector with index1 (original cell), index2(cell to which pdf i is streamed to)
        	  // and pdf no. i
        	  tarch::la::Vector<3,int> buffer(_vertexGrid(vertex1)(index1),_vertexGrid(vertex2)(index2),i);

        	  // push_back vector
        	  vec.push_back(buffer);
    	    }
    	} // loop pdfs
      }
	}
#if (DIMENSIONS == 3)
  }
#endif

}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::findCellsOfNeighbouredVertices(
int vertex1, int vertex2,
std::vector< tarch::la::Vector<3,int> > &vec) const {

  if (LB_BLOCKSIZE % 2 == 0){
    findCellsOfNeighbouredVertices4EvenBlockSize(vertex1,vertex2,vec);
  } else {
    findCellsOfNeighbouredVertices4OddBlockSize(vertex1,vertex2,vec);
  }
}


std::vector<tarch::la::Vector<5,int> >
peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
CellTopology::getNonLocalStreamingIndex() const {
  std::vector<tarch::la::Vector<5,int> > index;
  for (int i = 0; i < TWO_POWER_D; i++){
	for (int j = i+1; j < TWO_POWER_D; j++){
      std::vector< tarch::la::Vector<3,int> > vec;
      tarch::la::Vector<5,int> buffer(0);
      buffer(0) = i;
      buffer(1) = j;

      // fill vector vec with all streaming operations between vertex i and vertex j
      findCellsOfNeighbouredVertices(i,j,vec);

      // append all streaming operations to the index
      for (unsigned int k = 0; k < vec.size(); k++){
    	  for (unsigned int l = 0; l < 3; l++){
    	    buffer[2+l] = vec[k](l);
    	  }
    	  index.push_back(buffer);
      }
	}
  }

#if Debug
  //logDebug("getNonLocalStreamingIndex()","Non-Local streaming index:");
  for (unsigned int i = 0; i < index.size(); i++){
    //logDebug("getNonLocalStreamingIndex()", index[i](0) << "," << index[i](1) << "," << index[i](2) << "," << index[i](3) << "," << index[i](4));
  }
  //logDebug("getNonLocalStreamingIndex()","Non-Local streaming index(end)");
#endif

  return index;
}
