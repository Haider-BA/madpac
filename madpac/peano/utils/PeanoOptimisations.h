// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_UTILS_PEANO_OPTIMISATIONS
#define _PEANO_UTILS_PEANO_OPTIMISATIONS

#include "tarch/compiler/CompilerSpecificSettings.h"


/**
 * Uses lookup tables within the dfor statements. To enable this features dfors
 * have to be used for 2,3,4 by 2,3,4 arrays only. Otherwise, the lookup table
 * mechanism will fail. By standard, lookup tables are only switched on for the
 * xPowI functions, where x is 2,3 or 4.
 */
#define DloopOptimiseAggressive


/**
 * Store only the part of the objects that is marked as persistent. Reduces
 * size (memory consumption) of the grid data types.
 */
#define StoreOnlyPersistentAttributes


/**
 * Peano data packing enabled: less data per node/cell
 * Only in very rare cases, this flag might have negative influence on runtime.
 * You may even use it in Debug mode, as it is no compiler optimisation flag.
 */
#define PackedRecords


/**
 * In the parallel code, the user either exchanges the raw vertices and cells or
 * the packed variants of either. Depending on the architecture (especially
 * bandwidth and latency), one option might result in a significant better
 * performance. The Altix, e.g., is faster if this flag is not set, but the
 * bandwidth requirements raise then.
 *
 * The operation is not activated, if the symbol Packed is undefined.
 */
#if defined(PackedRecords) && !defined(CompilerCLX)
#define ParallelExchangePackedRecords
#endif


/**
 * By default, C++ always invokes the standard constructor for each element if
 * you create an array. This is cumbersome for the spacetree: Here, we create
 * 3^d or 4^d instances on each tree level for the cells or vertices,
 * respectively. These array entries are immediately overwritten with data from
 * the stacks, i.e. there's no need to call any standard constructors or the
 * destructor. If this flag is set, we avoid it explicitly by allocating some
 * char arrays and a pointer type cast.
 */
//#define AvoidInvocationOfStandardConstructorForArrays

#endif
