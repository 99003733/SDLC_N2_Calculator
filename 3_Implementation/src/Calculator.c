# include"Calculator.h"
# include"combinatorics.h"
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
            printf("\n\n2) MATRIX MODE")
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
