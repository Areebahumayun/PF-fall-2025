#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
    int result=0;
    for(int i=0;i < numsSize;i++){
        result=result^nums[i]; }
            return result;
        
    }
    
    int main(){
    	int nums[5]={2, 3, 2, 4, 4};
    	int numsSize=sizeof(nums)/sizeof(nums[0]);
    	int ans=singleNumber(nums,numsSize);
    	printf("a number not appearing twice is %d",ans);

    }

		
		
	