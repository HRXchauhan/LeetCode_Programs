/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *ans=malloc( 2 *sizeof(int));
    ans[0]=-1;
    ans[1]=-1;

    int l=0,r=numsSize-1;
    int mid=-1,found=-1;
    while(l<r){
        mid=(l+r)/2;
        if(nums[mid]==target){
            found=mid-1;
            break;
        }else if(nums[mid]<target){
            l=mid+1;
        }else if(nums[mid]>target){
            r=mid;
        }
    }
    if(found==-1){
        return ans;
    }

    r=found;
    l=found;
    while(nums[l]==target||nums[r]==target){
        if(nums[l]==target&&l>=0){
            l--;
        }
        if(nums[r]==target&&r<numsSize){
            r++;
        }
        
    }
    ans[0]=l+1;
    ans[1]=r-1;
    *returnSize=2;
    return ans;

}