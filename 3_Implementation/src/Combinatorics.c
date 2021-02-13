#include"combinatorics.h"
#include<stdio.h>

void combinatorics()
{
    do
    {
        int ch;
        printf("\n\n\t\t\t___COMBINATRONICSMENU___");
        printf("\n\n1)PERMUTATIONS");
        printf("\n\n2)COMBINATIONS");
        printf("\n\n3)TO RESET THE CALCULATOR");
        print("\n\nEnter your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                 int n,r;
                  double permres;
                  printf("\nEnter total number of objects:");
                  scanf("%d",&n);
                  printf("\nEnter number of permutations want:");
                  scanf("%d",&r);
                  permres=permutations(n,r);
                  printf("%lf",permres);
                  break;
           case 2:
                   double combres;
                   combres=combinations(n,r);
                   printf("%lf",combres);
                   break;
            case 3:
                  return 0;
                  break;
            default:
                 printf("Invalid Choice");
                 break;
        }
    } while(1);
}

double factorial(int num)
{
    int res=1;
    for(int i=1;i<=num;i++)
    {
        res=res*i;
    }
    return res;
}

double permutations(int n,int r)
{
    double nfact,n_rfact;
    nfact=factorial(n);
    n_rfact=factorial(n-r);

     double per=nfact/n_rfact;
     return per;
}

double combinations(int n,int r)
{
    double n_fact,n_rfact,r_fact;
    double comb=n_fact/(r_fact*n_rfact);
    return comb;
}