#include "scenario/diffusionequation/tests/CornerPointFieldTest.h"
#include "scenario/diffusionequation/CornerPointField.h"
#include "tarch/la/VectorAssign.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(scenario::diffusionequation::tests::CornerPointFieldTest)



#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif



scenario::diffusionequation::tests::CornerPointFieldTest::CornerPointFieldTest():
  TestCase( "scenario::diffusionequation::tests::CornerPointFieldTest" ) {
}


scenario::diffusionequation::tests::CornerPointFieldTest::~CornerPointFieldTest() {
}


void scenario::diffusionequation::tests::CornerPointFieldTest::run() {
  testMethod( testCubeWithSixColoursIn2d );
}


void scenario::diffusionequation::tests::CornerPointFieldTest::setUp() {
}


void scenario::diffusionequation::tests::CornerPointFieldTest::testCubeWithSixColoursIn2d() {
  #ifdef Dim2
  tarch::la::Vector<DIMENSIONS,double>  boundingBox;
  tarch::la::Vector<DIMENSIONS,double>  offset;
  tarch::la::Vector<2,int>              pillars;

  offset(0) =  -0.2;
  offset(1) =  -5.0;

  boundingBox(0) = 2.2;
  boundingBox(1) = 4.0;

  pillars(0) = 2;
  pillars(1) = 2;

  std::vector<CornerPointField::CornerPointPillar>  entries;

  entries.push_back( CornerPointField::CornerPointPillar() );
  entries.push_back( CornerPointField::CornerPointPillar() );
  entries.push_back( CornerPointField::CornerPointPillar() );
  entries.push_back( CornerPointField::CornerPointPillar() );

  entries[0].addLayerData(0.1,-3.0,-4.5, false);
  entries[1].addLayerData(0.2,-4.0,-5.0, false);
  entries[2].addLayerData(0.6,-3.0,-4.5, false);
  entries[3].addLayerData(0.7,-4.0,-5.0, false);

  entries[0].addLayerData(0.3,-1.0,-2.0, false);
  entries[1].addLayerData(0.4,-1.0,-3.0, false);
  entries[2].addLayerData(0.8,-1.0,-2.0, false);
  entries[3].addLayerData(0.9,-1.0,-3.0, false);

  CornerPointField record( boundingBox, offset, pillars, entries );

  tarch::la::Vector<DIMENSIONS,double>  testPoint;
  testPoint(0) = -3.0;
  testPoint(1) = -1.5;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), false );

  testPoint(0) = -0.1;
  testPoint(1) = -1.5;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), true );
  validateEquals( record.getInitialValue( testPoint ), 1.0 );
  validateEquals( record.getRhs( testPoint ), 0.0 );
  validateEquals( record.getThermalDiffusivity( testPoint ), 0.8 );

  testPoint(0) = -0.1;
  testPoint(1) = -2.2;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), false );

  testPoint(0) = -0.1;
  testPoint(1) = -3.1;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), true );
  validateEquals( record.getInitialValue( testPoint ), 1.0 );
  validateEquals( record.getRhs( testPoint ), 0.0 );
  validateEquals( record.getThermalDiffusivity( testPoint ), 0.6 );

  testPoint(0) = -0.1;
  testPoint(1) = -4.2;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), true );
  validateEquals( record.getInitialValue( testPoint ), 1.0 );
  validateEquals( record.getRhs( testPoint ), 0.0 );
  validateEquals( record.getThermalDiffusivity( testPoint ), 0.6 );

  testPoint(0) = -0.1;
  testPoint(1) = -5.2;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), false );


  testPoint(0) =  1.5;
  testPoint(1) = -0.2;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), false );

  testPoint(0) =  1.5;
  testPoint(1) = -1.5;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), true );
  validateEquals( record.getInitialValue( testPoint ), 1.0 );
  validateEquals( record.getRhs( testPoint ), 0.0 );
  validateEquals( record.getThermalDiffusivity( testPoint ), 0.9 );

  testPoint(0) =  1.5;
  testPoint(1) = -2.2;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), true );
  validateEquals( record.getInitialValue( testPoint ), 1.0 );
  validateEquals( record.getRhs( testPoint ), 0.0 );
  validateEquals( record.getThermalDiffusivity( testPoint ), 0.9 );

  testPoint(0) =  1.5;
  testPoint(1) = -3.1;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), false );

  testPoint(0) =  1.5;
  testPoint(1) = -4.2;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), true );
  validateEquals( record.getInitialValue( testPoint ), 1.0 );
  validateEquals( record.getRhs( testPoint ), 0.0 );
  validateEquals( record.getThermalDiffusivity( testPoint ), 0.7 );

  testPoint(0) =  1.5;
  testPoint(1) = -5.2;
  validateEquals( record.isCompletelyInside( testPoint, 0.0 ), false );




  #endif
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
