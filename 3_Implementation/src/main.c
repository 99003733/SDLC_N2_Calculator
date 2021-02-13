# include"combinatorics.h"
# include"Arithmetic.h"

int main()
{
    do
    {
        int ch;
        printf("\n\n\t\t\tCALCULATOR");
        printf("\n\n1) TO PERFORM BASIC ARITHMETIC OPERATIONS");
        printf("\n\n2) TO FIND PERMUTATIONS AND COMBINATIONS");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            basic_arithmetic();
            break;
        case 2:
            combinatorics();
            break;
        default:
            printf("Wrong Choice");
            break;
        }
    } while(1);
    return 0;
}