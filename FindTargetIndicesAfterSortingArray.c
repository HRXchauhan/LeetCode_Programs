/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int count=0,less=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<target){
            less++;
        }
        else if(target==nums[i]){
            count++;
        }
    }

    int *ans=malloc(count * sizeof(int));
    for(int i=0;i<count;i++){
        ans[i]=less;
        less++;
    }
    *returnSize = count;

    return ans;

    
}