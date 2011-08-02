// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_REGULAR_VERTEX_ENUMERATOR_H_
#define _PEANO_KERNEL_REGULARGRID_REGULAR_VERTEX_ENUMERATOR_H_


#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "tarch/logging/Log.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      class RegularGridVertexEnumerator;
    }
  }
}


class peano::kernel::regulargrid::RegularGridVertexEnumerator: public peano::kernel::gridinterface::VertexEnumerator {
  private:
    /**
     * Logging Device
     */
    static tarch::logging::Log _log;

    LocalVertexIntegerIndex  _numberOfGridPoints;
    LocalVertexIntegerIndex  _offset;
    Vector                   _cellSize;
    Vector                   _domainOffset;

    int getFlattenedIndex(const LocalVertexIntegerIndex&  position) const;
  public:
    RegularGridVertexEnumerator(
      const LocalVertexIntegerIndex&  numberOfGridPoints,
      const LocalVertexIntegerIndex&  gridPointOffset,
      const Vector&                   cellSize,
      const Vector&                   domainOffset
    );

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

    virtual int getLevel() const;
};


#endif
