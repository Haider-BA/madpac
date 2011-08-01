// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano

/**
 * Main
 *
 * This is the main routine that
 *
 * - sets up the application, i.e.
 *   - initialises MPI, and
 *   - initialises shared memory environment (OpemMP/TBB),
 * - validates the command line arguments,
 * - loads the configuration file,
 * - triggers the individual runners accordingly, and, finally,
 * - shuts down all the components.
 *
 * Please note that you should not do any logging, communication, etc. before
 * you've initialised your parallel environment.
 */
#ifndef CCA
int main(int argc, char** argv);
#endif
