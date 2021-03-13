#include "Arithmetic.h"
#include<stdio.h>


int NumberLength(double number)
{
    return floor(log10(number) + 1);
}
/*void basic_arithmetic()
{
    static double result;
    do
    {
        int ch;
        double num1,num2;

        printf("\n\n\t\t\t___BASIC ARITHMETIC OPERATIONS MENU___");
        printf("\n\n1)ADDITION");
        printf("\n\n2)SUBTRACTION");
        printf("\n\n3)MULTIPLICATION");
        printf("\n\n4)DIVISION");
        printf("\n\n5)TO RESET THE CALCULATOR");
        printf("\n\nEnter your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                printf("\nEnter a number:");
                scanf("%lf",&num2);
                result= Addition(num1,num2);
                printf("%lf",result);
                break;
           case 2:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                printf("\nEnter a number:");
                scanf("%lf",&num2);
                result= subtract(num1,num2);
                printf("%lf",result);
                break;
            case 3:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                printf("\nEnter a number:");
                scanf("%lf",&num2);
                result= multiply(num1,num2);
                if(NumberLengthCheck(result)==1)
                {
                    printf("%lf",result);
                }
                else
                {
                    result=0;
                    printf("\nResult exceeds display");
                }
                break;
            case 4:
                printf("\nEnter a number:");
                scanf("%lf",&num1);
                printf("\nEnter a number:");
                scanf("%lf",&num2);
                if(num2!=0)
                {
                   result= divide(num1,num2);
                }
                else
                {
                    result=0;
                    printf("\nCan't divide by zero");
                }
                break;
            case 5:
                  result=0;
                  return ;
                  break;
            default:
                 printf("\nWrong Choice");
                 break;
        }
    } while(1);
}*/

double Addition(double num1,double num2)
{
    double added_value;
    added_value=num1+num2;
    return added_value;
}

double subtract(double num1,double num2)
{
    double subtracted_value;
    subtracted_value=(num1)-(num2);
    return subtracted_value;
}


double multiply(double num1,double num2)
{
    double multiplied_value;
    multiplied_value=(num1)*(num2);
    if(NumberLength(multiplied_value) > 14)
    {
        return -1;//if output is -1 then it means output length is more than 14 digits
    }
    else
    {
        return multiplied_value;
    }
}

double divide(double num1,double num2)
{
    double divided_value;
    divided_value=num1/num2;
    if(num2==0)
    {
        return -1;//-1 display Divide by zero error
    }
    else
    {
        return divided_value;
    }
}
