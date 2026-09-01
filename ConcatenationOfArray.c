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
int main(){
    int numsSize;
    printf("Enter the size of nums:\n");
    scanf("%d",&numsSize);

    int nums[numsSize];

    printf("Enter the nums array:\n");

    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    int *returnSize;
    int size;
    returnSize = &size;

    int *ans=getConcatenation(nums, numsSize, returnSize);

    printf("The concatenated array is :\n");

    for(int j=0;j<size;j++){
        printf("%d",ans[j]);
    }
    
}