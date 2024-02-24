// Addition and Subtraction of Matrices

#include <stdio.h>

// Function to read a matrix
void getMatrix(int m, int n, int matrix[10][10])
{
  printf("Enter elements of %dx%d matrix:\n", m, n);
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
}

// Function to display a matrix
void displayMatrix(int m, int n, int matrix[10][10])
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int i, j, m, n, m1[10][10], m2[10][10], sum[10][10], diff[10][10];

  // Input matrices
  printf("Enter the size of matrix (m x n): ");
  scanf("%d %d", &m, &n);

  getMatrix(m, n, m1);
  getMatrix(m, n, m2);

  // Addition of matrices
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      sum[i][j] = m1[i][j] + m2[i][j];
    }
  }

  // Subtraction of matrices
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      diff[i][j] = m1[i][j] - m2[i][j];
    }
  }

  // Display matrices and results
  printf("\nMatrix 1:\n");
  displayMatrix(m, n, m1);

  printf("\nMatrix 2:\n");
  displayMatrix(m, n, m2);

  printf("\nSum of Matrices:\n");
  displayMatrix(m, n, sum);

  printf("\nDifference of Matrices:\n");
  displayMatrix(m, n, diff);

  return 0;
}
