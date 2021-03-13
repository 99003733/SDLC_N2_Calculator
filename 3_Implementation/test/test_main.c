#include "unity.h"
#include <physics.h>
#include <profitloss.h>
#include <Arithmetic.h>
#include <Combinatorics.h>
#include <mensuration.h>
#include <special_Math_Functions.h>
#include <financial_Calculation.h>

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
void test_add_testcase3(void);
void test_add_testcase4(void);
void test_subtract(void);
void test_subtract2(void);
void test_subtract3(void);
void test_subtract4(void);
void test_multiply(void);
void test_multiply2(void);
void test_multiply3(void);
void test_multiply4(void);
void test_multiply5(void);
void test_divide(void);
void test_divide2(void);
void test_divide3(void);
void test_divide4(void);
void test_divide5(void);

/*Combinatorics function prototypes*/
void test_permutation(void);
void test_permutation2(void);
void test_combination(void);
void test_combination2(void);

/*mensuration function prototypes*/
void test_area_of_square(void);
void test_area_of_square_testcase2(void);
void test_area_of_circle(void);
void test_area_of_sphere(void);
void test_volume_of_sphere(void);

void test_acceleration(void);
void test_capacitive_rec(void);
void test_circular_velocity(void);
void test_gravitation_force(void);
// void test_projectile_motion(void);

void test_cal_profit(void);
void test_discount(void);

//special math functions and financial calculation prototypes
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
  RUN_TEST(test_add_testcase3);
  RUN_TEST(test_add_testcase4);
  RUN_TEST(test_subtract);
  RUN_TEST(test_subtract2);
  RUN_TEST(test_subtract3);
  RUN_TEST(test_subtract4);
  RUN_TEST(test_multiply);
  RUN_TEST(test_multiply2);
  RUN_TEST(test_multiply3);
  RUN_TEST(test_multiply4);
  RUN_TEST(test_multiply5);
  RUN_TEST(test_divide);
  RUN_TEST(test_divide2);
  RUN_TEST(test_divide3);
  RUN_TEST(test_divide4);
  RUN_TEST(test_divide5);
  
  /*Tests for Combinatorics functions*/
  RUN_TEST(test_permutation);
  RUN_TEST(test_permutation2);
  RUN_TEST(test_combination);
  RUN_TEST(test_combination2);

  /*Test for Mensuration functions*/
   RUN_TEST(test_area_of_square);
  RUN_TEST(test_area_of_square);
  RUN_TEST(test_area_of_circle);
  RUN_TEST(test_area_of_sphere);
  RUN_TEST(test_volume_of_sphere);
  /*Tests for special math functions*/
  RUN_TEST(test_logarithm);
  RUN_TEST(test_exponent);
  RUN_TEST(test_squareroot);
  /*Financial calculation functions*/
  RUN_TEST(test_simple_Interest);
  RUN_TEST(test_compound_Interest);
  RUN_TEST(test_emi_Calculator);
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

/*Basic Arithmetic operation test case definition*/
void test_add(void) 
{
  TEST_ASSERT_EQUAL(50, Addition(30, 20));
}
void test_add_testcase2(void) 
{
  TEST_ASSERT_EQUAL(-8250, Addition(-750, -7500));
}
void test_add_testcase3(void) 
{
  TEST_ASSERT_EQUAL(-10, Addition(10, -20));
}
void test_add_testcase4(void) 
{
  TEST_ASSERT_EQUAL(-78, Addition(-98, 20));
}
void test_subtract(void) 
{
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(1, subtract(1000, 900));*/
}
void test_subtract2(void) 
{
  TEST_ASSERT_EQUAL(9, subtract(13, 4));

}
void test_subtract3(void) 
{
  TEST_ASSERT_EQUAL(-51, subtract(-45, 6));
}
void test_subtract4(void) 
{
  TEST_ASSERT_EQUAL(-240, subtract(-7985, -7745));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(2, multiply(2, 5));*/
}
void test_multiply2(void)
{
  TEST_ASSERT_EQUAL(-60, multiply(-20,3));
}
void test_multiply3(void)
{
  TEST_ASSERT_EQUAL(-725835, multiply(8745,-83));
}
void test_multiply4(void)
{
  TEST_ASSERT_EQUAL(98901, multiply(-99,-999));
}
void test_multiply5(void)
{
  TEST_ASSERT_EQUAL(-1, multiply(100000000,99999999));
}

void test_divide(void)
{
  TEST_ASSERT_EQUAL( 3,divide(27,9));
}
void test_divide2(void)
{
  TEST_ASSERT_EQUAL(-1, divide(1, 0));//Test for divide by zero
  
  /* Dummy fail*/
  /*TEST_ASSERT_EQUAL(3, divide(2, 2));*/
}
void test_divide3(void)
{
  TEST_ASSERT_EQUAL(45, divide(-135, -3));
}
void test_divide4(void)
{
  TEST_ASSERT_EQUAL(-2, divide(-28, 14));
}
void test_divide5(void)
{
  TEST_ASSERT_EQUAL(-8,divide(96,-12));
}

/*Combinatorics test case definition*/
void test_permutation(void) {
  TEST_ASSERT_EQUAL(5, permutations(5, 1));
  /*dummy fail*/
  /*TEST_ASSERT_EQUAL(12, permutations(4,2));*/
}
void test_permutation2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(-1, permutations(4, 6));/*test case when number of permutation required is more than total no. of objects*/
}

void test_combination(void) {
  TEST_ASSERT_EQUAL(10, combinations(5, 2));
  
  /* Dummy fail*/
 /* TEST_ASSERT_EQUAL(40, combinations(10, 4));*/
}

void test_combination2(void)
{
  TEST_ASSERT_EQUAL(-1,combinations(4,10));/*test case when number of combinations required is more than total no. of objects*/
}

void test_area_of_square(void) 
{
  TEST_ASSERT_EQUAL(4.00, area_of_square(2));
  TEST_ASSERT_EQUAL(9.00, area_of_square(3));
}
void test_area_of_square_testcase2(void) 
{
 
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(59.00, area_of_square(7));
}
void test_area_of_circle(void) 
{
  TEST_ASSERT_EQUAL(27.00, area_of_circle(3));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(30.00, area_of_circle(10));
}

void test_area_of_sphere(void)
 {
  TEST_ASSERT_EQUAL(48.00, area_of_sphere(2));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(2.00,area_of_sphere(5));
}

void test_volume_of_sphere(void) 
{
  TEST_ASSERT_EQUAL(3.00, volume_of_sphere(1));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(20.00, volume_of_sphere(2));
}

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
