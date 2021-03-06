#include <stdio.h>
#include <math.h>

#define N 3

int is_diag_dom( int mat[][N]){

    int diagonalIsBigger = 1;
    int diagonalVal = 0;
    int sumOfRow = 0;

    printf("---- matrix ----\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == j){
                diagonalVal = mat[i][j];
            }
            else {
                sumOfRow += fabs(mat[i][j]); // adds the absolute value of the element in the row
            }
        }
        if (diagonalVal <= sumOfRow){ // check if the diagonal value is less than the abs sum of the rows
            return 0;
        }
        sumOfRow = 0;

    }
    return 1; // only reaches here if the diagonalValue is always greater than the sum of row
}

int main()
{
    int mat[][N] = {{7,3,4},{3,7,2},{3,2,7}};

    printf("Matrix is diagonally dominant?  %d", is_diag_dom(mat));
}
