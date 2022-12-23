//WAP to implement Boolean matrix operations join, product, and Boolean product.

#include <stdbool.h>
#include <stdio.h> 
#define R 3
#define C 4
 
void Matrix(bool mat[R][C])
{
    bool row[R];
    bool col[C];
 
    int i, j;
 
    for (i = 0; i < R; i++)
        row[i] = 0;
 
    for (i = 0; i < C; i++)
        col[i] = 0;
 
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
 
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            if (row[i] == 1 || col[j] == 1)
                mat[i][j] = 1;
}
 
void printMatrix(bool mat[R][C])
{
    int i, j;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
 
int main()
{
    bool mat[R][C] = { { 1, 0, 0, 1 },
                       { 0, 0, 1, 0 },
                       { 0, 0, 0, 0 } };
 
    printf("Input Matrix \n");
    printMatrix(mat);
    Matrix(mat);
    printf("Matrix after modification \n");
    printMatrix(mat);
    return 0;
}