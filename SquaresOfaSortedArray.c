/*int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int count=0,n=0;
    while(n<numsSize&&nums[n]<0){
        count++;
        n++;
    }
    int arr[numsSize], a=n-1;
    for(int i=0;i<count;i++){
        arr[a]=nums[i]*nums[i];
        a--;
    }
    a=0;
    for(int j=0;j<numsSize&&a<count;j++){
        if(n<numsSize&&nums[n]*nums[n]<arr[a]){
            nums[j]=nums[n]*nums[n];
            n++;
        }
        else{
            nums[j]=arr[a];
            a++;
        }
        
    }
    while(n<numsSize){
        nums[n]=nums[n]*nums[n];
        n++;
    }
    *returnSize=numsSize;

        return nums;
}*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int j=0,n=numsSize-1;
    int *arr=malloc(numsSize * sizeof(int));

    for(int i=numsSize-1;i>=0;i--){
        if(nums[j]*nums[j]<nums[n]*nums[n]){
            arr[i]=nums[n]*nums[n];
            n--;
        }
        else{
            arr[i]=nums[j]*nums[j];
            j++;
        }
    }
    *returnSize=numsSize;
    return arr;
    
}