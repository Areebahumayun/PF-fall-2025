#include <stdio.h>

int main() {
    int A[2][3];
    int D[3][2];
    int C[2][2] = {0}; 
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter D[%d][%d]: ", i, j);
            scanf("%d", &D[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * D[k][j];
            }
        }
    }


    printf("Matrix C is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}