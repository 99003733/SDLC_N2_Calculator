# ifndef __MATRIX_H
# define __MATRIX_H

# include<stdio.h>

void MatrixOperations();
void Matinput(int**,int,int);
double determinant(int**,int,int);
int** Mat_addition(int**,int**,int,int);
int** Mat_Subtraction(int**,int**,int,int);
int** Mat_Multiply(int**,int**,int,int);
int Mat_rowsum(int**,int,int);
int Mat_colsum(int**,int,int);
int** edit_matrix(int**,int);

# endif