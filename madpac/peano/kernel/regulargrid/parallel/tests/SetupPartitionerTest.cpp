#include "peano/kernel/regulargrid/parallel/tests/SetupPartitionerTest.h"
#include "peano/kernel/regulargrid/parallel/SetupPartitioner.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif


peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest::SetupPartitionerTest():
tarch::tests::TestCase( "peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest" ) {
}


peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest::~SetupPartitionerTest() {
}


void peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest::run() {
  #ifdef Parallel
  testMethod( test2D_12x8 );
  testMethod( test2D_12x8ForkMessages );
  testMethod( test2D_400x400ForkMessages );
  #endif
}

void peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest::setUp() {
}


void peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest::test2D_12x8ForkMessages() {
  #ifdef Dim2
  tarch::la::Vector<DIMENSIONS,int> domain;
  assignList(domain) = 12,9;
  peano::kernel::regulargrid::parallel::SetupPartitioner partitioner(domain,9);

  partitioner._ranks.push_back(0);
  partitioner._ranks.push_back(1);
  partitioner._ranks.push_back(2);
  partitioner._ranks.push_back(3);
  partitioner._ranks.push_back(4);
  partitioner._ranks.push_back(5);
  partitioner._ranks.push_back(6);
  partitioner._ranks.push_back(7);
  partitioner._ranks.push_back(8);

  tarch::la::Vector<DIMENSIONS,int>     partition;
  tarch::la::Vector<DIMENSIONS,double>  domainOffset;
  tarch::la::Vector<DIMENSIONS,double>  h;

  assignList(domainOffset) = -2.0, -3.0;
  assignList(h)            =  0.4,  0.5;

  assignList(partition) = 0,0;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message00 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 1,0;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message10 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 2,0;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message20 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 0,1;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message01 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 1,1;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message11 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 2,1;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message21 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 0,2;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message02 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 1,2;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message12 =
    partitioner.getForkMessage( partition, domainOffset, h );
  assignList(partition) = 2,2;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message22 =
    partitioner.getForkMessage( partition, domainOffset, h );

  //  validateEquals( message00.getNeighbourRanks(), h );

  validateEquals( message00.getH(), h );
  validateEquals( message00.getNumberOfGridPoints()(0), 5 );
  validateEquals( message00.getNumberOfGridPoints()(1), 4 );
  validateEquals( message00.getDomainOffset()(0), domainOffset(0) + 0*h(0));
  validateEquals( message00.getDomainOffset()(1), domainOffset(1) + 0*h(1));

  validateEquals( message10.getH(), h );
  validateEquals( message10.getNumberOfGridPoints()(0), 5 );
  validateEquals( message10.getNumberOfGridPoints()(1), 4 );
  validateEquals( message10.getDomainOffset()(0), domainOffset(0) + 4*h(0));
  validateEquals( message10.getDomainOffset()(1), domainOffset(1) + 0*h(1));

  validateEquals( message20.getH(), h );
  validateEquals( message20.getNumberOfGridPoints()(0), 4 );
  validateEquals( message20.getNumberOfGridPoints()(1), 4 );
  validateEquals( message20.getDomainOffset()(0), domainOffset(0) + 8*h(0));
  validateEquals( message20.getDomainOffset()(1), domainOffset(1) + 0*h(1));

  validateEquals( message01.getH(), h );
  validateEquals( message01.getNumberOfGridPoints()(0), 5 );
  validateEquals( message01.getNumberOfGridPoints()(1), 4 );
  validateEquals( message01.getDomainOffset()(0), domainOffset(0) + 0*h(0));
  validateEquals( message01.getDomainOffset()(1), domainOffset(1) + 3*h(1));
  #endif
}


void peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest::test2D_400x400ForkMessages() {
  #ifdef Dim2
  tarch::la::Vector<DIMENSIONS,int> domain;
  assignList(domain) = 401,401;
  peano::kernel::regulargrid::parallel::SetupPartitioner partitioner(domain,2);

  partitioner._ranks.push_back(0);
  partitioner._ranks.push_back(1);

  tarch::la::Vector<DIMENSIONS,int>     partition;
  tarch::la::Vector<DIMENSIONS,double>  domainOffset;
  tarch::la::Vector<DIMENSIONS,double>  h;

  assignList(domainOffset) =  0.0,  0.0;
  assignList(h)            =  1.0/400.0,  1.0/400.0;

  assignList(partition) = 0,0;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message00 =
    partitioner.getForkMessage( partition, domainOffset, h );
  validateEquals( message00.getH(), h );
  validateEquals( message00.getNumberOfGridPoints()(0), 201 );
  validateEquals( message00.getNumberOfGridPoints()(1), 401 );
  validateEquals( message00.getDomainOffset()(0), 0.0);
  validateEquals( message00.getDomainOffset()(1), 0.0);

  assignList(partition) = 1,0;
  peano::kernel::regulargrid::parallel::messages::ForkMessage message10 =
    partitioner.getForkMessage( partition, domainOffset, h );
  validateEquals( message10.getH(), h );
  validateEquals( message10.getNumberOfGridPoints()(0), 201 );
  validateEquals( message10.getNumberOfGridPoints()(1), 401 );
  validateEquals( partitioner.getOffsetOfPartition(partition)(0), 200);
  validateEquals( partitioner.getOffsetOfPartition(partition)(1), 0);
  validateEquals( message10.getDomainOffset()(1), 0.0);
  validateEquals( message10.getDomainOffset()(0), 0.5);
  validateEquals( message10.getDomainOffset()(1), 0.0);

  #endif
}

void peano::kernel::regulargrid::parallel::tests::SetupPartitionerTest::test2D_12x8() {
  #ifdef Dim2
  tarch::la::Vector<DIMENSIONS,int> domain;
  assignList(domain) = 12,9;
  peano::kernel::regulargrid::parallel::SetupPartitioner partition0(domain,8);
  peano::kernel::regulargrid::parallel::SetupPartitioner partition1(domain,9);
  peano::kernel::regulargrid::parallel::SetupPartitioner partition2(domain,10);
  peano::kernel::regulargrid::parallel::SetupPartitioner partition3(domain,11);

  validateEquals( partition0.getParallelTopology()(0), 4 );
  validateEquals( partition0.getParallelTopology()(1), 2 );
  validateEquals( partition1.getParallelTopology()(0), 3 );
  validateEquals( partition1.getParallelTopology()(1), 3 );
  validateEquals( partition2.getParallelTopology()(0), 3 );
  validateEquals( partition2.getParallelTopology()(1), 3 );
  validateEquals( partition3.getParallelTopology()(0), 3 );
  validateEquals( partition3.getParallelTopology()(1), 3 );

  tarch::la::Vector<DIMENSIONS,int> expectedSize;
  tarch::la::Vector<DIMENSIONS,int> expectedOffset;
  tarch::la::Vector<DIMENSIONS,int> subdomain;

  assignList(expectedSize) = 4,3;
  assignList(subdomain) = 0,0;
  assignList(expectedOffset) = 0,0;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 1,0;
  assignList(expectedOffset) = 4,0;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 2,0;
  assignList(expectedSize) = 3,3;
  assignList(expectedOffset) = 8,0;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 0,1;
  assignList(expectedSize) = 4,3;
  assignList(expectedOffset) = 0,3;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 1,1;
  assignList(expectedOffset) = 4,3;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 2,1;
  assignList(expectedSize) = 3,3;
  assignList(expectedOffset) = 8,3;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 0,2;
  assignList(expectedSize) = 4,2;
  assignList(expectedOffset) = 0,6;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 1,2;
  assignList(expectedSize) = 4,2;
  assignList(expectedOffset) = 4,6;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );

  assignList(subdomain) = 2,2;
  assignList(expectedSize) = 3,2;
  assignList(expectedOffset) = 8,6;
  validateEquals( partition1.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition2.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition3.getSizeOfPartition(subdomain), expectedSize );
  validateEquals( partition1.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition2.getOffsetOfPartition(subdomain), expectedOffset );
  validateEquals( partition3.getOffsetOfPartition(subdomain), expectedOffset );
  #endif
}



#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
