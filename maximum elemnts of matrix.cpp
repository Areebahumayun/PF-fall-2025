#include <stdio.h>

int main() {
    int i, j;
    int arr[2][2];
    printf("Enter 2x2 matrix elements:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max = arr[0][0];
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Maximum element in the matrix is: %d\n", max);

    return 0;
}


	
	
	
	
	
	
	
	
	