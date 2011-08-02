// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_CELL_H_
#define _PEANO_KERNEL_SPACETREE_GRID_CELL_H_


#include "peano/utils/PeanoOptimisations.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace aspects {
        class CellRefinement;
        class CellPeanoCurve;
        class CellLocalPeanoCurve;
      }

      namespace tests {
        class RefinementTest;
        class CellLocalPeanoCurveTest;
      }

      template <class CellData>
      class Cell;
    }
  }
}



/**
 * Super class for all cells of the regular grid.
 *
 * @author Tobias Weinzierl
 */
template <class CellData>
class peano::kernel::spacetreegrid::Cell {
  public:
    #if defined(StoreOnlyPersistentAttributes) && defined(PackedRecords)
    typedef typename CellData::Packed::PersistentRecords  PersistentCell;
    #endif

    #if !defined(StoreOnlyPersistentAttributes) && defined(PackedRecords)
    typedef typename CellData::Packed                     PersistentCell;
    #endif

    #if defined(StoreOnlyPersistentAttributes) && !defined(PackedRecords)
    typedef typename CellData::PersistentRecords          PersistentCell;
    #endif

    #if !defined(StoreOnlyPersistentAttributes) && !defined(PackedRecords)
    typedef CellData                                      PersistentCell;
    #endif

    typedef CellData                                      Records;

    #ifdef Parallel
    /**
     * This operation is robust, i.e. you can call it several times.
     */
    static void initDatatype();
    #endif

    #if defined(ParallelExchangePackedRecords)
    typedef typename CellData::Packed       MPIDatatypeContainer;
    #else
    typedef CellData                        MPIDatatypeContainer;
    #endif

  protected:
    /**
     * Aspect
     */
    friend class peano::kernel::spacetreegrid::aspects::CellRefinement;
    friend class peano::kernel::spacetreegrid::aspects::CellPeanoCurve;
    friend class peano::kernel::spacetreegrid::aspects::CellLocalPeanoCurve;

    friend class peano::kernel::spacetreegrid::tests::RefinementTest;
    friend class peano::kernel::spacetreegrid::tests::CellLocalPeanoCurveTest;

    CellData _cellData;

    Cell();
    Cell(const PersistentCell& argument);

  public:
    ~Cell();

    bool isOutside() const;
    bool isInside() const;

    void switchToInside();
    void switchToOutside();

    /**
     * Only allowed for a leaf.
     */
    void switchToRoot();

    /**
     * Only allowed for refined events. There is no counterpart of this
     * operation, i.e. an operation making a leaf a refined event, as this
     * switching is done by the refinement aspect.
     */
    void switchToLeaf();

    bool isLeaf() const;
    bool isRefined() const;
    bool isRoot() const;

    /**
     * @return The persistent subattributes of the cell.
     */
    PersistentCell getRecords() const;

    /**
     * Proxy.
     */
    std::string toString() const;

    /**
     * Proxy.
     */
    void toString(std::ostream& out) const;

    #ifdef Parallel
    /**
     * Blocking send. initDatatype() has to be called before.
     */
    void send(int destination, int tag);

    /**
     * Blocking receive. initDatatype() has to be called before.
     */
    void receive(int source, int tag);

    int getDelta() const;
    int getWeight() const;
    #endif

    #ifdef Debug
    int getLevel() const;
    void incLevel();
    #endif
};


template <class CellData>
std::ostream& operator<<(std::ostream& out, const peano::kernel::spacetreegrid::Cell<CellData>& properties);


#include "peano/kernel/spacetreegrid/Cell.cpph"

#endif
