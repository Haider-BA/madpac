// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_STATE_H_
#define _PEANO_KERNEL_SPACETREE_GRID_STATE_H_


#include "peano/kernel/gridinterface/State.h"
#include "peano/utils/PeanoOptimisations.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      template <class StateData>
      class State;
    }
	}
}



/**
 * Super class for all states of the regular grid.
 *
 * @author Tobias Weinzierl
 */
template <class StateData>
class peano::kernel::spacetreegrid::State: public peano::kernel::gridinterface::State {
  public:
    #if defined(StoreOnlyPersistentAttributes) && defined(PackedRecords)
    typedef typename StateData::Packed::PersistentRecords  PersistentState;
    #endif

    #if !defined(StoreOnlyPersistentAttributes) && defined(PackedRecords)
    typedef typename StateData::Packed                     PersistentState;
    #endif

    #if defined(StoreOnlyPersistentAttributes) && !defined(PackedRecords)
    typedef typename StateData::PersistentRecords          PersistentState;
    #endif

    #if !defined(StoreOnlyPersistentAttributes) && !defined(PackedRecords)
    typedef StateData                                      PersistentState;
    #endif

    #ifdef Parallel
    /**
     * This operation is robust, i.e. you can call it several times.
     */
    static void initDatatype();
    #endif

    #if defined(ParallelExchangePackedRecords)
    typedef typename StateData::Packed       MPIDatatypeContainer;
    #else
    typedef StateData                        MPIDatatypeContainer;
    #endif

    typedef StateData                                      Records;

  protected:
    StateData _stateData;

    State();
    State(const PersistentState& argument);

    #ifdef Parallel
    void mergeWithWorkerState(const peano::kernel::spacetreegrid::State<StateData>& workerState);
    #endif
  public:
    virtual ~State();

    /**
     * Proxy.
     */
    std::string toString() const;

    /**
     * Proxy.
     */
    void toString(std::ostream& out) const;

    virtual double getNumberOfInnerVertices() const;
    virtual double getNumberOfBoundaryVertices() const;
    virtual double getNumberOfOuterVertices() const;
    virtual double getNumberOfInnerCells() const;
    virtual double getNumberOfOuterCells() const;

    virtual tarch::la::Vector<DIMENSIONS,double> getMaximumMeshWidth() const;
    virtual tarch::la::Vector<DIMENSIONS,double> getMinimumMeshWidth() const;

    void incNumberOfInnerVertices( double increment );
    void incNumberOfBoundaryVertices( double increment );
    void incNumberOfOuterVertices( double increment );
    void incNumberOfInnerCells( double increment );
    void incNumberOfOuterCells( double increment );

    bool isTraversalInverted() const;
    void invertTraversal();

    void updateRefinementHistoryAfterLoad( bool hasRefinened, bool hasErased, bool hasChangedVertexState );
    void updateRefinementHistoryBeforeStore( bool hasTriggeredRefinementForNextIteration, bool hasTriggeredEraseForNextIteration );
    void updateInLeaf( int level, const tarch::la::Vector<DIMENSIONS,double>& h );

    /**
     * Inform state that caller has changed a cell.
     */
    void changedCellState();

    /**
     * @return Has the grid changed the cells state in the last iteration.
     */
    bool isGridStationary() const;

    void resetStateAtBeginOfIteration();

    #ifdef Parallel
    /**
     * Blocking send. initDatatype() has to be called before.
     */
    void send(int destination, int tag);

    /**
     * Blocking receive. initDatatype() has to be called before.
     */
    void receive(int source, int tag);
    #endif
};


template <class StateData>
std::ostream& operator<<(std::ostream& out, const peano::kernel::spacetreegrid::State<StateData>& properties);


#include "peano/kernel/spacetreegrid/State.cpph"

#endif
