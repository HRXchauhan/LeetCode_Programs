/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {

    int *ans;
    int size=numsSize*2;
    ans=( int *)malloc(size * sizeof(int));

    for(int a=0;a<numsSize;a++){
        ans[a]=nums[a];
    }
    int j=numsSize;

    for(int i=0;i<numsSize;i++){
        ans[j]=nums[i];
        j++;
    }
    *returnSize=size;
    return ans;
    
}