// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_STACKS_IMPLEMENTATION_DYNAMIC_STACK_H_
#define _PEANO_KERNEL_STACKS_IMPLEMENTATION_DYNAMIC_STACK_H_



#include "tarch/logging/Log.h"
#include "peano/kernel/stacks/implementation/DynamicArray.h"
#include "tarch/Assertions.h"



namespace peano {
  namespace kernel {
    namespace stacks {
      namespace implementation {
        template <class T>
        class DynamicStack;
      }
    }
  }
}


/**
 * Wrapper for Wolfgang Eckhardt's DynamicArray implementation.
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.9 $
 */
template <class T>
class peano::kernel::stacks::implementation::DynamicStack {
  private:
    /**
     * Logging device
     */
    static tarch::logging::Log _log;

    /**
     * Wrapped type.
     */
    peano::kernel::stacks::implementation::DynamicArray< T, false, true> _container;

    int _maxSize;
  public:
    /**
     * Default constructor.
     */
    DynamicStack() {
    }

    void clear() {
      _container.clear();
    }

    /**
     * Default destructor.
     */
    ~DynamicStack() {
    }


    /**
     * Push element on stack.
     */
    void push( const T& element ) {
      _container.push_back(element);
      _maxSize = _maxSize < size() ? size(): _maxSize;
    }


    long int getMaxSize() const {
      return _container.capacity();
    }


    void clearMaxSize() {
      _maxSize = 0;
    }


    /**
     * Pop element from stack.
     */
    T pop() {
      assertion( !isEmpty() );
      T result = _container.back();
      _container.pop_back();
      return result;
    }


    /**
     * @return Size of the stack.
     */
    int size() const {
      return _container.size();
    }


    void resetMaxSize() {
      _maxSize = 0;
    }


    /**
     * @return Is the stack empty, i.e. does size equal zero.
     */
    bool isEmpty() const {
      return size()==0;
    }
};


template <class T>
tarch::logging::Log peano::kernel::stacks::implementation::DynamicStack<T>::_log( "peano::kernel::stacks::implementation::DynamicStack" );


#endif
