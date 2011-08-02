// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_PARALLEL_SETUPPARTITIONER_H_
#define _PEANO_KERNEL_REGULARGRID_PARALLEL_SETUPPARTITIONER_H_


#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "peano/utils/Globals.h"
#include "peano/kernel/regulargrid/parallel/messages/ForkMessage.h"

#include <vector>

namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace parallel {
        class SetupPartitioner;
        namespace tests {
          class SetupPartitionerTest;
        }
      }
    }
  }
}


/**
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::regulargrid::parallel::SetupPartitioner {
  private:
    friend class tests::SetupPartitionerTest;

    static tarch::logging::Log _log;

    /**
     * Number of grid points per dimension, i.e. this number minus one
     * represents the number of cells per dimension.
     *
     * The init is done in the constructor.
     */
    tarch::la::Vector<DIMENSIONS,int> _numberOfCells;

    /**
     * Usually taken from the node instance, but I wanna test this independently
     * of MPI.
     */
    int _numberOfParallelNodes;

    /**
     * Is filled by reserveNodes().
     */
    std::vector<int> _ranks;

    /**
     * Returns an integer valued vector that represents the domain
     * decomposition, i.e. the topology of the ranks.
     */
    tarch::la::Vector<DIMENSIONS,int> getParallelTopology() const;

    /**
     * Returns the size of the partition, i.e. the number of cells along each
     * coordinate axis.
     */
    tarch::la::Vector<DIMENSIONS,int> getSizeOfPartition(const tarch::la::Vector<DIMENSIONS,int>& partition) const;

    tarch::la::Vector<DIMENSIONS,int> getOffsetOfPartition(const tarch::la::Vector<DIMENSIONS,int>& partition) const;

    /**
     * The partitions are enumerated lexicographically, and this operation
     * returns the index of one partition.
     */
    int getFlattenedPartitionIndex(const tarch::la::Vector<DIMENSIONS,int>& partition) const;
    bool isPartitionIndex(const tarch::la::Vector<DIMENSIONS,int>& partition) const;

    /**
     * Create Fork Message
     *
     * Creates the fork message for one partition. Before, reserveNodes() has to
     * be called. Otherwise, the operation doesn't know which nodes are
     * neighbours to each other.
     */
    peano::kernel::regulargrid::parallel::messages::ForkMessage getForkMessage(
      const tarch::la::Vector<DIMENSIONS,int>&     partition,
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      const tarch::la::Vector<DIMENSIONS,double>&  h
    ) const;
  public:
    /**
     * Constructor
     *
     * @param numberOfParallelNodes Typically, just pass $tarch::parallel::Node::getInstance().getNumberOfNodes()$.
     *                              However, I didn't want to hardcode this
     *                              value as the unit tests play around with
     *                              different "node numbers".
     */
    SetupPartitioner(const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints, int numberOfParallelNodes);
    virtual ~SetupPartitioner();

    void reserveNodes();

    /**
     * Sends out all the fork messages and returns the one that identifies the
     * domain that is to be handled locally.
     */
    peano::kernel::regulargrid::parallel::messages::ForkMessage sendForkMessages(
      const tarch::la::Vector<DIMENSIONS,double>&  domainOffset,
      const tarch::la::Vector<DIMENSIONS,double>&  h
    );

    /**
     * Init MPI Datatypes
     *
     * The static partitioner needs MPI messages to set up the initial workload
     * distribution. The corresponding messages have to be initialised by this
     * operation.
     *
     * I made this operation protected by -DParallel guards. This way, I can
     * translate regulargrid's parallel directory even if MPI ain't included.
     */
    static void initDatatypes();
    static void shutdownDatatypes();

    static tarch::la::Vector<DIMENSIONS,double> getDomainSizeOfForkMessage( const peano::kernel::regulargrid::parallel::messages::ForkMessage& forkMessage );
};

#endif
