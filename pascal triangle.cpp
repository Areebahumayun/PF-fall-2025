
#include<stdio.h>
#include<stdlib.h>
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;

    // Allocate memory for column sizes and triangle
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    int** triangle = (int**)malloc(numRows * sizeof(int*));

    for (int i = 0; i < numRows; i++) {
        (*returnColumnSizes)[i] = i + 1;        // number of elements in this row
        triangle[i] = (int*)malloc((i + 1) * sizeof(int));

        triangle[i][0] = 1;                      // first element
        triangle[i][i] = 1;                      // last element

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}
