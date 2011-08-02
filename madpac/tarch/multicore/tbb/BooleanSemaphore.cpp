#include "tarch/multicore/BooleanSemaphore.h"


tarch::multicore::BooleanSemaphore::BooleanSemaphore() {
}


tarch::multicore::BooleanSemaphore::~BooleanSemaphore() {
}


void tarch::multicore::BooleanSemaphore::enterCriticalSection() {
  _lock.lock();
}


void tarch::multicore::BooleanSemaphore::leaveCriticalSection() {
  _lock.unlock();
}

