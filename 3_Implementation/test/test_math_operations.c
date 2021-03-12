#include "unity.h"
#include <special_Math_Functions.h>
#include <financial_Calculation.h>

/* Modify these two lines according to the project */
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_logarithm(void);
void test_exponent(void);
void test_squareroot(void);
void test_simple_Interest(void);
void test_compound_Interest(void);
void test_emi_Calculator(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_logarithm);
  RUN_TEST(test_exponent);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_simple_Interest);
  RUN_TEST(test_compound_Interest);
  RUN_TEST(test_emi_Calculator);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_logarithm(void) {
  TEST_ASSERT_EQUAL(1, logarithm(10));
  //TEST_ASSERT_EQUAL(1, logarithm(100));
}
void test_exponent(void) {
  TEST_ASSERT_EQUAL(2.7, exponent(1));
  
  /* Dummy fail*/
 // TEST_ASSERT_EQUAL(3.1, exponent(2));
}

void test_squareroot(void) {
  TEST_ASSERT_EQUAL(12, squareroot(144));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(10, squareroot(400));
}

void test_simple_Interest(void) {
  TEST_ASSERT_EQUAL(3200.00, simple_Interest(20000,2,8));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(6000.00, simple_Interest(40000,3,7));
}
void test_compound_Interest(void) {
  TEST_ASSERT_EQUAL(4992, compound_Interest(30000,2,8));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(11000.21, compound_Interest(70000,3,7));
}
void test_emi_Calculator(void) {
  TEST_ASSERT_EQUAL(140273, emi_Calculator(20000,3,7));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(10000, emi_Calculator(80000,2,8));
}
