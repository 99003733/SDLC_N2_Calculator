# include"matrix.h"
# include<stdio.h>

void MatrixOperations()
{
    do
    {
        int ch;
        int amat[4][4],bmat[4][4],cmat[4][4],m,n,i,j;
        char mat;
        printf("\n\n\t\t\t___MATRIXMENU___");
        printf("\n\n1)MATRIX INPUT");
        printf("\n\n2)MATRIX DETERMINANT");
        printf("\n\n3)MATRIX ADDITION");
        printf("\n\n4)MATRIX SUBTRACTION");
        printf("\n\n5)MATRIX MULTIPLICATION");
        printf("\n\n6)MATRIX COLUMN SUM");
        printf("\n\n7)MATRIX ROW SUM");
        printf("\n\n8)TO RESET THE CALCULATOR");
        print("\n\nEnter your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                 printf("\nPress a) for 1st matrix");
                 printf("\nPress b) for 2nd matrix");
                 printf("\nPress c) for 3rd matrix");
                 scanf("%c",&mat);
                 switch(mat)
                 {
                     case 'a':
                        printf("\nEnter Number of Columns");    
                        scanf("%d",&m);
                        printf("\nEnter Number of Rows:");
                        scanf("%d",&n);
                        for(i=1;i<=m;i++)
                        {
                             for(j=1;j<=m;j++)
                            {
                                  printf("a%d%d  ",i,j);
                                  scanf("%d",&amat[i][j]);
                            }
                            printf("\n");
                        }
                        Matinput(amat,m,n);   
                        break;
                     case 'b':
                        printf("\nEnter Number of Columns");    
                        scanf("%d",&m);
                        printf("\nEnter Number of Rows:");
                        scanf("%d",&n);
                        for(i=1;i<=m;i++)
                        {
                             for(j=1;j<=m;j++)
                            {
                                  printf("b%d%d  ",i,j);
                                  scanf("%d",&bmat[i][j]);
                            }
                            printf("\n");
                        }
                        Matinput(bmat,m,n);   
                        break;
                    case 'c':
                        printf("\nEnter Number of Columns");    
                        scanf("%d",&m);
                        printf("\nEnter Number of Rows:");
                        scanf("%d",&n);
                        for(i=1;i<=m;i++)
                        {
                             for(j=1;j<=m;j++)
                            {
                                  printf("c%d%d  ",i,j);
                                  scanf("%d",&cmat[i][j]);
                            }
                            printf("\n");
                        }
                        Matinput(cmat,m,n);   
                        break;
                   }
                  break;
           case 2:
                double det;
                printf("\nFor which matrix you want Determinant:");
                scanf("%c",&mat);
                switch (mat)
                {
                    case 'a':
                       det= determinant(amat,m,n);
                       printf("\nDetA: %d",det);
                    break;
                    case 'b':
                       det= determinant(bmat,m,n);
                       printf("\nDetB: %d",det);
                    break;
                    case 'c':
                       det= determinant(cmat,m,n);
                       printf("\nDetC: %d",det);
                    break;
                default:printf("\nMatrix doesn't exist");
                    break;
                }
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