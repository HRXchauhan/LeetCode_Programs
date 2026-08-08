#include <stdio.h>

int main(){
    int temp=0,val, numsSize, nums[100];
    
    printf("enter the size of nums:\n");
    scanf("%d",&numsSize);

    printf("enter the numbers:\n");

    for(int z=0;z<numsSize;z++){
        scanf("%d",&nums[z]);
    }
    printf("enter the number to be removed:\n");
    scanf("%d",&val);


     int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==val){
            for(int j=i;j<numsSize-1;j++){  //for left shifting a show on chatgtp that can be be with out this shifting but i am pushing this program because its my own:

                nums[j]=nums[j+1];                
            }
            i--;
            numsSize--;
            k++;
        }
    }

    for(int a=0;a<numsSize;a++){
        printf("%d, ",nums[a]);
    }

    return 0;
}