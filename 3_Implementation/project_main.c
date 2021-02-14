#include "Calculator.h"


/* Start of the application */
int main(int argc, char *argv[])
{
    int on;
    printf("\n****Calculator****\n");
    do
    {
        printf("\nEnter 1 to On");
        printf("\nEnter 2 to Off");
        scanf("%d",&on);
        switch (on)
        {
           case 1:
             printf("\nOnn");
             calculator();
            break;
           case 2:
             printf("\nOff");
            break;   
           default:
                return 0;
                break;
        }
    }while(1);
}
