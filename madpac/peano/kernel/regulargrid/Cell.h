// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULAR_GRID_CELL_H_
#define _PEANO_KERNEL_REGULAR_GRID_CELL_H_


#include "peano/utils/PeanoOptimisations.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
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
class peano::kernel::regulargrid::Cell {
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
    #endif
};


template <class CellData>
std::ostream& operator<<(std::ostream& out, const peano::kernel::regulargrid::Cell<CellData>& properties);


#include "peano/kernel/regulargrid/Cell.cpph"

#endif
