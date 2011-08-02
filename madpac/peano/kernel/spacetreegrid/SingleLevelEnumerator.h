// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_SINGLE_LEVEL_ENUMERATOR_H_
#define _PEANO_KERNEL_SPACETREE_GRID_SINGLE_LEVEL_ENUMERATOR_H_


#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "tarch/logging/Log.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      class SingleLevelEnumerator;
    }
  }
}


class peano::kernel::spacetreegrid::SingleLevelEnumerator: public peano::kernel::gridinterface::VertexEnumerator {
  private:
    LocalVertexIntegerIndex  _discreteOffset;
    Vector                   _fineGridCellSize;
    Vector                   _domainOffset;

    int    _level;

    int getFlattenedIndex(const LocalVertexIntegerIndex&  position) const;
  public:
    /**
     * Construct Enumerator
     *
     * Typically, you hand in the coarse node's x and h. It did not provide a
     * constructor taking a state directly as this would introduce an
     * additional dependence between two types.
     */
    SingleLevelEnumerator(
      const Vector&                coarseGridCellSize,
      const Vector&                domainOffset
    );

    SingleLevelEnumerator(
      const Vector&                coarseGridCellSize,
      const Vector&                domainOffset,
      int                          level
    );

    /**
     * @return Refined enumerator
     */
    SingleLevelEnumerator getRefinedEnumerator() const;

    void setOffset(const LocalVertexIntegerIndex&  gridPointOffset);

    virtual int operator() (int localVertexNumber) const;
    virtual int operator() (const LocalVertexIntegerIndex&  localVertexNumber ) const;
    virtual int operator() (const LocalVertexBitsetIndex&   localVertexNumber ) const;

    virtual Vector getVertexPosition(int localVertexNumber) const;
    virtual Vector getVertexPosition(const LocalVertexIntegerIndex& localVertexNumber ) const;
    virtual Vector getVertexPosition(const LocalVertexBitsetIndex& localVertexNumber ) const;
    virtual Vector getVertexPosition() const;

    virtual Vector getCellSize() const;
    virtual Vector getCellCenter() const;
    virtual std::string toString() const;

    static int lineariseCellIndex( const LocalVertexIntegerIndex&    cellPosition );
    static int lineariseVertexIndex( const LocalVertexIntegerIndex&  vertexPosition );

    virtual int getLevel() const;

    static LocalVertexIntegerIndex getVertexPositionOnCoarserLevel(const LocalVertexIntegerIndex& index );
    static bool isVertexPositionAtCoarseVertexsPosition(const LocalVertexIntegerIndex& index );
};


#endif
