#include <stdio.h>


/*int firstStableIndex(int* nums, int numsSize, int k) {
    int max = nums[0];
    int min =nums[0],in=0;
    int minmum(int in,int* nums, int numsSize);
    for(int j=0;j<numsSize;j++){
        if(min>nums[j]){
            min=nums[j];
        }
    }

    
    for(int i=0;i<numsSize;i++){
        if(max<nums[i]){
            max=nums[i];
        }
        if(max-min<=k){
            return i;
        }
        if(min==nums[i]&&i!=numsSize-1){
            in=i+1;
            min=minmum(in,nums,numsSize);
        }

    }
    return -1;
    
}
int minmum(int in,int* nums, int numsSize){
    int min=nums[in];
    for(int j = in;j<numsSize;j++){
        if(min>nums[j]){
            min=nums[j];
        }
    }
        return min;
}
*/
int firstStableIndex(int* nums, int numsSize, int k) {
    int prefmax[numsSize];
    int suffmin[numsSize];
    prefmax[0]=nums[0];
    suffmin[numsSize-1]=nums[numsSize-1];
    for(int m=1;m<numsSize;m++){
        if(prefmax[m-1]<nums[m]){
            prefmax[m]=nums[m];
        }
        else{
            prefmax[m]=prefmax[m-1];
        }
    }
    for(int n=numsSize-2;n>=0;n--){
        if(suffmin[n+1]>nums[n]){
            suffmin[n]=nums[n];       
        }
        else{
            suffmin[n]=suffmin[n+1];
        }
    }
    
    for(int i=0;i<numsSize;i++){
        if(prefmax[i]-suffmin[i]<=k){
            return i;

        }
    }

    return -1;
    
}

int main(){
    int numsSize,k;
    printf("Enter the value of numsSize and k respectivly:\n");
    scanf("%d%d",&numsSize, &k);
    printf("enter the nums array:\n");
    int nums[numsSize];

    for(int k=0;k<numsSize;k++){
        scanf("%d",&nums[k]);
    }

    int result=firstStableIndex(nums,numsSize,k);

    printf("The resulted index is:__%d",result);
}