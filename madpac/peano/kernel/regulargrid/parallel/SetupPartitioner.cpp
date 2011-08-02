#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"

#include "peano/utils/Loop.h"

/**
 * I wanna be able to translate the partitioner without the MPI libraries. Thus,
 * these includes are protected.
 */
#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#endif


tarch::logging::Log peano::kernel::regulargrid::parallel::SetupPartitioner::_log( "peano::kernel::regulargrid::parallel::SetupPartitioner" );


peano::kernel::regulargrid::parallel::SetupPartitioner::SetupPartitioner(
  const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints,
  int numberOfParallelNodes
):
  _numberOfCells( numberOfGridPoints-1 ),
  _numberOfParallelNodes(numberOfParallelNodes),
  _ranks() {
}


peano::kernel::regulargrid::parallel::SetupPartitioner::~SetupPartitioner() {
}


void peano::kernel::regulargrid::parallel::SetupPartitioner::initDatatypes() {
  #ifdef Parallel
  assertion(peano::kernel::regulargrid::parallel::messages::ForkMessage::Datatype==0);
  peano::kernel::regulargrid::parallel::messages::ForkMessage::initDatatype();
  #endif
}


void peano::kernel::regulargrid::parallel::SetupPartitioner::shutdownDatatypes() {
  #ifdef Parallel
  assertion(peano::kernel::regulargrid::parallel::messages::ForkMessage::Datatype!=0);
  peano::kernel::regulargrid::parallel::messages::ForkMessage::shutdownDatatype();
  peano::kernel::regulargrid::parallel::messages::ForkMessage::Datatype = 0;
  #endif
}


tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::parallel::SetupPartitioner::getParallelTopology() const {
  tarch::la::Vector<DIMENSIONS,int> result(1);
  int k = 0;

  //Increase nodes along dimensions as long as we can increase one without exceeding the number of nodes.
  do {
    //Insertionsort for number of nodes in each dimension
    int dimensions[DIMENSIONS];
    for ( int d=0; d < DIMENSIONS; d++ ){
      dimensions[d] = d;
    }
    for ( int d=0; d < DIMENSIONS; d++ ){
      int dimensionValue = result(dimensions[d]);
      int i = d;
      while( i > 0 && result(dimensions[i-1]) > dimensionValue ){
        dimensions[i] = dimensions[i-1];
        dimensions[i-1] = d;
        i = i-1;
      }
    }

    //Try to increase kth smallest dimension
    int minimalDimension = dimensions[k];
    tarch::la::Vector<DIMENSIONS,int> nextResult = result;
    nextResult(minimalDimension)++;
    if ( tarch::la::volume(nextResult) <= _numberOfParallelNodes ) {
      result = nextResult;
      k = 0;
    } else {
      k++;
    }

    //TODO unterweg Debug
//    std::cout << "parallelTopology=" << result << std::endl;
  } while( k < DIMENSIONS );

  //TODO unterweg Debug
//  std::cout << "returning parallelTopology=" << result << " for _numberOfParallelNodes=" << _numberOfParallelNodes << std::endl;

  return result;
}


tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::parallel::SetupPartitioner::getSizeOfPartition(
  const tarch::la::Vector<DIMENSIONS,int>& partition
) const {
  assertion(isPartitionIndex(partition));

  tarch::la::Vector<DIMENSIONS,int> result;

  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = _numberOfCells(d) / getParallelTopology()(d);
    int carryover = _numberOfCells(d) - getParallelTopology()(d) * result(d);
    assertion( carryover>=0 );
    if (carryover > partition(d) ) {
      result(d)++;
    }
  }

  return result;
}


tarch::la::Vector<DIMENSIONS,int> peano::kernel::regulargrid::parallel::SetupPartitioner::getOffsetOfPartition(
  const tarch::la::Vector<DIMENSIONS,int>& partition
) const {
  assertion(isPartitionIndex(partition));

  tarch::la::Vector<DIMENSIONS,int> result;

  for (int d=0; d<DIMENSIONS;d++) {
    int cellsPerDimensionWithoutCarryOver = _numberOfCells(d) / getParallelTopology()(d);
    int totalCarryover = _numberOfCells(d) - cellsPerDimensionWithoutCarryOver * getParallelTopology()(d);
    assertion2(totalCarryover<getParallelTopology()(d),totalCarryover,cellsPerDimensionWithoutCarryOver);
    if (partition(d) < totalCarryover) {
      totalCarryover = partition(d);
    }
    result(d) = cellsPerDimensionWithoutCarryOver * partition(d) + totalCarryover;
  }

  return result;
}


bool peano::kernel::regulargrid::parallel::SetupPartitioner::isPartitionIndex(const tarch::la::Vector<DIMENSIONS,int>& partition) const {
  bool result = true;

  for (int d=0; d<DIMENSIONS; d++) {
    result &= partition(d)>=0;
    result &= partition(d)<getParallelTopology()(d);
  }

  return result;
}


int peano::kernel::regulargrid::parallel::SetupPartitioner::getFlattenedPartitionIndex(const tarch::la::Vector<DIMENSIONS,int>& partition) const {
  assertion(isPartitionIndex(partition));

  int result = 0;
  int base   = 1;
  for (int d=0; d<DIMENSIONS; d++) {
    result += partition(d) * base;
    base   *= getParallelTopology()(d);
  }
  return result;
}


peano::kernel::regulargrid::parallel::messages::ForkMessage peano::kernel::regulargrid::parallel::SetupPartitioner::getForkMessage(
  const tarch::la::Vector<DIMENSIONS,int>&     partition,
  const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
  const tarch::la::Vector<DIMENSIONS,double>&  h
) const {
  assertion( _ranks.size()>0 );
  assertion(isPartitionIndex(partition));

  logTraceInWith4Arguments( "getForkMessage(...)", partition, domainOffset, h, getOffsetOfPartition(partition) );

  peano::kernel::regulargrid::parallel::messages::ForkMessage result;

  result.setNeighbourRanks(tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>(-2));
  result.setH(h);
  result.setNumberOfGridPoints(getSizeOfPartition(partition)+1);

  tarch::la::Vector<DIMENSIONS,double> offset;
  for (int d=0; d<DIMENSIONS; d++) {
    offset(d) = getOffsetOfPartition(partition)(d);
    offset(d) = offset(d) * h(d) + domainOffset(d);
  }
  result.setDomainOffset(offset);

  int i=0;
  dfor(k,2) {
    dfor(j,2) {
      tarch::la::Vector<DIMENSIONS,int> currentNeighbourPartition;
      currentNeighbourPartition = k+j-1+partition;
      if (isPartitionIndex(currentNeighbourPartition)) {
        int neighbourRank = _ranks[getFlattenedPartitionIndex(currentNeighbourPartition)];
        result.setNeighbourRanks(i,neighbourRank);
      }
      else {
        result.setNeighbourRanks(i,-1);
      }
      i++;
    }
  }

  logTraceOutWith1Argument( "getForkMessage(...)", result.toString() );

  return result;
}


void peano::kernel::regulargrid::parallel::SetupPartitioner::reserveNodes() {
  #ifdef Parallel
  logTraceIn( "reserveNodes()" );
  assertion(tarch::la::volume(getParallelTopology())<=tarch::parallel::Node::getInstance().getNumberOfNodes() );
  assertion(peano::kernel::regulargrid::parallel::messages::ForkMessage::Datatype!=0);

  _ranks.resize(tarch::la::volume(getParallelTopology()));

  bool isFirstSubpartition = true;
  dfor(i,getParallelTopology()) {
    if (isFirstSubpartition) {
      _ranks[ getFlattenedPartitionIndex(i) ] = tarch::parallel::Node::getInstance().getRank();
      assertionEquals(_ranks[ getFlattenedPartitionIndex(i) ],tarch::parallel::Node::getMasterProcessRank());
      isFirstSubpartition=false;
    }
    else {
      int newWorker = tarch::parallel::NodePool::getInstance().reserveFreeNode();
      if (newWorker==tarch::parallel::NodePool::NoFreeNodesMessage) {
        logError(
          "reserveNodes()",
          "was not able to book a node from the node pool despite the fact that I only needed "
          << tarch::la::volume(getParallelTopology()) << " nodes and there should be "
          << tarch::parallel::Node::getInstance().getNumberOfNodes() << " node(s) available"
        );
        exit(-1);
      }
      _ranks[ getFlattenedPartitionIndex(i) ] = newWorker;
    }
    logDebug( "reserveNodes()", "assigned partition " << i << " to node " << _ranks[ getFlattenedPartitionIndex(i) ] );
  }
  logTraceOut( "reserveNodes()" );
  #endif
}


peano::kernel::regulargrid::parallel::messages::ForkMessage peano::kernel::regulargrid::parallel::SetupPartitioner::sendForkMessages(
  const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
  const tarch::la::Vector<DIMENSIONS,double>&  h
) {
  peano::kernel::regulargrid::parallel::messages::ForkMessage result;

  #ifdef Parallel
  bool isFirstMessage = true;
  dfor(i,getParallelTopology()) {
    peano::kernel::regulargrid::parallel::messages::ForkMessage message =
      getForkMessage(i,domainOffset,h);
    if (isFirstMessage) {
      result         = message;
      isFirstMessage = false;
    }
    else {
      message.send(_ranks[getFlattenedPartitionIndex(i)],tarch::parallel::NodePool::getInstance().getTagForForkMessages());
    }
  }
  #endif

  return result;
}


tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::parallel::SetupPartitioner::getDomainSizeOfForkMessage( const peano::kernel::regulargrid::parallel::messages::ForkMessage& forkMessage ) {
  tarch::la::Vector<DIMENSIONS,double> result;

  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = forkMessage.getNumberOfGridPoints(d)-1;
    result(d) *= forkMessage.getH(d);
  }
  return result;
}

