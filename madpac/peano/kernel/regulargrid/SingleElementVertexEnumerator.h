// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_SINGLE_ELEMENT_VERTEX_ENUMERATOR_H_
#define _PEANO_KERNEL_REGULARGRID_SINGLE_ELEMENT_VERTEX_ENUMERATOR_H_


#include "peano/kernel/gridinterface/VertexEnumerator.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      class SingleElementVertexEnumerator;
    }
  }
}


/**
 * Enumerator for a single element.
 *
 * Here the vertices are stored in a @f$ 2^d @f$ array and this enumerator is a
 * simple linearisation of this array along Peano's enumeration convention.
 *
 * @image html SingleElementVertexEnumerator.png
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::regulargrid::SingleElementVertexEnumerator: public peano::kernel::gridinterface::VertexEnumerator {
  private:
    Vector                   _cellSize;
    Vector                   _cellOffset;
  public:
    SingleElementVertexEnumerator(
      const Vector &  cellSize,
      const Vector &  cellOffset
    );

    void setCellOffset( const Vector &  cellOffset );

    virtual int operator() (int localVertexNumber) const;
    virtual int operator() (const LocalVertexIntegerIndex&  localVertexNumber ) const;
    virtual int operator() (const LocalVertexBitsetIndex&   localVertexNumber ) const;

    virtual Vector getVertexPosition(int localVertexNumber ) const;
    virtual Vector getVertexPosition(const LocalVertexIntegerIndex& localVertexNumber ) const;
    virtual Vector getVertexPosition(const LocalVertexBitsetIndex& localVertexNumber ) const;
    virtual Vector getVertexPosition() const;

    virtual Vector getCellCenter() const;
    virtual Vector getCellSize() const;
    virtual std::string toString() const;

    virtual int getLevel() const;
};


#endif
