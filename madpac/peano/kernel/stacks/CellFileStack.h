// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_STACKS_CELL_FILE_STACK_H_
#define _PEANO_KERNEL_STACKS_CELL_FILE_STACK_H_


#include "peano/kernel/stacks/Stacks.h"
#include "peano/kernel/stacks/implementation/FileStack.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano {
  namespace kernel {
    namespace stacks {
      template <class Cell>
      class CellFileStack;
    }
  }
}


/**
 * Array Cell Stack
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.2 $
 */
template <class Cell>
class peano::kernel::stacks::CellFileStack {
  private:
    typedef typename peano::kernel::stacks::implementation::FileStack<typename Cell::PersistentCell> Container;

    /**
     * Data structure for the two stacks.
     */
    Container _stack[2];

    int _inputStackNumber;

    /**
     * One is not allowed to clone a stack.
     */
    CellFileStack<Cell>( const CellFileStack<Cell>& stack ) {}

    /**
     * One is not allowed to clone a stack.
     */
    CellFileStack<Cell>& operator=( const CellFileStack<Cell>& stack ) { return *this; }
  public:
    /**
     * Constructor.
     */
    CellFileStack(
      int blockSize,
      int numberOfBlocks,
      int minFillThreshold,
      int maxFillThreshold,
      const std::string& tempFilePrefix
    );

    ~CellFileStack();

    /**
     * Pops element from input stack.
     *
     * @param stackNumber Always InOutStack for the time being
     */
    Cell pop(int stackNumber);
    void push( int stackNumber, const Cell& cell );

    int sizeOfInputStack() const;
    int sizeOfOutputStack() const;

    bool isInputStackEmpty() const;
    bool isOutputStackEmpty() const;

    void clear();

    /**
     * This operation flips input and output stack.
     */
    void flipInputAndOutputStack();

    template <class Vertex>
    void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<Vertex,Cell>& checkpoint ) const;

    template <class Vertex>
    void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<Vertex,Cell>& checkpoint );

};

#include "peano/kernel/stacks/CellFileStack.cpph"


#endif
