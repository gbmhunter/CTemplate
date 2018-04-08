///
/// \file 			BasicTests.cpp
/// \author 		Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
/// \created		2017-11-27
/// \last-modified 	2017-11-27
/// \brief			Basic tests for the Template class.
/// \details
///					See README.rst in repo root dir for more info.

// System includes
#include "gtest/gtest.h"

// 3rd party includes
#include "CTemplate/Template.h"

// User includes
// nothing

namespace {

    class BasicTests : public ::testing::Test {
    protected:
        BasicTests() {}
        virtual ~BasicTests() {}
    };

    TEST_F(BasicTests, Add) {        
        EXPECT_EQ(3, Add(2, 1));
    }



}  // namespace