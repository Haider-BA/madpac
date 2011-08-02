// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_USERINPUT_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_USERINPUT_H_


// define model which is to be currently used
#if (DIMENSIONS == 2)
  // 2D: only LB_D2Q9 available
  #define LB_CURRENT_MODEL LB_D2Q9

#elif (DIMENSIONS == 3)
  // 3D: choose from LB_D3Q15,LB_D3Q19,LB_D3Q27
  #define LB_CURRENT_MODEL LB_D3Q19
#else
  #error Other than 2D and 3D problems are not supported!
#endif



namespace blocklatticeboltzmann {
  // defines the blocksize on each vertex
  #define LB_BLOCKSIZE 6
}

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_USERINPUT_H_
