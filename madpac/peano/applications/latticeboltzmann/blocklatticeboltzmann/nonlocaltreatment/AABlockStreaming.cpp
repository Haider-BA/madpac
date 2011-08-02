#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/AABlockStreaming.h"


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
AABlockStreaming::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::AABlockStreaming"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
AABlockStreaming::AABlockStreaming():
_indexForLocalStreaming(createIndexForLocalStreaming()),
_indexForNonLocalStreaming(createIndexForNonLocalStreaming()),
_swappings(createSwappings()){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
AABlockStreaming::streamingLocal(
const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
) const {

  double swap = 0.0;

  // first: run over all pdfs in the local block and stream for all cells
  logDebug("streamingLocal()", "Swap local pdfs");
  for (unsigned int i = 0; i < _indexForLocalStreaming.size(); i++){
    const unsigned short int index = inner[_indexForLocalStreaming[i](2)] + 2*inner[_indexForLocalStreaming[i](3)];
    _swappings[index]->swap(pdf(_indexForLocalStreaming[i](0)), pdf(_indexForLocalStreaming[i](1)), swap);
  }
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
AABlockStreaming::streamingNonLocal(
const tarch::la::Vector< TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* >& pdf
) const {

  // do the non-local streaming for all non-outer cells
  double swap = 0.0;
  for (unsigned int i = 0; i < _indexForNonLocalStreaming.size(); i++){
    const unsigned short int index =   (*inner(_indexForNonLocalStreaming[i](0)))[_indexForNonLocalStreaming[i](2)]
                                   + 2*(*inner(_indexForNonLocalStreaming[i](1)))[_indexForNonLocalStreaming[i](3)];
    _swappings[index]->swap(
      (*pdf(_indexForNonLocalStreaming[i](0)))(_indexForNonLocalStreaming[i](2)*LB_CURRENT_DIR+_indexForNonLocalStreaming[i](4)),
      (*pdf(_indexForNonLocalStreaming[i](1)))(_indexForNonLocalStreaming[i](3)*LB_CURRENT_DIR+(LB_CURRENT_DIR-1-_indexForNonLocalStreaming[i](4))),
      swap
    );
  }
}


// TEST REFERENCE
//void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
//AABlockStreaming::streamingNonLocal(
//const tarch::la::Vector< TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
//tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* >& pdf
//) const {
//
//  // do the non-local streaming for all non-outer cells
//  double swap = 0.0;
//  for (unsigned int i = 0; i < _indexForNonLocalStreaming.size(); i++){
//    const unsigned short int index =   (*inner(_indexForNonLocalStreaming[i](0)))[_indexForNonLocalStreaming[i](2)]
//                                   + 2*(*inner(_indexForNonLocalStreaming[i](1)))[_indexForNonLocalStreaming[i](3)];
//    _swappings[index]->swap(
//      (*pdf(_indexForNonLocalStreaming[i](0)))(_indexForNonLocalStreaming[i](2)*LB_CURRENT_DIR+_indexForNonLocalStreaming[i](4)),
//      (*pdf(_indexForNonLocalStreaming[i](1)))(_indexForNonLocalStreaming[i](3)*LB_CURRENT_DIR+(LB_CURRENT_DIR-1-_indexForNonLocalStreaming[i](4))),
//      swap
//    );
//  }
//}




void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
AABlockStreaming::swapPdfsInsideCells(
tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
) const {
  // do local swapping of pdf i and its inverse inv(i)
  double swap = 0.0;
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS; i++){
	  for (int p = 0; p < LB_CURRENT_DIR/2; p++){
	    swap = pdf(i*LB_CURRENT_DIR+p);
	    pdf(i*LB_CURRENT_DIR+p) = pdf(i*LB_CURRENT_DIR + (LB_CURRENT_DIR-1-p));
	    pdf(i*LB_CURRENT_DIR+(LB_CURRENT_DIR-1-p)) = swap;
	  }
  }
}



const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping* >
peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::AABlockStreaming::createSwappings() const {
  std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping* > swappings;
  swappings.push_back(&_noAAStreaming);
  swappings.push_back(&_noAAStreaming);
  swappings.push_back(&_noAAStreaming);
  // only swapping, if inner[cell1] && inner[cell2]
  swappings.push_back(&_aaStreaming);
  return swappings;
}



std::vector< tarch::la::Vector<4,int> >
peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
AABlockStreaming::createIndexForLocalStreaming() const{
  std::vector< tarch::la::Vector<4,int> > streamPdf;
  tarch::la::Vector<LB_CURRENT_DIR*LB_BLOCK_NUMBER_OF_CELLS,bool> streamPdfBool = false;
  const peano::applications::latticeboltzmann::LatticeVelocities<LB_CURRENT_DIR> latVel(createLatticeVelocities<LB_CURRENT_MODEL,LB_CURRENT_DIR>());

  int cellIndex = 0;
  int neighbourIndex = 0;
  bool isStreamed = true;
  tarch::la::Vector<4,int> buffer = 0;


#if (DIMENSIONS == 3)
  for (int z = 0; z < LB_BLOCKSIZE; z++){
#endif
	for (int y = 0; y < LB_BLOCKSIZE;y++){
	  for (int x = 0; x < LB_BLOCKSIZE; x++){

		// determine local cell index
		cellIndex = x + LB_BLOCKSIZE*y
#if (DIMENSIONS == 3)
		          + z*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
		          ;

		for (int pdf = 0; pdf < LB_CURRENT_DIR; pdf++){

		  // determine index of neighbour cell to which pdf is streamed to
		  neighbourIndex = (x+(int)latVel._entries[pdf][0])
		                 + (y+(int)latVel._entries[pdf][1])*LB_BLOCKSIZE
#if (DIMENSIONS == 3)
		                 + (z+(int)latVel._entries[pdf][2])*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
		                 ;

		  // determine whether the pdf is streamed inside the local block or not
		  if (   ((x+((int)latVel._entries[pdf][0]) < 0) || (x+((int)latVel._entries[pdf][0]) > LB_BLOCKSIZE-1))
		      || ((y+((int)latVel._entries[pdf][1]) < 0) || (y+((int)latVel._entries[pdf][1]) > LB_BLOCKSIZE-1))
#if (DIMENSIONS == 3)
          || ((z+((int)latVel._entries[pdf][2]) < 0) || (z+((int)latVel._entries[pdf][2]) > LB_BLOCKSIZE-1))
#endif
          ){
			isStreamed = false;

		  // otherwise: set variable only to true, if the inverse pdf is not already assigned to
		  // the streaming process (it is also the rest population that shall not be considered in streaming!)
		  } else {
			if (streamPdfBool(neighbourIndex*LB_CURRENT_DIR+(LB_CURRENT_DIR-1-pdf))
				|| (pdf == LB_CURRENT_DIR/2)
			   ){
			  isStreamed = false;
			} else {
			  isStreamed = true;
			}
		  }

		  // if streaming shall be carried out, set the corresponding values to true
		  // and append the respective indices to the vector
		  if (isStreamed){

			  streamPdfBool(cellIndex*LB_CURRENT_DIR+pdf) = true;
			  buffer(0) = cellIndex*LB_CURRENT_DIR+pdf;
			  buffer(1) = neighbourIndex*LB_CURRENT_DIR+(LB_CURRENT_DIR-1-pdf);
			  buffer(2) = cellIndex;
			  buffer(3) = neighbourIndex;
			  streamPdf.push_back(buffer);
		  }
		}
	  }
	}
#if (DIMENSIONS == 3)
  }
#endif

  return streamPdf;
}



std::vector< tarch::la::Vector<5,int> >
peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
AABlockStreaming::createIndexForNonLocalStreaming() const {
  std::vector< tarch::la::Vector<5,int> > streamPdf;
  // instantiate cell topology and get the corresponding index structure
  peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::CellTopology cellTopology;
  streamPdf = cellTopology.getNonLocalStreamingIndex();

  return streamPdf;
}

