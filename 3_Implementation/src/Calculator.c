# include"Calculator.h"
# include"Combinatorics.h"
# include"Arithmetic.h"
# include"Matrix.h"

void calculator()
{
        int ch,mode;
        print("\nPress 1- for Special Modes");
        scanf("%d",&mode);
        if(mode==1)
        {
            printf("\n\n1) PERMUTATIONS AND COMBINATIONS MODE");
            printf("\n\n2) MATRIX MODE");
            printf("\n\n3) PHYSICS MODE");
            printf("\n\n4) PROFIT LOSS MODE");
            printf("Enter your choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    combinatorics();
                    break;
                case 2:
                    Matrixoperations();
                    break;
                case 3:
                    profit_loss();
                    break;
                case 4:
                    phys_operation();
                    break;       
                default:
                    printf("\nError");/*Mode doesn't exist*/
                    break;
            }
        }
        else
        {
            basic_arithmetic();
        }
}
