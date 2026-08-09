#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

void main(){
    int numsSize, k=0;
    printf("enter size of nums:\n");
    scanf("%d", &numsSize);
    int nums[numsSize];

    printf("enter the numbers:\n");
    for(int i=0;i<numsSize;i++){
        scanf("%d",&nums[i]);
    }
    numsSize= removeDuplicates(nums, numsSize);
    printf("%d\n",k);

    for(int b=0;b<numsSize;b++){
        printf("%d",nums[b]);
    }

}
int removeDuplicates(int* nums, int numsSize) {
    int k=0;
    for(int j=0;j<numsSize;j++){
        for(int n=j+1;n<numsSize;n++){
            if(nums[j]==nums[n]){
                for(int a=n;a<numsSize-1;a++){
                    nums[a]=nums[a+1];
                }
                
                k++;
                numsSize--;
                n--;
            }
        
                 
        }

    }
    
    /*printf("%d\n",k);

    for(int b=0;b<numsSize;b++){
        printf("%d",nums[b]);
    }*/
    return numsSize;
    
}