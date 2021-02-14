#include <financial_Calculation.h>

#include<stdio.h>
#include<math.h>

int main()

{

 int select_option;
 
 float time_period;
 float rate_of_interest;
 float simple_interest;
 float compound_interest;
 float emi_amount;
 
 double principal_amount;

 printf("Please enter principal amount(P):\n");
 scanf("%lf",&principal_amount);
 printf("please enter time period(T):\n");
 scanf("%f",&time_period);
 printf("please enter rate of interest(R):\n");
 scanf("%f",&rate_of_interest);
 printf("Please choose only one option for financial operation:\n");
 printf(" 1. simple interest\n 2. compound interest\n 3. emi amount\n");
 scanf("%d",&select_option);
 switch(select_option)
 {
    case 1 :
    simple_interest=principal_amount*time_period*rate_of_interest/100;
    printf("Simple interest=%.2f",simple_interest);
    break;
    case 2:
    compound_interest=principal_amount*pow((1 +rate_of_interest/100),time_period)-principal_amount;
    printf("Compound Interest=%.2f",compound_interest);
    break;
    case 3:
     rate_of_interest = rate_of_interest / (12 * 100);  
    time_period = time_period * 12;
    emi_amount = (principal_amount * rate_of_interest * pow(1 + rate_of_interest, time_period)) / (pow(1 + rate_of_interest, time_period) - 1);
    printf("Emi calculation=%.2f",emi_amount);
    break;
    default:
    printf("Invalid input!!! Please choose the correct option\n");
    break;
 }

}
