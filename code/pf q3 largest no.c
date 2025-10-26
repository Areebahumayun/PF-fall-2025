#include<stdio.h>
int main(){
	int i;
	int A[6]={9,7,4,3,2,1};
	int largest=A[0];
	int secondlargest=A[1];
	for(i=0;i<6;i++){
		 if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    printf("The two largest numbers are %d and %d", secondLargest, largest);
    return 0;
}

	}
}