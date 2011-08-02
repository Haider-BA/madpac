// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_VERTEX_H_
#define _PEANO_KERNEL_SPACETREE_GRID_VERTEX_H_


#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"
#include "peano/utils/PeanoOptimisations.h"


#include <set>


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      template <class VertexData>
      class Vertex;

      namespace tests {
        class SetCounterTest;
      }
    }
  }
}


/**
 * This class is the base class of all trivialgrid vertices, i.e. the
 * application's vertex class extends this class. AbstractTrivialgridVertex is
 * to be passed the record type generated by DaStGen.
 *
 * @author Tobias Weinzierl
 */
template <class VertexData>
class peano::kernel::spacetreegrid::Vertex {
  public:
    #if defined(StoreOnlyPersistentAttributes) && defined(PackedRecords)
    typedef typename VertexData::Packed::PersistentRecords  PersistentVertex;
    #endif

    #if !defined(StoreOnlyPersistentAttributes) && defined(PackedRecords)
    typedef typename VertexData::Packed                     PersistentVertex;
    #endif

    #if defined(StoreOnlyPersistentAttributes) && !defined(PackedRecords)
    typedef typename VertexData::PersistentRecords          PersistentVertex;
    #endif

    #if !defined(StoreOnlyPersistentAttributes) && !defined(PackedRecords)
    typedef VertexData                                      PersistentVertex;
    #endif

    #ifdef Parallel
    /**
     * This operation is robust, i.e. you can call it several times.
     */
    static void initDatatype();
    #endif

    #if defined(ParallelExchangePackedRecords)
    typedef typename VertexData::Packed       MPIDatatypeContainer;
    #else
    typedef VertexData                        MPIDatatypeContainer;
    #endif

    typedef VertexData                                      Records;

  private:
    friend class peano::kernel::spacetreegrid::tests::SetCounterTest;

  protected:
    VertexData _vertexData;

    /**
     * Standard constructor.
     *
     * The created vertex by default is an outer vertex, and it is not
     * persistent, i.e. a hanging node.
     */
    Vertex();

    Vertex(const PersistentVertex& argument);

  public:
    ~Vertex();

    /**
     * Proxy.
     */
    std::string toString() const;

    /**
     * Proxy.
     */
    void toString(std::ostream& out) const;

    /**
     * A freshly generated vertex is a hanging node. You can however switch its
     * state to non-hanging with this operation.
     */
    void switchToNonhangingNode();

    /**
     * Is vertex outside, i.e. can we perhaps skip to invoke any events?
     */
    bool isOutside() const;
    bool isBoundary() const;
    bool isInside() const;
    bool isHangingNode() const;

    /**
     * Make vertex be inside or on the boundary of the domain.
     *
     * Means that the vertex either is inside or at the boundary of the domain.
     * This implies that the events for this vertex have to be called and that
     * there is at least one adjacent cell inside the domain, too.
     *
     * @image html ../gridinterface/geometry-vertex-inside-outside.png
     *
     */
    void switchToInside();

    /**
     * Make vertex be outside the domain.
     *
     * Means that the vertex is outside and this implies that the events for
     * this vertex are not called anymore. Furthermore, none of the adjacent
     * cells is inside the domain, too.
     *
     * @image html ../gridinterface/geometry-vertex-inside-outside.png
     *
     */
    void switchToOutside();

    /**
     * Well, that works always.
     */
    void switchToBoundary();

    typename Records::RefinementControl getRefinementControl() const;
    int                                 getMaximumSubtreeHeight() const;


    /**
     * @return The persistent subattributes of the vertex.
     */
    PersistentVertex getRecords() const;


    /**
     * Refine Vertex
     *
     * Refine all adjacent elements along every axis. If this operation is
     * called on a vertex that does not correspond to fine grid vertex, i.e. a
     * vertex not having the state unrefined, the operation degenerates to nop.
     *
     * The refinement will not happen immediately but in the next iteration.
     */
    void refine();

    /**
     * Counterpart of refine().
     */
    void erase();

    /**
     * @return Has done a transition.
     */
    bool switchRefinementTriggeredToRefining();

    /**
     * @return Has done a transition.
     */
    bool switchEraseTriggeredToErasing();

    /**
     * Switch refinement flags
     *
     * There are two operations that indicate a transient state: refining and
     * erasing. These states are set whenever the code reads data with a
     * triggered state from the input stack to indicate that now the vertex
     * really is refined. Before somebody writes back such vertices to the
     * output stacks, it has to switch refining to refined or erasing to
     * unrefined, respectively. This operation does this.
     */
    void updateTransientRefinementFlagsBeforeVertexIsStoredToOutputStack();

    /**
     * If we just use Peano's refinement facilities, the following scenario
     * often occurs: Two patches are refined and spread in space. At some
     * point, they becomes adjacent to each other. However, the coarse
     * vertices along the boundary are not refined. And they won't be refined
     * as the solution is rather smooth along the patch interface. However,
     * these hanging node pollute the solution. Consequently, I introdcued a
     * counter for each node that counts how many of the adjacent cells are
     * refined. Before I store the vertex, it is checked whether this counter
     * equals @f$ 2^d @f$ and whether the vertex is unrefined. In this case, I
     * trigger a refinement.
     *
     * @image html hanging-nodes-in-patches.png
     */
    void clearCounterOfAdjacentRefinedCells();

    /**
     * @see clearCounterOfAdjacentRefinedCells()
     */
    void incCounterOfAdjacentRefinedCells();

    /**
     * @see clearCounterOfAdjacentRefinedCells()
     */
    void refineVertexIfItHasOnlyRefinedAdjacentCells();

    #ifdef Debug
    /**
     * Returns the position of the vertex in debug mode, i.e. the operation is
     * not available in the release mode. If you need the vertex's position
     * outside an assertion guarded by a ifdef Debug, you have to recalculate
     * the position manually.
     */
    tarch::la::Vector<DIMENSIONS,double> getX() const;

    int getLevel() const;

    /**
     * Set the vertex's position
     *
     * This position is stored persistently only if we are in debug mode. Here,
     * it acts as validation field.
     */
    void setPosition( const tarch::la::Vector<DIMENSIONS,double>&  x, int level );

    #endif

    #ifdef Parallel
    /**
     * This operation is used by the send and receive buffers and should not
     * be used by other components of Peano.
     */
    void setVertexData(const VertexData& vertexData);

    /**
     * This operation is used by the send and receive buffers and should not
     * be used by other components of Peano.
     */
    VertexData getVertexData() const;

    void setAdjacentRanks( const tarch::la::Vector<TWO_POWER_D,int>& ranks );

    std::set<int> getAdjacentRemoteRanks() const;

    /**
      * Blocking send. initDatatype() has to be called before.
      */
    void send(int destination, int tag);

    /**
      * Blocking receive. initDatatype() has to be called before.
     */
    void receive(int source, int tag);

    bool belongsToParallelBoundary() const;


    /**
     * NOP operation.
     *
     * !! Iteration Control
     *
     * The operation is called after the algorithm triggers the event handle's
     * beginIteration().
     */
    void prepareSendToNeighbour();

    void mergeWithNeighbour(const peano::kernel::spacetreegrid::Vertex<VertexData>& neighbour, int fromRank);
  	#endif
};


template <class VertexData>
std::ostream& operator<<(std::ostream& out, const peano::kernel::spacetreegrid::Vertex<VertexData>& vertex);


#include "peano/kernel/spacetreegrid/Vertex.cpph"

#endif
