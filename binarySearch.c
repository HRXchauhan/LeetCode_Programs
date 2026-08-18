int search(int* nums, int numsSize, int target) {
    int mid, left, right,count=-1;
    left=0;
    if(nums[left]==target){
        return left;
    }
    right=numsSize;

    if(numsSize%2==0){
        mid=numsSize/2;
    }else{
        mid=(numsSize/2);
    }
    for(int i=mid;left!=mid;i=mid){
        if(nums[i]==target){
            return i;
        }
        else if(nums[i]<target){
            left=mid;
        }
        else{
            right=mid;
        }
        mid=(right+left)/2;

    }
    return count;
    
}