// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_TESTS_TimeSteppingBatchJobTest_H_
#define _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_TESTS_TimeSteppingBatchJobTest_H_
 


#include "tarch/tests/TestCase.h"


namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
      namespace tests {
      class TimeSteppingBatchJobTest;
      } 
}
}
}
}
 

/**
 * This is just a default test case that demonstrated how to write unit tests 
 * in Peano. Feel free to rename, remove, or duplicate it. It is not required 
 * by the project but often useful if you wanna write unit tests.
 */ 
class peano::applications::heatequation::timestepping::tests::TimeSteppingBatchJobTest: public tarch::tests::TestCase {
  private:
    /**
     * These operation usually implement the real tests.
     */
    void test1();

    /**
     * These operation usually implement the real tests.
     */
    void test2();

    /**
     * These operation usually implement the real tests.
     */
    void test3();
  public: 
    TimeSteppingBatchJobTest(); 
    virtual ~TimeSteppingBatchJobTest();
     
    virtual void run();

    void virtual setUp();
};


#endif
