#include <stdio.h>

void inputMatrix(int r, int c, int mat[r][c]){ // matrix is call by reference
    printf("Enter %d element: \n", r * c);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}


void displayMat(int r, int c, int mat[r][c]){ // matrix is call by reference
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int row = 2;
    int column = 3;
    int mat[row][column];
    inputMatrix(row, column, mat);
    displayMat(row, column, mat);
}