/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *runningSum;
    runningSum=(int *)malloc(numsSize * sizeof(int));
    if(numsSize!=0){
        runningSum[0]=nums[0];
        
    }
    *returnSize=numsSize;


    for(int i=1;i<numsSize; i++){
        runningSum[i]=runningSum[i-1]+nums[i];
        
    }

    return runningSum;
    
}