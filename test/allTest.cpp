/*
 * allTest.cpp
 *
 *  Created on: Aug 9, 2019
 *      Author: 310098657
 */


#include "gtest/gtest.h"

int main (int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

