#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *arr=malloc(numsSize *sizeof(int ));

    int count=0;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(nums[i]>nums[j]&&i!=j){
                count++;
            }
        
        }
        arr[i]=count;
            count=0;
    }
    *returnSize = numsSize;

    return arr;
}
int main (){
    int numsSize ;
    printf("Enter the size of nums array:\n");
    scanf("%d",&numsSize);

    printf("Enter the nums array:\n");
    int nums[numsSize];
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    int* returnSize;
    int size;
    returnSize=&size;
    int* result=smallerNumbersThanCurrent(nums, numsSize, returnSize );
   
    for(int j=0;j<size;j++){
        printf("%d",result[j]);
    }
    free(result);
    return 0;
}