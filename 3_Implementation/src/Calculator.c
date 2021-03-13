# include"Calculator.h"
# include"Combinatorics.h"
# include"Arithmetic.h"
# include"Matrix.h"
# include"physics.h"
# include"profitloss.h"
# include"mensuration.h"
# include"special_Math_Functions.h"
# include"financial_Calculation.h"

void calculator()
{
    do
    {
        int choice;
        int mode;
        printf("\nEnter 1 to access special modes:");
        scanf("%d", &mode);
        if(mode ==1)
        {
            printf("\nPress 1- For Calculating Permutations and Combinations");
            printf("\nPress 2-To Perfrom physics operations");
            printf("\nPress 3-To Perfrom Special mathematical functions(like logarithmic,exponential etc.)");
            printf("\nPress 4-To Calculate Area and Volumes");
            printf("\nPress 5-To Calculate Profit loss");
            printf("\nPress 6-To Perform Financial Calculations");
            printf("\nPress 7-To Perform Trigonometric Operations");
            printf("\nPress 8-To Reset Calculator");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: combinatorics();
                        break;
                case 2:phys_operation();
                      break;
                case 3:math_Functions();
                      break;
                case 4:
                       mensuration();
                       break;
                case 5:
                     profit_loss();
                    break;
                case 6:
                       financial_Calculation();
                       break;
                case 7:
                       Trigonometry();
                       break;
                case 8:
                      return ;
                      break;
                default:
                      printf("\nWrong Choice");
                      break;
            }
        }
        else
        {
                basic_arithmetic();
        }
    } while (1);
    
}
