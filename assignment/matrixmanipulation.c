#include <stdio.h>
#include <stdlib.h>


void rotate(int **matrix, int n) {
    if (n <= 1 || matrix == NULL) return;


    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}


void printMatrix(int **matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid matrix size. n must be between 1 and 100.\n");
        return 1;
    }

    
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

  
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    rotate(matrix, n);

   
    printf("Matrix after 90-degree clockwise rotation:\n");
    printMatrix(matrix, n);

   
    for (int i = 0; i < n; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
