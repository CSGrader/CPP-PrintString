#include "gtest/gtest.h"
#include "../../../src/PrintString/PrintStr.cpp"

/** Test Naming Requirements:
 *  - Unique Name
 *  - Name describes what it is testing
 */
namespace {


    TEST(Print_String, Test1_Hello_World) {
        testing::internal::CaptureStdout();
        PrintString p;
        p.printStr("hello world");
        std::string output = testing::internal::GetCapturedStdout();
        std::string expected = "hello world";
        EXPECT_EQ(expected, output);
    }

    TEST(Print_String, Test2_Long_String) {
        testing::internal::CaptureStdout();
        PrintString p;
        p.printStr("This is a very long string that should work when printed. This doesn't have any newline characters; that is for the next test. But, this is just to show that the code runs even though it is given a pretty long string. Honestly, this string is not 'super' long. Just, relatively long, but, it does the job regardless");
        std::string output = testing::internal::GetCapturedStdout();
        std::string expected = "This is a very long string that should work when printed. This doesn't have any newline characters; that is for the next test. But, this is just to show that the code runs even though it is given a pretty long string. Honestly, this string is not 'super' long. Just, relatively long, but, it does the job regardless";
        EXPECT_EQ(expected, output);
    }

    TEST(Print_String, Test3_NewLine) {
        testing::internal::CaptureStdout();
        PrintString p;
        p.printStr("Here is a newline: \n");
        std::string output = testing::internal::GetCapturedStdout();
        std::string expected = "Here is a newline: \n";
        EXPECT_EQ(expected, output);
    }

}