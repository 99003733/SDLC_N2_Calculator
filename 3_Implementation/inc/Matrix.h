# ifndef __MATRIX_H
# define __MATRIX_H

# include<stdio.h>

void MatrixOperations();
int** Matinput(int,int);
void Determinant(int**,int);
void Mat_addition(int**,int**,int,int);
void Mat_Subtraction(int**,int**,int,int);
void Mat_Multiply(int**,int**,int,int,int,int);

# endif
