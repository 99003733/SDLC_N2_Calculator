#include"physics.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14
#define G (6.67430 * pow(10,-11))
#define g 9.8


void phys_operation()
{
    do{
        int num;
        float t, f, C, M1, M2, D, V, angle;
        double v,u,accefunc, react, r, velocity, Force, Range;
        printf("\n\n\t\t\t___PHYSICS OPERATION MENU___");
        printf("\n\n1)ACCELEROMETER");
        printf("\n\n2)CAPACITANCE REACTOR");
        printf("\n\n3)CIRCULAR VELOCITY");
        printf("\n\n4)GRAVITATIONAL FORCE");
        printf("\n\n5)PROJECTILE MOTION");

        printf("Enter your choice: ");
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            printf("Enter the initial Velocity of the object in (m/s): ");
            scanf("%lf",&u);
            printf("Enter the final Velocity of the object in (m/s): ");
            scanf("%lf",&v);
            printf("Enter the time taken by the object in (sec): ");
            scanf("%f",&t);
            accefunc = acceleration(v,u,t);
            printf("%lf", accefunc);
            break;
        case 2:
            printf("Enter the frequency in (Hz): ");
            scanf("%f",&f);
            printf("Enter the capacitance in (farad): ");
            scanf("%f",&C);
            react = capacitive_rec(f,C);
            printf("%lf", react);
            break;
        case 3 :  
            /* code */
            printf("Enter the radius of the path in (m): ");
            scanf("%lf",&r);
            printf("Enter the time taken in (sec): ");
            scanf("%f",&t);
            velocity = circular_velocity(r,t);
            printf("%lf", velocity);
            break;
        case 4:
            /* code */
            printf("Enter the mass M1 in (kg): ");
            scanf("%f",&M1);
            printf("Enter the mass M2 in (kg): ");
            scanf("%f",&M2);
            printf("Enter the distance between two bodies in (m): ");
            scanf("%f",&D);
            Force =gravitation_force(M1,M2,D);
            printf("%lf", Force);
            break;
        /*case 5:
            printf("Enter the initial velocity in (m/s): ");
            scanf("%f",&V);
            printf("Enter angle which the object is projected in (degrees): ");
            scanf("%f",&angle);
            Range = projectile_motion(V,angle);
            printf("%lf", Range);
            break;*/
        default:
            printf("Enter valid choice");
            break;
        }  
    }while(1);
}
double acceleration(float v, float u, float t)
{
    double res;
    res = (( v - u ) / t );
    return res;
}

double capacitive_rec(float f, float C)
{
    double rec;
    rec = (1 / (2*PI*f*C));
    return rec;
}

double circular_velocity(double r, double t)
{
    double vel;
    vel = (2 * PI * r ) / t;
    return vel;
}

double gravitation_force(float M1, float M2, float D)
{
    double force;
    force = ((G * M1 * M2) / (D * D));
    return force;
}

// double projectile_motion(float V, float angle)
// {
//     double range;
//     range = (double)(((V * V ) * sin(2*angle) ) / g);
//     return range;
// }