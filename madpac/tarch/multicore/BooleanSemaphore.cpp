#include "tarch/multicore/BooleanSemaphore.h"

// This implementation is valid iff neither OpenMP nor TBBs are active

#if !defined(SharedTBB) && !defined(SharedOMP)

tarch::multicore::BooleanSemaphore::BooleanSemaphore() {
}


tarch::multicore::BooleanSemaphore::~BooleanSemaphore() {
}


void tarch::multicore::BooleanSemaphore::enterCriticalSection() {
}


void tarch::multicore::BooleanSemaphore::leaveCriticalSection() {
}


#endif
