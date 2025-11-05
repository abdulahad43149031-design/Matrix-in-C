#include <stdio.h>

void t1(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

void t2(){
    int mat[2][3];
    int transpose[3][2];
    
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            transpose[j][i] = mat[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main(){
    t2();
}