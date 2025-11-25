#include <stdio.h>

void spiralPrint(int rows, int cols, int arr[rows][cols]) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {

        // left → right
        for (int i = left; i <= right; i++)
            printf("%d ", arr[top][i]);
        top++;

        // top → bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;

        // right → left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", arr[bottom][i]);
            bottom--;
        }

        // bottom → top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    printf("Spiral order:\n");
    spiralPrint(rows, cols, arr);

    return 0;
}
