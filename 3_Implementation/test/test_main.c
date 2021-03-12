#include "unity.h"
#include <physics.h>
#include <profitloss.h>
#include <Arithmetic.h>
#include <Combinatorics.h>

/* Modify these two lines according to the project */
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions 
void test_permutation(void);
void test_permutation2(void);
void test_combination(void);
*/
/*Arithmetic function prototype*/
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_multiply2(void);
void test_divide(void);

/*Combinatorics function prototypes*/
void test_permutation(void);
void test_permutation2(void);
void test_combination(void);

void test_acceleration(void);
void test_capacitive_rec(void);
void test_circular_velocity(void);
void test_gravitation_force(void);
// void test_projectile_motion(void);

void test_cal_profit(void);
void test_discount(void);

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
  /*Tests for physics function*/
  RUN_TEST(test_acceleration);
  RUN_TEST(test_capacitive_rec);
  RUN_TEST(test_circular_velocity);
  RUN_TEST(test_gravitation_force);
  // RUN_TEST(test_projectile_motion);
  /*Tests for profitloss functions*/
  RUN_TEST(test_cal_profit);
  RUN_TEST(test_discount);
  /*Tests for arithmetic functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_multiply2);
  RUN_TEST(test_divide);
  /*Tests for Combinatorics functions*/
  RUN_TEST(test_permutation);
  RUN_TEST(test_permutation2);
  RUN_TEST(test_combination);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_acceleration(void) {
	
  TEST_ASSERT_EQUAL(1, acceleration(5,2,3));
  TEST_ASSERT_EQUAL(3, acceleration(12,3,3));
  
}
void test_capacitive_rec(void) {

  TEST_ASSERT_EQUAL(0.0015915, capacitive_rec(10,10));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, capacitive_rec(5, 2));
}
void test_circular_velocity(void)
 {
	
  TEST_ASSERT_EQUAL(6.283185, circular_velocity(3,3));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(30, circular_velocity(5,2));
}

void test_gravitation_force(void) 
{
	
  TEST_ASSERT_EQUAL(0.0000010005, gravitation_force(100,150,1));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, gravitation_force(1000,1500,10));
}

// void test_projectile_motion(void) 
// {
	
//   TEST_ASSERT_EQUAL(2.2092, projectile_motion(5,30));
  
//   /* Dummy fail*/
//   // TEST_ASSERT_EQUAL(80, projectile_motion(25,45));
// }


void test_cal_profit(void)
{
  TEST_ASSERT_EQUAL(147, cal_profit(200, 53));
  TEST_ASSERT_EQUAL(15, cal_profit(20, 5));
}
void test_discount(void) {
	
	
  TEST_ASSERT_EQUAL(450, discount(500, 10));
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(100, discount(120, 5));
}


void test_add(void) {
  TEST_ASSERT_EQUAL(50, Addition(30, 20));
  TEST_ASSERT_EQUAL(-10, Addition(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(1500, Addition(750, 7500));*/
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(1, subtract(1000, 900));*/
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(2, multiply(2, 5));*/
}

void test_multiply2(void)
{
  TEST_ASSERT_EQUAL(9999999900000000, multiply(100000000,99999999));
}
void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(3, divide(2, 2));*/
}

void test_permutation(void) {
  TEST_ASSERT_EQUAL(5, permutations(5, 1));
  /*TEST_ASSERT_EQUAL(12, permutations(4,2));*/
}
void test_permutation2(void) {
 
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(10, permutations(6, 4));*/
}
void test_combination(void) {
  TEST_ASSERT_EQUAL(2, combinations(2, 1));
  
  /* Dummy fail*/
 /* TEST_ASSERT_EQUAL(40, combinations(10, 4));*/
}
