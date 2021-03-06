// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano

/**
 * Fill Lookup Tables
 *
 * Fill all the lookup tables used within the application. As lookup
 * tables are used by many operations, I suggest to call this operation
 * as soon as possible.
 *
 * There shall no error occur in this operation. Thus, it does not return
 * any code.
 */
void fillLookupTables();

/**
 * Init Parallel Environment
 *
 * Inits the parallel environment. If the parallel mode is not set, the
 * operation detoriates to nop. The function returns 0 if everything
 * is o.k., it returns -2 otherwise. Please call this operation before
 * you call any other operation that could result in an error. I suggest
 * to call it right after fillLookupTables().
 *
 * init might change the variables passed. If you want to parse the
 * command line arguments, use the values returned. If you use the
 * arguments directly without calling initParallelEnvironment() they
 * might contain MPI values not important to the program.
 *
 * !!! Rationale
 *
 * You may not use the trace macros before this operation has invoked the init
 * operation. Otherwise, the getRank() assertion fails, as the node has not
 * been configured correctly.
 */
int initParallelEnvironment(int* argc, char*** argv);
void shutdownParallelEnvironment();

/**
 * Init shared memory environment.
 *
 * If an error occurs, it returns -3.
 */
int initSharedMemoryEnvironment();
void shutdownSharedMemoryEnvironment();



/** system calls for hybrid MD-LB simulations with MarDyn and
 *  Lattice Boltzmann-in-Peano simulations.
 */
void initMolecularDynamicsCoupling(int* argc, char*** argv);
