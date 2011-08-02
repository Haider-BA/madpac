#include "tarch/multicore/openMP/BooleanSemaphore.h"


tarch::multicore::BooleanSemaphore::BooleanSemaphore() {
  omp_init_lock(&_lock);
}


tarch::multicore::BooleanSemaphore::~BooleanSemaphore() {
  omp_destroy_lock(&_lock);
}


void tarch::multicore::BooleanSemaphore::enterCriticalSection() {
  omp_set_lock(&_lock);
}


void tarch::multicore::BooleanSemaphore::leaveCriticalSection() {
  omp_unset_lock(&_lock);
}

