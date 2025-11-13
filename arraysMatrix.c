#include <stdio.h>
#include <limits.h>

void largestSmallest(){
    int n;
    printf("Enter size of array\n");
    int arr[n];
    for(int i = 0; i<n; i++) scanf("%d", &arr[i]);
    int min_index;
    for(int i = 0; i < n - 1; i++){
        min_index = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] =  temp;
    }

    printf("Smallest element is: %d", arr[0]);
    printf("Largest element is: %d", arr[n-1]);
}

void sumAndMean(float arr[], int length){
    float sum = 0;
    for(int i = 0; i<length; i++){
        sum += arr[i];
    }

    printf("Sum of array elemenets is %.3f\n", sum);
    printf("Average of array elements is %.3f", sum/length);
}

void reverse(int arr[], int length){
    int right = length - 1;
    int left = 0;
    int temp;
    while(right >= left){
        temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        right--;
        left++;
    }   
    for(int i = 0; i<length; i++){
        printf("%d ", arr[i]);
    }
}

void frequencyOfEachElement(int arr[], int length){
    for(int i = 0; i < length; i++){
        int element = arr[i];
        if(element != INT_MIN){
            int count = 0;
            for(int j = 0; j<length; j++){
                if(arr[j] == element){
                    count++;
                    arr[j] = INT_MIN;
                }
            }
            printf("Element %d appeared %d times.\n", element,count);
        }
    }
}

void mergeSortedArrays(int arr1[], int l1, int arr2[], int l2, int merged[]){
    int  i = 0, j = 0, k = 0;

    while(i < l1 && j < l2){
        if(arr1[i] < arr2[j]){
            merged[k++] = arr1[i++];
        }else{
            merged[k++] = arr2[j++];
        }
    }

    while(i < l1) merged[k++] = arr1[i++];

    while(j < l2) merged[k++] = arr2[j++];
}

void secondlargestSmallest(){
    int n;
    printf("Enter size of array\n");
    int arr[n];
    for(int i = 0; i<n; i++) scanf("%d", &arr[i]);
    int min_index;
    for(int i = 0; i < n - 1; i++){
        min_index = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] =  temp;
    }

    printf("Second Smallest element is: %d", arr[1]);
    printf("Second Largest element is: %d", arr[n-2]);
}

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
    }
}  

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

void rowAndColumnSum(int rows, int cols, int matrix[rows][cols]) {
    int rowSum, colSum;

    // Row-wise sum
    printf("Row-wise Sum:\n");
    for (int i = 0; i < rows; i++) {
        rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    // Column-wise sum
    printf("\nColumn-wise Sum:\n");
    for (int j = 0; j < cols; j++) {
        colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }
}

void printTranspose(int rows, int cols, int matrix[rows][cols]) {
    printf("Transpose of the Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}

int main(){

}
