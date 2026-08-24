#include <stdio.h>
#include <stdlib.h>
/*int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    
    int temp=0;
    
    int i=0, j=numsSize-1;

    *returnSize=numsSize;
        
    while(j>i){
        if(nums[i]%2==0){
            i++;
        }

        if(nums[j]%2!=0){
            j--;
        }
        if(nums[i]%2!=0 && nums[j]%2==0 &&j>i ){
            temp= nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            temp=0;
            i++;
            j--;
        }
    }
    return nums;
    
}*/


int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *arr;
    int temp=0;
    arr=malloc( numsSize * sizeof(int));
    int i=0, j=numsSize-1;

    *returnSize=numsSize;

    for(int a=0;a<numsSize;a++){
        if(nums[a]%2==0){
            arr[i]=nums[a];
            i++;
        }
        else{
            arr[j]=nums[a];
            j--;
        }

    }
    return arr;
}


int main(){
    int numsSize,size;
    printf("Enter the size of the nums array\n");
    scanf("%d",&numsSize);

    int nums[numsSize];

    printf("Enter the nums array\n");

    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }

    int* returnSize ;
    returnSize = &size;/* here returnSize store's the address
         *returnSize will change the value present on that addres*/
    int* arr = sortArrayByParity( nums, numsSize, returnSize);

    for(int j=0;j<size;j++){
        //printf("%d",nums[j]);
        printf("%d",arr[j]);
        //free(arr[j]); i olny free the variable which is malloced ( arr=malloc( numsSize * sizeof(int));)
    }
    free(arr);


}