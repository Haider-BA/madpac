/*
 * ConfigurationTest.h
 *
 * @Date: 08.10.2010
 * @Author: eckhardw
 */

#ifndef CONFIGURATIONTEST_H_
#define CONFIGURATIONTEST_H_

#include <cppunit/extensions/HelperMacros.h>

class ConfigurationTest : public CppUnit::TestFixture {


	CPPUNIT_TEST_SUITE(ConfigurationTest);
	CPPUNIT_TEST(testEmptyConfiguration);
	CPPUNIT_TEST(testConfiguration);
	CPPUNIT_TEST_SUITE_END();

public:
	ConfigurationTest();

	virtual ~ConfigurationTest();

	void testEmptyConfiguration();

	void testConfiguration();
};

#endif /* CONFIGURATIONTEST_H_ */
