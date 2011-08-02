#include "peano/applications/shallowwater/RegularGridVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"


peano::applications::shallowwater::RegularGridVertex::RegularGridVertex():
  Base() { 
  // @todo Insert your code here
}


peano::applications::shallowwater::RegularGridVertex::RegularGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::shallowwater::RegularGridVertex::mergeWithNeighbour(const peano::applications::shallowwater::RegularGridVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}
 

void peano::applications::shallowwater::RegularGridVertex::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif

void peano::applications::shallowwater::RegularGridVertex::init() {
  _vertexData.setHeightSeabedAbove(tarch::la::Vector<2,double>(0.));
  _vertexData.setHeightSeabedRight(0.);

  _vertexData.setHeightWaterAbove(tarch::la::Vector<2,double>(0.));
  _vertexData.setHeightWaterRight(0.);

  _vertexData.setMomentumXAbove(tarch::la::Vector<2,double>(0.));
  _vertexData.setMomentumYAbove(tarch::la::Vector<2,double>(0.));

  _vertexData.setMomentumXRight(0.);
  _vertexData.setMomentumYRight(0.);
}

void peano::applications::shallowwater::RegularGridVertex::updateWithCellData(double heightSeabed, double heightWater, double momentumX, double momentumY, const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices) {

  for(int i = 0; i < 3; i++) {
    if(i == 0) { //vertex-position: bottom left (edge: left and bottom)
      vertices[ enumerator(i) ]._vertexData.setHeightSeabedAbove(1, heightSeabed);

      vertices[ enumerator(i) ]._vertexData.setHeightWaterAbove(1, heightWater);

      vertices[ enumerator(i) ]._vertexData.setMomentumXAbove(1, momentumX);

      vertices[ enumerator(i) ]._vertexData.setMomentumYAbove(1, momentumY);
    }

    else if(i == 1) { //vertex-position: bottom right (edge: right)
      vertices[ enumerator(i) ]._vertexData.setHeightSeabedAbove(0, heightSeabed);

      vertices[ enumerator(i) ]._vertexData.setHeightWaterAbove(0, heightWater);

      vertices[ enumerator(i) ]._vertexData.setMomentumXAbove(0, momentumX);
    }

    else if(i == 2) { //vertex-position: top left (edge: top)
      vertices[ enumerator(i) ]._vertexData.setHeightSeabedRight(heightSeabed);

      vertices[ enumerator(i) ]._vertexData.setHeightWaterRight(heightWater);

      vertices[ enumerator(i) ]._vertexData.setMomentumYRight(momentumY);
    }
  }
}

double peano::applications::shallowwater::RegularGridVertex::getHeightWaterUpdate(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices) {
  double heightWaterUpdate = 0.;
  for(int i = 0; i < 3; i++) {
    if(i == 0) {
      heightWaterUpdate += vertices[ enumerator(i) ]._vertexData.getFluxHeightWaterAbove(0);
      heightWaterUpdate += vertices[ enumerator(i) ]._vertexData.getFluxHeightWaterRight(0);
    }
    else if (i == 1) {
      heightWaterUpdate += vertices[ enumerator(i) ]._vertexData.getFluxHeightWaterAbove(1);
    }
    else if (i == 2) {
      heightWaterUpdate += vertices[ enumerator(i) ]._vertexData.getFluxHeightWaterRight(1);
    }
  }
  return heightWaterUpdate;
}

double peano::applications::shallowwater::RegularGridVertex::getMomentumXUpdate(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices) {
  double momentumXUpdate = 0.;
  for(int i = 0; i < 3; i++) {
    if(i == 0) {
      momentumXUpdate += vertices[ enumerator(i) ]._vertexData.getFluxMomentumXAbove(0);
    }
    else if (i == 1) {
      momentumXUpdate += vertices[ enumerator(i) ]._vertexData.getFluxMomentumXAbove(1);
    }
  }
  return momentumXUpdate;
}

double peano::applications::shallowwater::RegularGridVertex::getMomentumYUpdate(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices) {
  double momentumYUpdate = 0.;
  for(int i = 0; i < 3; i++) {
    if( i == 0) {
      momentumYUpdate += vertices[ enumerator(i) ]._vertexData.getFluxMomentumYRight(0);
    }
    else if ( i == 2) {
      momentumYUpdate += vertices[ enumerator(i) ]._vertexData.getFluxMomentumYRight(1);
    }
  }
  return momentumYUpdate;
}

void peano::applications::shallowwater::RegularGridVertex::calculateFluctuations(const tarch::la::Vector<DIMENSIONS,double>&  x) { //(see [4], chapter 4.1)
  double hL = _vertexData.getHeightWaterAbove(0);
  double hR = _vertexData.getHeightWaterAbove(1);

  double huL = _vertexData.getMomentumXAbove(0);
  double huR = _vertexData.getMomentumXAbove(1);

  double hvL = 0.;
  double hvR = 0.;

  double bL = _vertexData.getHeightSeabedAbove(0);
  double bR = _vertexData.getHeightSeabedAbove(1);
  double drytol = 0.001;
  double g = 9.81;

  calculateFluctuationsInOneDirection(hL, hR, huL, huR, hvL, hvR, bL, bR, drytol, g, x, 0);

  hL = _vertexData.getHeightWaterRight();
  hR = _vertexData.getHeightWaterAbove(1);

  huL = _vertexData.getMomentumYRight();
  huR = _vertexData.getMomentumYAbove(1);

  bL = _vertexData.getHeightSeabedRight();
  bR = _vertexData.getHeightSeabedAbove(1);

  calculateFluctuationsInOneDirection(hL, hR, huL, huR, hvL, hvR, bL, bR, drytol, g, x, 1);
}

void peano::applications::shallowwater::RegularGridVertex::calculateFluctuationsInOneDirection(double hL,double hR,
                                                                                               double huL, double huR,
                                                                                               double hvL, double hvR,
                                                                                               double bL, double bR,
                                                                                               double drytol, double g,
                                                                                               const tarch::la::Vector<DIMENSIONS,double>&  x, int direction) {
  double* s;
  double** fwave;

  int borderLeft = 0;
  int borderRight = 0;

  //TODO: boundary conditions (hardcoded), (see [4], chapter 3.4)
  if(x[direction] == 0) {
    hL = hR;
    huL = huR;
    bL = bR;
    borderLeft = 1;
  }
  else if(x[direction] == 1) {
    hR = hL;
    huR = huL;
    bR = bL;
    borderRight = 1;
  }
  else if(bL >= bR + hR) {
    hL = hR;
    huL = -huR;
    bL = bR;
    borderLeft = 1;
  }
  else if(bR >= bL + hL) {
    hR = hL;
    huR = -huL;
    bR = bL;
    borderRight = 1;
  }

  double leftGoingFlux[3] = {0., 0., 0.};
  double rightGoingFlux[3] = {0., 0., 0.};

  if(!(hR < drytol && hL < drytol)) { //skip problem if in a completely dry area
    solveRiemannProblem(hL, hR, huL, huR, hvL, hvR, bL, bR, drytol, g, &s, &fwave);

    //compute fluctuations (see [1], chapter 3, formula (3.1) and (3.7) and [4], chapter 3.5)
    if(s[0] < 0 && borderLeft == 0 ) { //left-going wave
      leftGoingFlux[0] += fwave[0][0];
      leftGoingFlux[1] += fwave[1][0];
    }
    else if(s[0] > 0 && borderRight == 0 ) { //right-going wave
      rightGoingFlux[0] += fwave[0][0];
      rightGoingFlux[1] += fwave[1][0];
    }
    else if(s[0] == 0) {
      if (borderLeft == 0) {
        leftGoingFlux[0] += .5*fwave[0][0];
        leftGoingFlux[1] += .5*fwave[1][0];
      }
      if (borderRight == 0) {
        rightGoingFlux[0] += .5*fwave[0][0];
        rightGoingFlux[1] += .5*fwave[1][0];
      }
    }

    if(s[2] < 0 && borderLeft == 0) { //left-going wave
      leftGoingFlux[0] += fwave[0][2];
      leftGoingFlux[1] += fwave[1][2];
    }
    else if(s[2] > 0 && borderRight == 0) { //right-going wave
      rightGoingFlux[0] += fwave[0][2];
      rightGoingFlux[1] += fwave[1][2];
    }
    else if(s[2] == 0) {
      if(borderLeft == 0) {
        leftGoingFlux[0] += .5*fwave[0][2];
        leftGoingFlux[1] += .5*fwave[1][2];
      }
      if(borderRight == 0) {
        rightGoingFlux[0] += .5*fwave[0][2];
        rightGoingFlux[1] += .5*fwave[1][2];
      }
    }

    for(int i = 0; i < 3; i++) {
      delete[] fwave[i];
    }
    delete[] s;
    delete[] fwave;
  }

  if(direction == 0) {
    _vertexData.setFluxHeightWaterAbove(0, rightGoingFlux[0]);
    _vertexData.setFluxHeightWaterAbove(1, leftGoingFlux[0]);

    _vertexData.setFluxMomentumXAbove(0, rightGoingFlux[1]);
    _vertexData.setFluxMomentumXAbove(1, leftGoingFlux[1]);
  }
  else {
    _vertexData.setFluxHeightWaterRight(0, rightGoingFlux[0]);
    _vertexData.setFluxHeightWaterRight(1, leftGoingFlux[0]);

    _vertexData.setFluxMomentumYRight(0, rightGoingFlux[1]);
    _vertexData.setFluxMomentumYRight(1, leftGoingFlux[1]);
  }
}

void peano::applications::shallowwater::RegularGridVertex::solveRiemannProblem(double hL, double hR, double huL, double huR, double hvL, double hvR, double bL, double bR, double drytol, double g, double** s, double*** fwave) {

  //local
  double uL, uR, vL, vR, phiL, phiR;
  double sL, sR;;

  //inform about a bad riemann problem from the start
  if(hR < 0 || hL < 0) {
    //TODO DEBUG MESSAGE: printf("Negative input: hl, hr = %f, %f\n", hL, hR);

  }

  //zero (small) negative values if they exist
  if(hR < 0) hR = 0;
  if(hL < 0) hL = 0;

  //check for wet/dry boundary
  if(hR >= drytol) {
    uR = huR/hR;
    vR = hvR/hR;
    phiR = .5*g*hR*hR + huR*huR / hR;
  }
  else {
    //TODO DEBUG MESSAGE: printf("hR < drytol, setting to zero\n");
    hR = 0;
    huR = 0;
    hvR = 0;
    uR = 0;
    vR = 0;
    phiR = 0;
  }

  if(hL >= drytol) {
    uL = huL/hL;
    vL = hvL/hL;
    phiL = .5*g*hL*hL + huL*huL/hL ;
  }
  else {
    //TODO DEBUG MESSAGE:printf("hL < drytol, setting to zero\n");
    hL = 0;
    huL = 0;
    hvL = 0;
    uL = 0;
    vL = 0;
    phiL = 0;
  }

  //solve Riemann problem
  double* sw;
  double** fw = new double*[3];
  sw = new double[3];
  for(int i = 0; i < 3; i++) {
    fw[i] = new double[3];
  }

  //eigenvalues (see [2], chapter 13.1)
  sL = uL - sqrt(g*hL);
  sR = uR + sqrt(g*hR);

  solveFWave(3, 3, hL, hR, huL, huR, hvL, hvR, bL, bR, uL, uR, vL, vR, phiL, phiR, sL, sR, drytol, g, sw, fw);

  *s = sw;
  *fwave = fw;
}



void peano::applications::shallowwater::RegularGridVertex::solveFWave(int meqn, int mwaves, double hL, double hR, double huL, double huR, double hvL, double hvR, double bL, double bR, double uL, double uR, double vL, double vR, double phiL, double phiR, double s1, double s2, double drytol, double g, double* sw, double** fw) {
  //local
  double delh, delhu, delphi, delb, delphidecomp;
  double deldelphi;
  double beta1, beta2;

  if(s1-s2 == 0.) { //TODO: nothing happens - exit, cancellation for small (s1-s2)!
    for (int i = 0; i < 3; i++) {
      sw[i] = 0.;
      for (int j = 0; j < 3; j++) {
        fw[i][j] = 0.;
      }
    }
    return;
  }

  /*
   * f-wave decomposition (see [1], chapter 7, formula (7.6) and [4], chapter 3.6)
   * corresponding eigenvalues and eigenvectors: (see [2], chapter 13.1 and [4], chapter 3.6)
   */

  //determine del vectors
  delh = hR-hL;
  delhu = huR-huL;
  delphi = phiR-phiL;
  delb = bR-bL;

  deldelphi = -g*.5*(hR+hL)*delb; //approximation of the source term (see [3], chapter 6.4 and [4], chapter 3.5)
  delphidecomp = delphi - deldelphi;

  //flux decomposition
  beta1 = (s2*delhu - delphidecomp)/(s2-s1);
  beta2 = (delphidecomp - s1*delhu)/(s2-s1);


  sw[0] = s1;
  sw[1] = .5*(s1+s2); //speed of the transverse wave (not used yet)
  sw[2] = s2;

  //1st nonlinear wave
  fw[0][0] = beta1;
  fw[1][0] = beta1 * s1;
  fw[2][0] = 0.;

  //2dn nonlinear wave
  fw[0][2] = beta2;
  fw[1][2] = beta2 * s2;
  fw[2][2] = 0;

  //TODO: advection of transverse wave
  fw[0][1] = 0.;
  fw[1][1] = 0.;
  fw[2][1] = 0.;
}

