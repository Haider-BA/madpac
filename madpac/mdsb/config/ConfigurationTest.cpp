/*
 * ConfigurationTest.cpp
 *
 * @Date: 08.10.2010
 * @Author: eckhardw
 */

#include "ConfigurationTest.h"
#include "config/Configuration.h"
#include <utils/Vector.h>

#include <sstream>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(ConfigurationTest);

string xml =
		"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
        <config dim=\"2\" statistics=\"true\">\
		    <container type=\"LinkedCells\" cutoff=\"4.0\"/>\
            <domain size-x=\"120\" size-y=\"60\" size-z=\"1\"/>\
            <timedata delta=\"0.01\" end=\"10\"/>\
            <output filebase=\"md_out\" frequency=\"10\"/>\
            <inputfile name=\"eingabe-sonne.txt\"/>\
            <inputfile name=\"eingabe-sonne2.txt\"/>\
            <inputcuboid x0=\"2\" x1=\"2\" x2=\"2\"  v0=\"5\" v1=\"5\" v2=\"5\"  n0=\"10\" n1=\"10\" n2=\"10\" h=\"1.3\">\
		        <material epsilon=\"1.0\" sigma=\"1.0\" mass=\"1.0\" />\
		    </inputcuboid>\
		    <inputsphere x0=\"2\" x1=\"2\" x2=\"2\"  v0=\"5\" v1=\"5\" v2=\"5\"  n=\"10\" h=\"1.3\">\
		        <material epsilon=\"1.0\" sigma=\"1.0\" mass=\"1.0\" />\
		    </inputsphere>\
			<boundary axis=\"x\" position_up=\"true\" type=\"reflecting\"/>\
		</config>";

ConfigurationTest::ConfigurationTest() {
}

ConfigurationTest::~ConfigurationTest() {
}

void ConfigurationTest::testEmptyConfiguration() {
	Configuration& config = Configuration::getInstance();
	CPPUNIT_ASSERT_EQUAL(config.getTEnd(), 0.0);
	CPPUNIT_ASSERT_EQUAL(config.getDeltaT(), 0.0);
	CPPUNIT_ASSERT_EQUAL(config.getOutputFilename(), string(""));
	CPPUNIT_ASSERT_EQUAL(config.getOutputFrequency(), 0);
	utils::Vector<double, 3> v(0.);
	CPPUNIT_ASSERT_EQUAL(config.getDomainSize(), v);
	CPPUNIT_ASSERT_EQUAL(config.getCuboidInputs().size(), (size_t)0);
	CPPUNIT_ASSERT_EQUAL(config.getSphereInputs().size(), (size_t)0);
	CPPUNIT_ASSERT_EQUAL(config.getFileInputs().size(), (size_t)0);
}

void ConfigurationTest::testConfiguration() {
	istringstream str(xml);

	Configuration config = Configuration::getInstance();
	config.readConfiguration(str);
	//config.readConfiguration("example.xml");

	CPPUNIT_ASSERT_EQUAL(2, config.getDimension());
	CPPUNIT_ASSERT_EQUAL(10.0, config.getTEnd());
	CPPUNIT_ASSERT_EQUAL(0.01, config.getDeltaT());
	CPPUNIT_ASSERT_EQUAL(string("md_out"), config.getOutputFilename());
	CPPUNIT_ASSERT_EQUAL(10, config.getOutputFrequency());
	double sizeArray[] = {120, 60, 1};
	utils::Vector<double, 3> size(sizeArray);
	CPPUNIT_ASSERT_EQUAL(size, config.getDomainSize());
	CPPUNIT_ASSERT_EQUAL(config.getParticleContainer(), Configuration::linkedCells);
	CPPUNIT_ASSERT_EQUAL((size_t)1, config.getCuboidInputs().size());
	CPPUNIT_ASSERT_EQUAL((size_t)1, config.getSphereInputs().size());
	CPPUNIT_ASSERT_EQUAL((size_t)2, config.getFileInputs().size());

	vector<FileConfiguration>& files = config.getFileInputs();
	CPPUNIT_ASSERT_EQUAL(string("eingabe-sonne.txt"), files[0].getInputFilename());
	CPPUNIT_ASSERT_EQUAL(string("eingabe-sonne2.txt"), files[1].getInputFilename());

	vector<CuboidConfiguration> cuboids = config.getCuboidInputs();
	CuboidConfiguration cube = cuboids[0];

	utils::Vector<double, 3> x;
	x = 2.;
	CPPUNIT_ASSERT_EQUAL(x, cube.getX());
	utils::Vector<double, 3> v;
	v = 5.;
	CPPUNIT_ASSERT_EQUAL(v, cube.getV());
	utils::Vector<int, 3> n;
	n= 10;
	CPPUNIT_ASSERT_EQUAL(n, cube.getN());
	CPPUNIT_ASSERT_EQUAL(1.3, cube.getH());

	CPPUNIT_ASSERT_EQUAL(1, (int)config.getBoundaryConfigurations().size());
	CPPUNIT_ASSERT_EQUAL(true, config.getBoundaryConfigurations()[0].getPositionUp());
	CPPUNIT_ASSERT_EQUAL(Boundary::X, config.getBoundaryConfigurations()[0].getAxis());
}
