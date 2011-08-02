// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_STACKS_VERTEX_ARRAY_STACK_H_
#define _PEANO_KERNEL_STACKS_VERTEX_ARRAY_STACK_H_


#include "peano/kernel/stacks/Stacks.h"
#include "peano/kernel/stacks/implementation/ArrayStack.h"

#include "peano/utils/Globals.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano {
  namespace kernel {
    namespace stacks {
      template <class Vertex>
      class VertexArrayStack;
    }
  }
}


/**
 * Array Cell Stack
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.2 $
 */
template <class Vertex>
class peano::kernel::stacks::VertexArrayStack {
  private:
    typedef peano::kernel::stacks::implementation::ArrayStack< typename Vertex::PersistentVertex >  PersistentContainer;
    typedef peano::kernel::stacks::implementation::ArrayStack< Vertex >                             TemporaryContainer;

    /**
     * Number of input/output stacks.
     */
    static const int InOutStacks = 2;

    /**
     * Data structure for the two stacks.
     */
    PersistentContainer _stack[InOutStacks];

    /**
     * This is the attribute holding all the temporary stacks.
     */
    TemporaryContainer _temporaryStack[NUMBER_OF_TEMPORARY_STACKS];

    /**
     * There's an input and one output stack one can flip. So they are realized
     * using an array of cardinality 2 and this integer indicates which one is
     * the input stream right now.
     */
    int _currentInputStack;

    /**
     * Input output stacks. Stack 0 and 1 are the upper stacks, i.e. the stacks
     * that are needed for the next iteration, 2 and 3 are the lower ones
     * belonging to the grid levels not processed right now.
     */
    PersistentContainer _inputOutputStack[InOutStacks];

    /**
     * One is not allowed to clone a stack.
     */
    VertexArrayStack<Vertex>( const VertexArrayStack<Vertex>& stack ) {}

    /**
     * One is not allowed to clone a stack.
     */
    VertexArrayStack<Vertex>& operator=( const VertexArrayStack<Vertex>& stack ) { return *this; }
  public:
    /**
     * Constructor.
     *
     * @see EventStack::EventStack()
     */
    VertexArrayStack(int maxSizeOfPersistentStacks, int maxSizeOfTemporaryStacks);

    ~VertexArrayStack();

    /**
     * Pops element from input stack.
     *
     * @param stackNumber Either InOutStack or a number greater than or equal
     *                    to zero.
     */
    Vertex pop(int stackNumber);
    void push( int stackNumber, const Vertex& vertex );

    int sizeOfInputStack() const;
    int sizeOfOutputStack() const;

    bool isInputStackEmpty() const;
    bool isOutputStackEmpty() const;

    void clear();

    /**
     * This operation flips input and output stack.
     */
    void flipInputAndOutputStack();

    template <class Cell>
    void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<Vertex,Cell>& checkpoint ) const;

    template <class Cell>
    void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<Vertex,Cell>& checkpoint );
};


#include "peano/kernel/stacks/VertexArrayStack.cpph"

#endif
