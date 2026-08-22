

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){

    int *arr;
    arr=(int *)malloc(numsSize * sizeof(int));
    *returnSize=numsSize;
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(i%2==0){
            arr[i]=nums[j++];
        }
        else{
            arr[i]=nums[n++];
        }
    }

    return arr;
}