#include "peano/integration/partitioncoupling/builtin/tests/RotationTest.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::integration::partitioncoupling::builtin::tests::RotationTest)


peano::integration::partitioncoupling::builtin::tests::RotationTest::RotationTest():
tarch::tests::TestCase("peano::integration::partitioncoupling::builtin::tests::RotationTest"){}



void peano::integration::partitioncoupling::builtin::tests::RotationTest::run(){
  tarch::la::Vector<DIMENSIONS,double> rotationCenter(0.0);
  tarch::la::Vector<DIMENSIONS,double> referencePoint(0.0);
  double radius = 12.3;
  // set up angles to be tested
  std::vector<tarch::la::Vector<DIMENSIONS-1,double> > angles;
  std::vector<tarch::la::Vector<DIMENSIONS,double> > forceVectors;
  createAngles(angles);
  createForceVectors(forceVectors);

  // some random point for 'rotationCenter'
  for (int d = 0; d < DIMENSIONS; d++){
    rotationCenter(d) = 17.0 + d;
  }

  // determine reference point coordinates
  referencePoint = rotationCenter;
  referencePoint(0) += radius;

  // run over all test angles
  for (unsigned int k = 0; k < angles.size(); k++){

    // rotate reference point around rotation center by angles angles[k]
    tarch::la::Vector<DIMENSIONS,double> newPoint = rotateForward(rotationCenter,referencePoint,angles[k]);
    tarch::la::Vector<DIMENSIONS,double> newReferencePoint = rotateBackward(rotationCenter,newPoint,angles[k]);
    //std::cout << "New point: " << newPoint << ", new reference point: " << newReferencePoint << std::endl;
    validate(tarch::la::equals(tarch::la::dot(newReferencePoint-referencePoint,newReferencePoint-referencePoint),0.0));

    // rotate newPoint back and compare angles
    tarch::la::Vector<DIMENSIONS-1,double> oldAngles(0.0);
    getRotationAngles(rotationCenter,newPoint,oldAngles);
    //std::cout << "Angles: " << oldAngles << std::endl;
    newReferencePoint = rotateBackward(rotationCenter,newPoint,oldAngles);
    //std::cout << "Reference point (new): " << newReferencePoint << ", reference point (old): " << referencePoint << std::endl;
    validate(tarch::la::equals(tarch::la::dot(newReferencePoint-referencePoint,newReferencePoint-referencePoint),0.0,1e-10));

    //std::cout << angles[k] << "," << oldAngles << "," << referencePoint << "," << newPoint << std::endl;
    for (int d = 0; d < DIMENSIONS-1; d++){
#if (DIMENSIONS==2)
      validate(tarch::la::equals(angles[k](d),oldAngles(d)) || tarch::la::equals(fabs(angles[k](d)-oldAngles(d)),2.0*tarch::la::PI) );
#endif
    }

    for (unsigned int i = 0; i < forceVectors.size(); i++){
      tarch::la::Vector<DIMENSIONS,double> point2(newPoint+forceVectors[i]);
      tarch::la::Vector<DIMENSIONS,double> newReferencePoint2 = rotateBackward(rotationCenter,point2,angles[k]);
      double norm1 = tarch::la::dot(forceVectors[i],forceVectors[i]);
      double norm2 = tarch::la::dot(newReferencePoint2-referencePoint,newReferencePoint2-referencePoint);
      tarch::la::Vector<DIMENSIONS-1,bool> isZero(false);
      int count = 0;
      bool is90Degree = false;
      bool doOutput = true;
      //std::cout << "Norms: " << norm1 << "," << norm2 << std::endl;
      //std::cout << "Force: " << forceVectors[i] << ", new point: " << newReferencePoint2 << std::endl;
      validate(tarch::la::equals(norm1,norm2,1e-10));

      for (int d = 0; d < DIMENSIONS-1; d++){
        if (tarch::la::equals(angles[k](d),0.0,1e-10)){
          isZero(count) = true;
          count++;
        }
        if (   tarch::la::equals(angles[k](d),tarch::la::PI/2.0)
            || tarch::la::equals(angles[k](d),3.0*tarch::la::PI/2.0)
            || tarch::la::equals(angles[k](d),-tarch::la::PI)
            || tarch::la::equals(angles[k](d),tarch::la::PI) ){
          is90Degree = true;
        }
      }
      doOutput = is90Degree && tarch::la::equals(tarch::la::dot(forceVectors[i],forceVectors[i]),1.0);
      for (int d = 0; d < DIMENSIONS-2; d++){
        doOutput = doOutput && isZero(d);
      }
      if (doOutput){
        std::cout << "Angle: " << angles[k] << std::endl;
        std::cout << "Original force: " << forceVectors[i] << std::endl;
        std::cout << "New Vector: " << newReferencePoint2-referencePoint << std::endl;
      }
    }
  }
}


void peano::integration::partitioncoupling::builtin::tests::RotationTest::
createAngles(std::vector<tarch::la::Vector<DIMENSIONS-1,double> >&angles) const {
  angles.clear();
#if (DIMENSIONS==2)
  for (int i = 0; i < 16; i++){
    angles.push_back(tarch::la::Vector<1,double>(-tarch::la::PI + (i+1)*tarch::la::PI/8.0));
  }
#elif (DIMENSIONS==3)
  for (int i = 0; i < 16; i++){
    for (int j = 0; j < 16; j++){
      angles.push_back(tarch::la::Vector<2,double>(-tarch::la::PI + (i+1)*tarch::la::PI/8.0,-tarch::la::PI + (j+1)*tarch::la::PI/8.0) );
    }
  }
#else
  // no validation for non 2D/3D-cases
  validate(false);
#endif
}


void peano::integration::partitioncoupling::builtin::tests::RotationTest::
createForceVectors(std::vector<tarch::la::Vector<DIMENSIONS,double> >& forceVectors) const {
  forceVectors.clear();
#if ( (DIMENSIONS!=2) && (DIMENSIONS!=3))
  assertion(false);
#endif

#if (DIMENSIONS==3)
  for (int z = -1; z < 2; z++){
#endif
    for (int y = -1; y < 2; y++){
      for (int x = -1; x < 2; x++){
        tarch::la::Vector<DIMENSIONS,double> force(0.0);
        force(0) = (double)(x);
        force(1) = (double)(y);
#if (DIMENSIONS==3)
        force(2) = (double)(z);
#endif
        forceVectors.push_back(force);
      }
    }
#if (DIMENSIONS==3)
  }
#endif
}

void peano::integration::partitioncoupling::builtin::tests::RotationTest::setUp(){}

