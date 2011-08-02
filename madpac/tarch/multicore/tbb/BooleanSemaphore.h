// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _TARCH_MULTICORE_BOOLEAN_SEMAPHORE_TBB_H_
#define _TARCH_MULTICORE_BOOLEAN_SEMAPHORE_TBB_H_


namespace tarch {
  namespace multicore {
    class BooleanSemaphore;
    class Lock;
  }
}



#if defined(SharedTBB)

#include <tbb/spin_mutex.h>


class tarch::multicore::BooleanSemaphore {
  private:
    friend class tarch::multicore::Lock;

    tbb::spin_mutex _lock;

    /**
     * Waits until I can enter the critical section.
     */
    void enterCriticalSection();

    /**
     * Tells the semaphore that it is about to leave.
     */
    void leaveCriticalSection();

    /**
     * You may not copy a semaphore
     */
    BooleanSemaphore( const BooleanSemaphore& semaphore ) {}

    /**
     * You may not copy a semaphore
     */
    BooleanSemaphore& operator=( const BooleanSemaphore& semaphore ) {return *this;}
  public:
    BooleanSemaphore();
    ~BooleanSemaphore();
};
#endif


#endif
