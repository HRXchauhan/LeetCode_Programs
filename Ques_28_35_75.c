#include <stdio.h>

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