#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/BlockFluctuatingCollisionModel.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel"
);



peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel::
BlockFluctuatingCollisionModel(
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState& simData
): _mu(simData.getMu()), _gamma(simData.getGamma()), _phi(setupPhi(simData.getGamma())),
   _M(createMomentMatrix()), _MTranspose(createTransposedMomentMatrix()){
}



tarch::la::Vector<LB_CURRENT_DIR,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel::
setupPhi(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) const {
  tarch::la::Vector<LB_CURRENT_DIR,double> phi(0.0);
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    assertion( (1-gamma(i)*gamma(i)) >= 0.0 );
    phi(i) = std::sqrt(1-gamma(i)*gamma(i));
  }
  return phi;
}



tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel::
createMomentMatrix() const {
  tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double> M(0.0);

  // ---------------------- D2Q9 -----------------------------
#if (LB_CURRENT_DIR==LB_D2Q9_DIR)
  // used for normalisation of the momentum matrix
  double w[LB_D2Q9_DIR] = {1.0, 1.0/3.0, 1.0/3.0, 4.0, 4.0/9.0, 1.0/9.0, 2.0/3.0, 2.0/3.0, 16.0};

  for (int i = 0; i < LB_D2Q9_DIR; i++){

    // compute normalisation factor
    double normFac[LB_D2Q9_DIR];
    for (int k = 0; k < LB_D2Q9_DIR; k++){
      normFac[k] = std::sqrt(peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[i]/w[k]);
    }

    // compute squared norm of current lattice velocity
    double c_i2 =   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                +   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1);

    // compute corresponding column of moment matrix
    M(0,i) = normFac[0] * 1.0;

    M(1,i)
    = normFac[1] * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0);

    M(2,i)
    = normFac[2] * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1);

    M(3,i)
    = normFac[3] * (3.0*c_i2 - 2.0);

    M(4,i)
    = normFac[4] * (  2.0 * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0) *
                            peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0) - c_i2);

    M(5,i)
    = normFac[5] * ( peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0) *
        peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1));

    M(6,i)
    = normFac[6] * ( ( 3.0*c_i2 - 4.0 ) * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0) );

    M(7,i)
    = normFac[7] * ( ( 3.0*c_i2 - 4.0 ) * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1) );

    M(8,i)
    = normFac[8] * ( 9.0*c_i2*c_i2 - 15.0*c_i2 + 2.0 );
  }


  // ---------------------- D3Q19 ----------------------------
#elif (LB_CURRENT_DIR==LB_D3Q19_DIR)

  // used for normalisation of the momentum matrix
  double w[LB_D3Q19_DIR] = {     1.0, 1.0/3.0, 1.0/3.0, 1.0/3.0, 2.0/3.0, 4.0/3.0, 4.0/9.0, 1.0/9.0, 1.0/9.0, 1.0/9.0,
                             2.0/3.0, 2.0/3.0, 2.0/3.0, 2.0/9.0, 2.0/9.0, 2.0/9.0,     2.0, 4.0/3.0, 4.0/9.0};

  for (int i = 0; i < LB_D3Q19_DIR; i++){

    // compute normalisation factor
    double normFac[LB_D3Q19_DIR];
    for (int k = 0; k < LB_D3Q19_DIR; k++){
      normFac[k] = std::sqrt(peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[i]/w[k]);
    }

    // compute squared norm of current lattice velocity
    double c_i2 =   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                +   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                +   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2);

    // compute corresponding column of moment matrix
    M(0,i)
    = normFac[0] * 1.0;

    M(1,i)
    = normFac[1] * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0);

    M(2,i)
    = normFac[2] * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1);

    M(3,i)
    = normFac[3] * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2);

    M(4,i)
    = normFac[4] * (c_i2 - 1.0);

    M(5,i)
    = normFac[5] * ( 3.0 * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                         * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                   - c_i2);

    M(6,i)
    = normFac[6] * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                     * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                   -   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2)
                     * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2) );

    M(7,i)
    = normFac[7] * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                     * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1) );

    M(8,i)
    = normFac[8] * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                     * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2) );

    M(9,i)
    = normFac[9] * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                     * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2) );

    M(10,i)
    = normFac[10] * ( 3.0 * c_i2 - 5.0)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0);

    M(11,i)
    = normFac[11] * ( 3.0 * c_i2 - 5.0)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1);

    M(12,i)
    = normFac[12] * ( 3.0 * c_i2 - 5.0)
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2);

    M(13,i)
    = normFac[13] * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                    -   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2) )
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0);

    M(14,i)
    = normFac[14] * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2)
                    -   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0) )
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1);

    M(15,i)
    = normFac[15] * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                    -   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1) )
                  * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2);

    M(16,i)
    = normFac[16] * ( 3.0 * c_i2*c_i2 - 6.0 * c_i2 + 1.0 );

    M(17,i)
    = normFac[17] * ( 2.0 * c_i2 - 3.0 )
                  * ( 3.0 * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                          * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0)
                    - c_i2 );

    M(18,i)
    = normFac[18] * ( 2.0 * c_i2 - 3.0 )
                  * (   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1)
                    -   peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2)
                      * peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2) );
  }


  // ---------------------- other models -----------------------------
#else
  assertion1(false,"Fluctuating LB only for D2Q9/ D3Q19 available!");
  assertion(false);
#endif

  return M;
}


tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double>
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel::
createTransposedMomentMatrix() const {
  // create moment matrix and transpose it
  tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double> M(createMomentMatrix());
  tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double> MTranspose(0.0);

  for (int i = 0; i < LB_CURRENT_DIR; i++){
    for (int j = 0; j < LB_CURRENT_DIR; j++){
      MTranspose(i,j) = M(j,i);
    }
  }
  return MTranspose;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel::
collide(
  const int &cellNumber,
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries
) const {

  // initialise equilibrium distribution array
  tarch::la::Vector<LB_CURRENT_DIR,double> feq(0.0);

  // memory for normalised non-equilibrium parts
  tarch::la::Vector<LB_CURRENT_DIR,double> x(0.0);

  // the moments
  tarch::la::Vector<LB_CURRENT_DIR,double> m(0.0);

  // velocity in this cell
  tarch::la::Vector<DIMENSIONS,double> localVelocity(0.0);
  for (int d = 0; d < DIMENSIONS; d++){
    localVelocity(d) = velocity(cellNumber*DIMENSIONS+d);
  }

  // compute the equilibrium distribution
  peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKCOMPUTECELLVALUES.computeFeq(
    density(cellNumber),localVelocity,feq
  );

  // compute the thermally normalised non-equilibrium parts x
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    x(i) = (pdf(cellNumber*LB_CURRENT_DIR+i) - feq(i))
         / std::sqrt(_mu*density(cellNumber)*peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[i]);
  }

  // map x to the momentum space
  tarch::la::multiply(_M,x,m);

  // update the modes
  for (int k = 0; k < LB_CURRENT_DIR; k++){
    m(k) = _gamma(k)*m(k)
         + _phi(k)*peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService::
                   getInstance().getGaussianRandomNumber();
  }


  // map the modes back to x
  tarch::la::multiply(_MTranspose,m,x);

  // scale to thermally correct pdf values
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    x(i) = x(i) * std::sqrt(_mu*density(cellNumber)*peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[i]);

    pdf(cellNumber*LB_CURRENT_DIR+i) = feq(i)+x(i);
  }
}
