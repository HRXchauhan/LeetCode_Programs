#include <stdio.h>
#include <string.h>


int searchInsert(int* nums, int numsSize, int target);
void sortColors(int* nums, int numsSize);

void main(){
    int numsSize, target;
    printf("Enter size of number array:\n");
    scanf("%d",&numsSize);

    int nums[numsSize];

    printf("Enter the number array:\n");

    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }

    sortColors(nums, numsSize);

    for(int i=0;i<numsSize;i++){
        printf("%d ",nums[i]);
    }
    printf("\nEnter the target value:\n");
    scanf("%d",&target);

    int index = searchInsert(nums, numsSize, target);
    printf("The index of insertion of target value:-> %d",index);


}

int strStr(char* haystack, char* needle) {
    int len = strlen(needle);
    int count =0;
    int lens = strlen(haystack);
    for(int i=0;i<lens;i++){
        count=0;
        for(int j=0,n=i;needle[j]!='\0'&&haystack[n]!='\0';n++,j++){
            if(needle[j]==haystack[n]){
                count++;
                if(count==len){
                    return i;
                }
            }
        }
        
    
    }
    int m=-1;
    return m;
}

int searchInsert(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++){
        if(nums[i]>=target){
            return i;
        }
    }
    return numsSize;
    
}

void sortColors(int* nums, int numsSize) { 
    int temp, time;
    time = numsSize;

    for(int j=numsSize;j>0;j--){
        for(int i=0;i<time-1;i++){
        if(nums[i]>nums[i+1]){
            temp = nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=temp;
            
        }
        

    }
    }

    
}