// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_TESTS_ORACLE_FOR_ONE_PHASE_WITHOSCILLATING_SEARCH_TEST_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_TESTS_ORACLE_FOR_ONE_PHASE_WITHOSCILLATING_SEARCH_TEST_H_


#include "tarch/tests/TestCase.h"

namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace tests {
        class OracleForOnePhaseWithOscillatingSearchTest;
      }
    }
  }
}


class peano::kernel::datatraversal::tests::OracleForOnePhaseWithOscillatingSearchTest: public tarch::tests::TestCase {
  private:
    /**
     * In a test with the grid construction movie setup, I got the following
     * results from the probe:
     *
     * \code
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-load-vertices,problem-size=4):
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 2.91209e-06 (4.66708e+06 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 5.07868e-06 (4.6634e+06 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 2: 4.28499e-06 (4.66607e+06 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 3: 3.42363e-06 (4.66937e+06 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-set-counter,problem-size=16):
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 2.46937e-06 (129591 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 5.40815e-06 (129419 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 2: 4.64328e-06 (128976 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 3: 4.63753e-06 (129143 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 4: 4.08844e-06 (129892 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 5: 4.07418e-06 (129955 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 6: 4.07206e-06 (129883 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 7: 4.0952e-06 (128873 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 8: 3.6534e-06 (129664 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 9: 3.65224e-06 (129860 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 10: 3.65478e-06 (130261 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 11: 3.65188e-06 (130255 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 12: 3.66084e-06 (130310 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 13: 3.65486e-06 (128913 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 14: 3.65114e-06 (129739 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 15: 3.64904e-06 (129232 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-enter-cell-and-load-sub-cells,problem-size=2):
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 9.85608e-07 (942080 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 2.3258e-06 (943008 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-leave-cell-and-store-sub-cells,problem-size=2):
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 9.55837e-07 (1.03851e+06 samples)
 1305031024 14:37:04 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 3.02131e-06 (1.03546e+06 samples)
\endcode
     *
     */
    void testGridConstruction2D_1();
    void testGridConstruction2D_2();

    /**
     * In a test with the grid construction movie setup, I got the following
     * results from the probe:
     *
     * \code
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-load-vertices,problem-size=8):
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 5.11015e-06 (1.09436e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 9.30833e-06 (1.09185e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 2: 8.00676e-06 (1.09349e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 3: 6.96067e-06 (1.09515e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 4: 5.96555e-06 (1.09416e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 5: 5.96268e-06 (1.09267e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 6: 5.96489e-06 (1.09346e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 7: 5.96242e-06 (1.09372e+06 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-set-counter,problem-size=64):
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 1.23911e-05 (5056 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 1.02189e-05 (5076 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 2: 9.9146e-06 (5088 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 3: 9.97405e-06 (5109 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 4: 9.0613e-06 (5074 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 5: 9.01806e-06 (4944 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 6: 9.42478e-06 (5074 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 7: 9.15624e-06 (4996 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 8: 8.88088e-06 (5050 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 9: 9.06478e-06 (5050 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 10: 8.84876e-06 (5049 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 11: 8.95783e-06 (5063 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 12: 8.90186e-06 (4956 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 13: 8.99314e-06 (5193 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 14: 8.95985e-06 (4997 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 15: 8.98963e-06 (5145 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 16: 9.20736e-06 (4971 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 17: 9.08259e-06 (5031 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 18: 9.09139e-06 (5205 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 19: 9.11659e-06 (5055 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 20: 9.04503e-06 (4965 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 21: 9.05571e-06 (5020 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 22: 9.07352e-06 (5175 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 23: 9.20074e-06 (5008 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 24: 9.00958e-06 (5080 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 25: 9.08901e-06 (5097 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 26: 9.04951e-06 (5139 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 27: 9.04967e-06 (4982 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 28: 9.1376e-06 (5020 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 29: 9.111e-06 (5169 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 30: 9.09403e-06 (5056 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 31: 9.03674e-06 (5007 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 32: 1.07568e-05 (4952 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 33: 1.08696e-05 (5117 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 34: 1.0848e-05 (4998 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 35: 1.07699e-05 (4995 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 36: 1.08066e-05 (5113 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 37: 1.08068e-05 (5191 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 38: 1.08618e-05 (5099 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 39: 1.08703e-05 (5139 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 40: 1.08418e-05 (5084 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 41: 1.09092e-05 (5002 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 42: 1.09304e-05 (5111 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 43: 1.08992e-05 (5093 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 44: 1.07782e-05 (4922 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 45: 1.08626e-05 (5089 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 46: 1.08288e-05 (4981 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 47: 1.08953e-05 (5019 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 48: 1.10063e-05 (5104 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 49: 1.08093e-05 (5120 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 50: 1.08377e-05 (5084 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 51: 1.08817e-05 (5128 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 52: 1.08555e-05 (4919 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 53: 1.09428e-05 (4998 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 54: 1.09056e-05 (5193 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 55: 1.09018e-05 (5034 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 56: 1.07891e-05 (5096 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 57: 1.08925e-05 (5124 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 58: 1.08562e-05 (5089 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 59: 1.08469e-05 (5033 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 60: 1.08619e-05 (5059 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 61: 1.07967e-05 (5114 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 62: 1.10718e-05 (5043 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 63: 1.09066e-05 (5070 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-enter-cell-and-load-sub-cells,problem-size=2):
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 1.81473e-06 (141222 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 5.24311e-06 (140683 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes() runtimes for (method=spacetree-grid-leave-cell-and-store-sub-cells,problem-size=2):
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 0: 1.81461e-06 (162253 samples)
 1305032697 15:04:57 [atsccs57] info     peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithProbing::plotRuntimes()  grain size 1: 8.36473e-06 (161760 samples)
\endcode
     *
     */
    void testGridConstruction3D_1();
  public:
    OracleForOnePhaseWithOscillatingSearchTest();
    virtual ~OracleForOnePhaseWithOscillatingSearchTest();
    virtual void run();
    virtual void setUp();
};


#endif
