// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICE_BOLTZMANN_LATTICEBOLTZMANNDEFINITIONS_H_
#define _LATTICE_BOLTZMANN_LATTICEBOLTZMANNDEFINITIONS_H_

#include "peano/utils/Dimensions.h"
#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"


namespace peano{
  namespace applications {
    namespace latticeboltzmann {

      // needed for different collision models on different grid levels; we therefore need
      // to provide the maximum number of simulation levels allowed in the simulation;
      // the number of 10 is typically much too big, however, by this, we definitely can use
      // the collision models as we like :-)
      #define LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS 10

      /** id's in order to separate different lattice Boltzmann models */
      // 2D-models
      #define LB_D2Q5      0
      #define LB_D2Q5_SKEW 1
      #define LB_D2Q9      2

      // 3D-models
      #define LB_D3Q7      3
      #define LB_D3Q9      4
      #define LB_D3Q13     5
      #define LB_D3Q15     6
      #define LB_D3Q19     7
      #define LB_D3Q27     8


      // user specific input that is used at compile time (comprises
      // velocity discretisation scheme, blocksize in block-structured LB
      // simulations etc.)
      #include "peano/applications/latticeboltzmann/UserInput.h"


      /** number of lattice velocities for different lattice Boltzmann models */
      // 2D-models
      #define LB_D2Q5_DIR              5
      #define LB_D2Q5_SKEW_DIR         5
      #define LB_D2Q9_DIR              9

      // 3D-models
      #define LB_D3Q7_DIR              7
      #define LB_D3Q9_DIR              9
      #define LB_D3Q13_DIR            13
      #define LB_D3Q15_DIR            15
      #define LB_D3Q19_DIR            19
      #define LB_D3Q27_DIR            27


      // set predefined parameters for the current lattice Boltzmann model
      #if (LB_CURRENT_MODEL == LB_D2Q5)
        #error "D2Q5 not supported yet!"
        #define LB_CURRENT_DIR LB_D2Q5_DIR

      #elif (LB_CURRENT_MODEL == LB_D2Q5_SKEW)
        #error "D2Q5_SKEW not supported yet!"
        #define LB_CURRENT_DIR LB_D2Q5_SKEW_DIR

      #elif (LB_CURRENT_MODEL == LB_D2Q9)
        #define CS_L_SQUARED (1.0/3.0)  /** speed of sound on a unit lattice */
        #define LB_CURRENT_DIR LB_D2Q9_DIR

      #elif (LB_CURRENT_MODEL == LB_D3Q7)
        #error "D3Q7 not supported yet!"
        #define LB_CURRENT_DIR LB_D3Q7_DIR

      #elif (LB_CURRENT_MODEL == LB_D3Q9)
        #error "D3Q9 not supported yet!"
        #define LB_CURRENT_DIR LB_D3Q9_DIR

      #elif (LB_CURRENT_MODEL == LB_D3Q13)
        #error "D3Q13 not supported yet!"
        #define CS_L_SQUARED (1.0/3.0)  // speed of sound on a unit lattice
        #define LB_CURRENT_DIR LB_D3Q13_DIR

      #elif (LB_CURRENT_MODEL == LB_D3Q15)
        #define CS_L_SQUARED (1.0/3.0)  // speed of sound on a unit lattice
        #define LB_CURRENT_DIR LB_D3Q15_DIR

      #elif (LB_CURRENT_MODEL == LB_D3Q19)
        #define CS_L_SQUARED (1.0/3.0)  // speed of sound on a unit lattice
        #define LB_CURRENT_DIR LB_D3Q19_DIR

      #elif (LB_CURRENT_MODEL == LB_D3Q27)
        #define CS_L_SQUARED (1.0/3.0)  // speed of sound on a unit lattice
        #define LB_CURRENT_DIR LB_D3Q27_DIR

      #else
        #error "Unknown lattice Boltzmann model! Please specify the right model in peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h!"
      #endif


      /** provides the lattice weights */
      template<int numberDirections>
      struct LatticeWeights {
        double _entries[numberDirections];
      };
      // ------------------------------------------------------------------ //



      /** provides access to the lattice velocities */
      template<int numberDirections>
      struct LatticeVelocities {
        tarch::la::Vector<DIMENSIONS,double> _entries[numberDirections];
      };
      // ------------------------------------------------------------------ //



      // ------------- general functions needed to create lattice velocities and weights --------- //

      /** creates the set of lattice velocities connected to the model which is identified by
       *  @param DdQqModel; this function has to be manually implemented in the case of introducing
       *  a new discretisation model */
      template<int DdQqModel, int numberDirections>
      const LatticeVelocities<numberDirections> createLatticeVelocities();

      /** specialised 2D models. At this point, specialisations (that is new LB-models) have to be
       *  declared.
       */
      template<>
      const LatticeVelocities<LB_D2Q9_DIR> createLatticeVelocities<LB_D2Q9,LB_D2Q9_DIR>();

      /** specialised 3D models. At this point, specialisations (that is new LB-models) have to be
       *  declared.
       */
      template<>
      const LatticeVelocities<LB_D3Q15_DIR> createLatticeVelocities<LB_D3Q15,LB_D3Q15_DIR>();

      template<>
      const LatticeVelocities<LB_D3Q19_DIR> createLatticeVelocities<LB_D3Q19,LB_D3Q19_DIR>();

      template<>
      const LatticeVelocities<LB_D3Q27_DIR> createLatticeVelocities<LB_D3Q27,LB_D3Q27_DIR>();


      /** creates the weights of the pdf's; this function has to be manually implemented
       * in the case of introducing a new discretisation model */
      template<int DdQqModel, int numberDirections>
      const LatticeWeights<numberDirections> createLatticeWeights();

      /** specialised weights for 2D models. At this point, specialisations (that is new LB-models) have to be
       *  declared.
       */
      template<>
      const LatticeWeights<LB_D2Q9_DIR> createLatticeWeights<LB_D2Q9,LB_D2Q9_DIR>();

      /** specialised weights for 3D models. At this point, specialisations (that is new LB-models) have to be
       *  declared.
       */
      template<>
      const LatticeWeights<LB_D3Q15_DIR> createLatticeWeights<LB_D3Q15,LB_D3Q15_DIR>();

      template<>
      const LatticeWeights<LB_D3Q19_DIR> createLatticeWeights<LB_D3Q19,LB_D3Q19_DIR>();

      template<>
      const LatticeWeights<LB_D3Q27_DIR> createLatticeWeights<LB_D3Q27,LB_D3Q27_DIR>();
      // ------------------------------------------------------------------ //



      template<int DdQqModel, int numberDirections>
      const LatticeWeights<numberDirections> createLatticeWeights() {

        LatticeWeights<numberDirections> weights;
        for (int i = 0; i < numberDirections; i++){
          weights._entries[i] = -1.0;
        }

        assertion1(false, "peano::applications::latticeboltzmann::createWeights(): Current model not supported yet!");
        return weights;
      }


      template<int DdQqModel, int numberDirections>
      const LatticeVelocities<numberDirections> createLatticeVelocities(){

        LatticeVelocities<numberDirections> velocities;
        for (int i = 0; i < numberDirections; i++){
          for (int j = 0; j < DIMENSIONS; j++){
            velocities._entries[i][j] = -1.0;
          }
        }
        assertion1(false, "peano::applications::latticeboltzmann::createLatticeVelocities(): Current model not supported yet!");
        return velocities;
      }
      // ------------- general functions (end) -------------------- //


      /** static const lattice velocities and weights */
      static const LatticeVelocities<LB_CURRENT_DIR> LATTICEVELOCITIES(
        createLatticeVelocities<LB_CURRENT_MODEL,LB_CURRENT_DIR>()
      );

      static const LatticeWeights<LB_CURRENT_DIR> LATTICEWEIGHTS(
        createLatticeWeights<LB_CURRENT_MODEL,LB_CURRENT_DIR>()
      );
    }
  }
}
#endif /* _LATTICE_BOLTZMANN_LATTICEBOLTZMANNDEFINITIONS_H_ */
