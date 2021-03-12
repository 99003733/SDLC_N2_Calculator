#include <mensuration.h>
#include <stdio.h>


// void main()
// {
//     double result = 0;
//      int ch;
//      double num1 = 0,num2 = 0;
//      double AREAOFSQAURE,AREAOFCIRCLE,AREAOFSPHERE,VOLUMEOFSPHERE;
//    //do
//     //{
       

//         printf("\n\n\t\t\t___Mensuration MENU___");
//         printf("\n\n1)AREA OF SQUARE ");
//         printf("\n\n2)AREA OF CIRCLE ");
//         printf("\n\n3)AREA OF SPHERE ");
//         printf("\n\n4)VOLUME OF SPHERE ");

//         printf("\n\n5)TO RESET THE CALCULATOR");
//         printf("\n\nEnter your Choice:");
//         scanf(" %d",&ch);
//         switch(ch)
//         {
//             case 1:
//                 printf("Enter a number: \n");
//                 scanf(" %lf",&num1);
//                 result = area_of_square(num1);
//                 printf("%0.2lf\n",result);
//                 break;
//             case 2:
//                 printf("\nEnter a number:");
//                 scanf(" %lf",&num1);
//                  result= area_of_circle(num1);
//                 printf("%0.2lf",result);
//                 break;

//             case 3:
//                 printf("\nEnter a number:");
//                 scanf(" %lf",&num1);
//                  result= area_of_sphere(num1);
//                 printf("%0.2lf",result);
//                 break;
//             case 4:
//                 printf("\nEnter a number:");
//                 scanf(" %lf",&num1);
//                  result= volume_of_sphere(num1);
//                 printf("%0.2lf",result);
//                 break;
//              //return 0;
              
//             default:
//                 printf("\nWrong Choice");
//                 break;
//         }
    //} while(1);
  /*  if(ch==1)
    {
        printf("%lf",AREAOFSQAURE);
    }
    else if(ch==2)
    {
        printf("%0.2lf",AREAOFCIRCLE);
    }
    else if(ch==3)
    {
        printf("%0.2lf",AREAOFSPHERE);
    }
    else if(ch==4)
    {
        printf("%0.2lf",VOLUMEOFSPHERE);
    }
    else
    {
        printf("wrong choice or reset of calculator");
    }
    */
// }

double area_of_square(double num1)
{
    //printf("you are here %lf",num1);
    double AREAOFSQAURE =0 ;
    AREAOFSQAURE =num1*num1;
    return AREAOFSQAURE ;
}

double area_of_circle(double num1)

{
     int pi=3.14;
    double AREAOFCIRCLE =0;
    AREAOFCIRCLE=pi*num1*num1;
    return AREAOFCIRCLE ;
}


double area_of_sphere(double num1)
{
    int pi=3.14;
    double AREAOFSPHERE=0;
   AREAOFSPHERE =4*pi*num1*num1;
    return AREAOFSPHERE ;
}

double volume_of_sphere(double num1)
{
int pi=3.14;
    double VOLUMEOFSPHERE=0;
    VOLUMEOFSPHERE=(4/3)*pi*num1*num1*num1;
    return VOLUMEOFSPHERE;
}
