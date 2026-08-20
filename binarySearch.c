#include <stdio.h>

int search(int* nums, int numsSize, int target);
 
void main(){
    int numsSize;
    printf("Enter the size of the nums array:\n");
    scanf("%d", &numsSize);

    int nums[numsSize];
    printf("Enter your sorted array number for search target value:\n");

    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }

    int target;
    printf("Enter the target value:\n");
    scanf("%d",&target);

    int ans = search(nums, numsSize, target);

    printf("The index of the given target is:-> %d ", ans);

}

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