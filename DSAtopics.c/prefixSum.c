#include <stdio.h>

int pivotIndex(int* nums, int numsSize);

int main(){
    int numsSize;
    printf("Enter the size of nums array: \n");
    scanf("%d",&numsSize);
    int nums[numsSize];
    printf("Enter the nums array :\n");
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }

    int index = pivotIndex(nums, numsSize);

    printf("the pivot index is:-> %d and The value is:- %d", index ,nums[index]);
}
int pivotIndex(int* nums, int numsSize) {
    
    int prefix[numsSize];

    // Create prefix sum array
    prefix[0] = nums[0];

    for (int i = 1; i < numsSize; i++) {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    // Check every index
    for (int i = 0; i < numsSize; i++) {

        int leftSum;

        if (i == 0)
            leftSum = 0;
        else
            leftSum = prefix[i - 1];

        int rightSum = prefix[numsSize - 1] - prefix[i];

        if (leftSum == rightSum) {
            return i;
        }
    }

    return -1;
}