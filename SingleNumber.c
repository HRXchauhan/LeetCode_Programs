#include <stdio.h>

int singleNumber(int* nums, int numsSize);

void main(){
    int numsSize;
    printf("enter the size of nums array\n");
    scanf("%d",&numsSize);

    int nums[numsSize];
    printf("Enter the nums array\n");
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    int res= singleNumber(nums, numsSize);

    printf("The single number is:->%d",res);




}


int singleNumber(int* nums, int numsSize) {
    
    int frq[10];
    for(int n=0;n<10;n++)
    {
        frq[n]=0;
    }
    for(int i=0;i<numsSize;i++)
    {
        frq[nums[i]]++;
        
    }
    for(int j=0;j<10;j++)
    {
        if(frq[j]==1)
        {
            return j;
            
        }
    }
    return 0;
}
    
