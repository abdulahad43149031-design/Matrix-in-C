#include <stdio.h>

void matMult(){
    int m1, n1, m2, n2;
    printf("Input m1, n1, m2, n2\n");
    scanf("%d %d %d %d", &m1, &n1, &m2, &n2);

    if(n1 != m2){
        printf("Multiplication is not possible\n");
        return;
    }

    int A[m1][n1];
    int B[m2][n2];

    printf("Input elements of matrix A\n");
    for(int i = 0; i<m1; i++){
        for(int j = 0; j<n1; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Input elements of matrix B\n");
    for(int i = 0; i<m2; i++){
        for(int j = 0; j<n2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    int results[m1][n2];

    for(int i = 0; i<m1; i++){
        for(int j = 0; j<n2; j++){
            results[i][j] = 0;
            for(int k = 0; k<n1; k++){
                results[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resulting Matrix\n");
    for(int i = 0; i<m1; i++){
        for(int j = 0; j<n2; j++){
            printf("%d ", results[i][j]);
        }
        printf("\n");
    }
}

int main(){
    matMult();
}