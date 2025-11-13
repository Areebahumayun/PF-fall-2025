#include <stdio.h>

void inputMatrix(int matrix[10][10], int row, int col, char name) {
    printf("\nEnter elements of Matrix %c (%d x %d):\n", name, row, col);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%c[%d][%d] = ", name, i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply matrices
void multiplyMatrix(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int c2) {
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for(int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int row, int col, char name) {
    printf("\nMatrix %c:\n", name);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;

    // Take matrix sizes
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication condition
    if(c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    // Take elements of matrices
    inputMatrix(A, r1, c1, 'A');
    inputMatrix(B, r2, c2, 'B');

    // Multiply A and B ? C
    multiplyMatrix(A, B, C, r1, c1, c2);

    // Display matrices
    displayMatrix(A, r1, c1, 'A');
    displayMatrix(B, r2, c2, 'B');
    displayMatrix(C, r1, c2, 'C');

    return 0;
}
