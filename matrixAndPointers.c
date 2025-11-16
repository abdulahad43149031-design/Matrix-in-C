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

void matrixAndPointers(){
    // inputing and outputing a matrix using pointers

    int r = 3;
    int c = 3;
    int mat[3][3];

    int* ptr = &mat[0][0];
    printf("Enter 9 elements:\n");
    for(int i = 0; i < r * c; i++){
        scanf("%d", (ptr + i));
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", *(ptr + (i * c) + j));
        }
        printf("\n");
    }
}


int main(){
    // int row = 2;
    // int column = 3;
    // int mat[row][column];
    // inputMatrix(row, column, mat);
    // displayMat(row, column, mat);

    matrixAndPointers();
}