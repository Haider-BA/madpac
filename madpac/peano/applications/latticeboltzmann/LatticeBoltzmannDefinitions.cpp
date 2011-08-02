#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {

      // ------------------ D2Q9-model ---------------------

      template<>
      const LatticeVelocities<LB_D2Q9_DIR> createLatticeVelocities<LB_D2Q9,LB_D2Q9_DIR>(){

        LatticeVelocities<LB_D2Q9_DIR> latVel;

        #if (DIMENSIONS == 2)
        double vel[LB_D2Q9_DIR][2] ={ {-1.0, -1.0},
                                      { 0.0, -1.0},
                                      { 1.0, -1.0},
                                      {-1.0,  0.0},
                                      { 0.0,  0.0},
                                      { 1.0,  0.0},
                                      {-1.0,  1.0},
                                      { 0.0,  1.0},
                                      { 1.0,  1.0} };

        for (int i = 0; i < LB_D2Q9_DIR; i++){
          for (int j = 0; j < 2; j++){
            latVel._entries[i][j] = vel[i][j];
          }
        }
        #else
        assertion1(false,"createLatticeVelocities(): Only call this function when compiling 2D simulations!");
        #endif

        return latVel;
      }


      /** template specialisation for the D2Q9-model (for creating the corresponding lattice
       *  weights)
       */
      template<>
      const LatticeWeights<LB_D2Q9_DIR> createLatticeWeights<LB_D2Q9,LB_D2Q9_DIR>(){
        LatticeWeights<LB_D2Q9_DIR> latWeights;
        double weights[LB_D2Q9_DIR] = {1.0/36.0, 1.0/9.0, 1.0/36.0,
                                       1.0/ 9.0, 4.0/9.0, 1.0/ 9.0,
                                       1.0/36.0, 1.0/9.0, 1.0/36.0};

        for (int i = 0; i < LB_D2Q9_DIR; i++){
          latWeights._entries[i] = weights[i];
        }

        return latWeights;
      }


      // ------------------ D3Q15-model ---------------------
      template<>
      const LatticeVelocities<LB_D3Q15_DIR> createLatticeVelocities<LB_D3Q15,LB_D3Q15_DIR>(){
        LatticeVelocities<LB_D3Q15_DIR> latVel;

        #if (DIMENSIONS == 3)
        double vel[LB_D3Q15_DIR][3] = { {-1.0, -1.0, -1.0},
                                        { 1.0, -1.0, -1.0},
                                        { 0.0,  0.0, -1.0},
                                        {-1.0,  1.0, -1.0},
                                        { 1.0,  1.0, -1.0},
                                        { 0.0, -1.0,  0.0},
                                        {-1.0,  0.0,  0.0},
                                        { 0.0,  0.0,  0.0},
                                        { 1.0,  0.0,  0.0},
                                        { 0.0,  1.0,  0.0},
                                        {-1.0, -1.0,  1.0},
                                        { 1.0, -1.0,  1.0},
                                        { 0.0,  0.0,  1.0},
                                        {-1.0,  1.0,  1.0},
                                        { 1.0,  1.0,  1.0} };

        for (int i = 0; i < LB_D3Q15_DIR; i++){
          for (int j = 0; j < 3; j++){
            latVel._entries[i][j] = vel[i][j];
          }
        }
        #else
        assertion1(false,"createLatticeVelocities(): Only call this function when compiling 3D simulations!");
        #endif

        return latVel;
      }


      template<>
      const LatticeWeights<LB_D3Q15_DIR> createLatticeWeights<LB_D3Q15,LB_D3Q15_DIR>(){
        LatticeWeights<LB_D3Q15_DIR> latWeights;
        double weights[LB_D3Q15_DIR] = { 1.0/72.0, 1.0/72.0, 1.0/9.0, 1.0/72.0, 1.0/72.0,
                                          1.0/9.0,  1.0/9.0, 2.0/9.0,  1.0/9.0,  1.0/9.0,
                                         1.0/72.0, 1.0/72.0, 1.0/9.0, 1.0/72.0, 1.0/72.0};

        for (int i = 0; i < LB_D3Q15_DIR; i++){
          latWeights._entries[i] = weights[i];
        }

        return latWeights;
      }


      // ------------------ D3Q19-model ---------------------
      template<>
      const LatticeVelocities<LB_D3Q19_DIR> createLatticeVelocities<LB_D3Q19,LB_D3Q19_DIR>(){

        LatticeVelocities<LB_D3Q19_DIR> latVel;

        #if (DIMENSIONS == 3)
        double vel[LB_D3Q19_DIR][3] = { { 0.0, -1.0, -1.0},
                                        {-1.0,  0.0, -1.0},
                                        { 0.0,  0.0, -1.0},
                                        { 1.0,  0.0, -1.0},
                                        { 0.0,  1.0, -1.0},
                                        {-1.0, -1.0,  0.0},
                                        { 0.0, -1.0,  0.0},
                                        { 1.0, -1.0,  0.0},
                                        {-1.0,  0.0,  0.0},
                                        { 0.0,  0.0,  0.0},
                                        { 1.0,  0.0,  0.0},
                                        {-1.0,  1.0,  0.0},
                                        { 0.0,  1.0,  0.0},
                                        { 1.0,  1.0,  0.0},
                                        { 0.0, -1.0,  1.0},
                                        {-1.0,  0.0,  1.0},
                                        { 0.0,  0.0,  1.0},
                                        { 1.0,  0.0,  1.0},
                                        { 0.0,  1.0,  1.0} };

        for (int i = 0; i < LB_D3Q19_DIR; i++){
          for (int j = 0; j < 3; j++){
            latVel._entries[i][j] = vel[i][j];
          }
        }
        #else
        assertion1(false,"createLatticeVelocities(): Only call this function when compiling 3D simulations!");
        #endif

        return latVel;
      }


      template<>
      const LatticeWeights<LB_D3Q19_DIR> createLatticeWeights<LB_D3Q19,LB_D3Q19_DIR>(){
        LatticeWeights<LB_D3Q19_DIR> latWeights;
        double weights[LB_D3Q19_DIR] = { 1.0/36.0, 1.0/36.0, 1.0/18.0, 1.0/36.0, 1.0/36.0,
                                         1.0/36.0, 1.0/18.0, 1.0/36.0, 1.0/18.0,  1.0/3.0, 1.0/18.0, 1.0/36.0, 1.0/18.0, 1.0/36.0,
                                         1.0/36.0, 1.0/36.0, 1.0/18.0, 1.0/36.0, 1.0/36.0};

        for (int i = 0; i < LB_D3Q19_DIR; i++){
          latWeights._entries[i] = weights[i];
        }

        return latWeights;
      }



      // ------------------ D3Q27-model ---------------------
      template<>
      const LatticeVelocities<LB_D3Q27_DIR> createLatticeVelocities<LB_D3Q27,LB_D3Q27_DIR>(){

        LatticeVelocities<LB_D3Q27_DIR> latVel;

        #if (DIMENSIONS == 3)
        double vel[LB_D3Q27_DIR][3] = { {-1.0,-1.0,-1.0},
                                        { 0.0,-1.0,-1.0},
                                        { 1.0,-1.0,-1.0},
                                        {-1.0, 0.0,-1.0},
                                        { 0.0, 0.0,-1.0},
                                        { 1.0, 0.0,-1.0},
                                        {-1.0, 1.0,-1.0},
                                        { 0.0, 1.0,-1.0},
                                        { 1.0, 1.0,-1.0},
                                        {-1.0,-1.0, 0.0},
                                        { 0.0,-1.0, 0.0},
                                        { 1.0,-1.0, 0.0},
                                        {-1.0, 0.0, 0.0},
                                        { 0.0, 0.0, 0.0},
                                        { 1.0, 0.0, 0.0},
                                        {-1.0, 1.0, 0.0},
                                        { 0.0, 1.0, 0.0},
                                        { 1.0, 1.0, 0.0},
                                        {-1.0,-1.0, 1.0},
                                        { 0.0,-1.0, 1.0},
                                        { 1.0,-1.0, 1.0},
                                        {-1.0, 0.0, 1.0},
                                        { 0.0, 0.0, 1.0},
                                        { 1.0, 0.0, 1.0},
                                        {-1.0, 1.0, 1.0},
                                        { 0.0, 1.0, 1.0},
                                        { 1.0, 1.0, 1.0}
                                      };

        for (int i = 0; i < LB_D3Q27_DIR; i++){
          for (int j = 0; j < 3; j++){
            latVel._entries[i][j] = vel[i][j];
          }
        }
        #else
        assertion1(false,"createLatticeVelocities(): Only call this function when compiling 3D simulations!");
        #endif

        return latVel;
      }


      template<>
      const LatticeWeights<LB_D3Q27_DIR> createLatticeWeights<LB_D3Q27,LB_D3Q27_DIR>(){
        LatticeWeights<LB_D3Q27_DIR> latWeights;
        double weights[LB_D3Q27_DIR] = {1.0/216.0, 1.0/54.0, 1.0/216.0,
                                         1.0/54.0, 2.0/27.0, 1.0/54.0,
                                        1.0/216.0, 1.0/54.0, 1.0/216.0,

                                         1.0/54.0, 2.0/27.0, 1.0/54.0,
                                         2.0/27.0, 8.0/27.0, 2.0/27.0,
                                         1.0/54.0, 2.0/27.0, 1.0/54.0,

                                        1.0/216.0, 1.0/54.0, 1.0/216.0,
                                         1.0/54.0, 2.0/27.0, 1.0/54.0,
                                        1.0/216.0, 1.0/54.0, 1.0/216.0
                                       };

        for (int i = 0; i < LB_D3Q27_DIR; i++){
          latWeights._entries[i] = weights[i];
        }

        return latWeights;
      }


    }
  }
}
