// Matrix multiplication

#include <stdio.h>

// Function to read a matrix
void getMatrix(int m, int n, int matrix[10][10]) {
    printf("Enter elements of %dx%d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int m, int n, int matrix[10][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply matrices
void multiplyMatrices(int m, int n, int m1[10][10], int p, int m2[10][10], int result[10][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < p; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    int i, j, m, n, p, m1[10][10], m2[10][10], product[10][10];

    // Input matrices
    printf("Enter the size of first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the size of second matrix (n x p): ");
    scanf("%d %d", &n, &p);

    getMatrix(m, n, m1);
    getMatrix(n, p, m2);

    // Multiplication of matrices
    multiplyMatrices(m, n, m1, p, m2, product);

    // Display matrices and result
    printf("\nMatrix 1:\n");
    displayMatrix(m, n, m1);

    printf("\nMatrix 2:\n");
    displayMatrix(n, p, m2);

    printf("\nProduct of Matrices:\n");
    displayMatrix(m, p, product);

    return 0;
}
