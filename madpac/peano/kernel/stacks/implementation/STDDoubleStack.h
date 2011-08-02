// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_STACKS_IMPLEMENTATION_STDDOUBLESTACK_H_
#define _PEANO_KERNEL_STACKS_IMPLEMENTATION_STDDOUBLESTACK_H_

#include <vector>
#include <iostream>
#include <sstream>

#include "tarch/logging/Log.h"
#include "tarch/Assertions.h"


namespace peano {
  namespace kernel {
    namespace stacks {
      namespace implementation {
        template <class T>
        class STDDoubleStack;
      }
    }
  }
}

/**
 * Double Stack
 *
 * This header file defines one special structure of two stacks.
 * During the Peano iteration we usually pop from one stack and push into the other.
 * If we reserve two stacks for the iteration, then after one completed iteration
 * one stack will be empty and the other will stay full. <br>
 * To save storage space we use one (the same) vector for 2 stacks<br>
 * The first stack uses the bottom of the vector, the second stack uses
 * the to top the vector:
 *<br>
 *  @image html Double_Stack.png
 *<br>
 *
 *
 *  Created on: Nov 12, 2009
 *      Author: benk
 */
template <class T>
class peano::kernel::stacks::implementation::STDDoubleStack {
  private:
    static tarch::logging::Log _log;

    /**
     * The total length of the two stack (the vector which stores the two stacks)
     */
    long int _totalLength;

    /**
     * The position of each (two) stack
     */
    long int _pos[2];

    /**
     * Wrapped type.
     */
    std::vector< T > _container;

    long int  _maxSize;

    /**
     * This method is for internal use, and is called after each push.
     * Enlarges the vector(which stores the two stacks) only when necesary
     *
     * Steps:
     * - Test if the too pointers are too close. If so:
     *     - enlarge the vector
     *     - define the new length and copy the vector
     *     - we must copy this in backward manner
     */
    void enlargeVector(){
      if ( (_pos[1] - _pos[0]) < 3 ) {
        long int newTotalLength = (10*_totalLength)/9;
    	_container.resize(newTotalLength);
    	for (long int i = _totalLength-1 ; i >= _pos[1] ; i--){ //
    	  _container[i+(newTotalLength-_totalLength)] = _container[i];
    	}
    	_pos[1] = _pos[1] + (newTotalLength-_totalLength);
    	_totalLength = newTotalLength;
      }
    }


    /**
     * This method is for internal use, and is called after each pop.
     * Shrinks the vector(which stores the two stacks) only when necesary
     */
    inline void shrinkVector(){
        // Here is the test if we need to shorten the vector
    	if ( ((_pos[1] - _pos[0]) <  (_totalLength/2)) || (_totalLength < 1000) ){
    		// do nothing
    	}else{
    	// here we define the new length and copy the vector
    	long int newTotalLength = _totalLength - (_totalLength/3);
    	for (long int i = _pos[1] ; i < _totalLength ; i++)
    		_container[i+(newTotalLength-_totalLength)] = _container[i];
    	_pos[1] = _pos[1] + (newTotalLength-_totalLength);
    	_totalLength = newTotalLength;
    	_container.resize(newTotalLength); // resize only at the end
    	}
    }

  public:
	STDDoubleStack():
      _totalLength(0) {
 	}


	~STDDoubleStack() {
    }


	void init(int initialSize) {
	  assertionEquals( _totalLength, 0 );
      _totalLength = initialSize;
      _container.resize(_totalLength);
      _pos[0] = -1;
      _pos[1] = _totalLength;
	}


    void clear() {
      _pos[0] = -1; _pos[1] = _totalLength;
    }


    /**
     * Push element on stack.
     */
    void push( int stackIndex , const T& element ) {
      assertion( (stackIndex<2) && (stackIndex>-1) );

      if ( stackIndex == 0) _pos[stackIndex]++;
      else _pos[stackIndex]--;
      _container[_pos[stackIndex]] = element;

      _maxSize = _maxSize < _totalLength/2 ? _totalLength/2: _maxSize;

      enlargeVector();
    }

    /**
     * Pop element from stack.
     */
    T pop(int stackIndex) {
      assertion( (stackIndex<2) && (stackIndex>-1) );
      assertion( !isEmpty(stackIndex) );
      // get the actual element from the stack
      T result = _container[_pos[stackIndex]];
      if ( stackIndex == 0) _pos[stackIndex]--;
      else _pos[stackIndex]++;
      shrinkVector();
      return result;
    }


    /**
     * @return Size of the stack.
     */
    int size(int stackIndex) const {
      assertion( (stackIndex<2) && (stackIndex>-1) );
      if (stackIndex == 0) return ( _pos[0] + 1 );
      else return ( _totalLength - _pos[1] );
    }


    /**
     * @return Is the stack empty, i.e. does size equal zero.
     */
    bool isEmpty(int stackIndex) const {
      assertion( (stackIndex<2) && (stackIndex>-1) );
      if ( stackIndex == 0)
    	  return ( _pos[0] <= -1);
      else
    	  return ( _totalLength <= _pos[1]);
    }
};


template <class T>
tarch::logging::Log peano::kernel::stacks::implementation::STDDoubleStack<T>::_log( "peano::kernel::stacks::implementation::STDDoubleStack" );


#endif
