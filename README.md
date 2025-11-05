# 🧮 Exploring Matrix Fundamentals in C

This repository contains a C program (`matrixFundamentals.c`) and examples that explore the **core operations and logic** used to manipulate matrices.  
It’s a concise, practical guide for mastering matrix operations — from basic setup to advanced linear algebra — ideal for students and beginners in numerical computing and AI.

---

## 🚀 Key Concepts Covered

### 1. 🧱 Matrix Initialization

Creating and taking input for matrices of size `n × m`.

```c
int matrix[10][10];
int m, n;
printf("Enter rows and columns: ");
scanf("%d %d", &m, &n);

printf("Enter matrix elements:\n");
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        scanf("%d", &matrix[i][j]);
    }
}
```

---

### 2. 🔄 Transpose of a Matrix
```c
printf("%d ", matrix[j][i]);
transpose[j][i] = arr[i][j]
```

---

### 3. ✖️ Matrix Multiplication (m1 x n1) . (n1 x n2) = (m1 x n2)
```c
for(int i = 0; i < m1; i++) {
    for(int j = 0; j < n2; j++) {
        result[i][j] = 0;
        for(int k = 0; k < n1; k++) {
            result[i][j] += A[i][k] * B[k][j];
        }
    }
}
```

---

### 4. 🔍 Symmetric Matrix Check (m x n)
```c
int symmetric = 1;
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        if(mat[i][j] != mat[j][i]) {
            symmetric = 0;
            break;
        }
    }
}
```








