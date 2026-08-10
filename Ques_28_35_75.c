#include <stdio.h>
#include <string.h>


int searchInsert(int* nums, int numsSize, int target);
void sortColors(int* nums, int numsSize);
int strStr(char* haystack, char* needle);


int main(){
    
    int numsSize, target, con;
    while(0==0){
    //int nums[numsSize];
    printf("\nChoose any option from below:\n");
    printf("\n1: For sorting the number array.\n");
    printf("2: For geting index of Target insertion in already sorted number array.\n");
    printf("3: For sort & geting index for Target insertion.\n");
    printf("4: For geting the length of string :\n");
    printf("5: For find the Index of the First Occurrence in a String.\n");
    printf("0: To end the program.\n");
    scanf("%d",&con);

    switch (con) {

        case 1:{

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
            break;
        }
        case 2:{
            printf("Enter size of number array:\n");
            scanf("%d",&numsSize);

            int nums[numsSize];

            printf("Enter the number array:\n");

            for(int i=0;i<numsSize;i++){
                scanf("%d",&nums[i]);
            }

            
            printf("\nEnter the target value:\n");
            scanf("%d",&target);

            int index = searchInsert(nums, numsSize, target);
            printf("The index of insertion of target value:-> %d",index);
            break;
        }

        case 3:{
            printf("Enter size of number array:\n");
            scanf("%d",&numsSize);

            int nums[numsSize];

            printf("Enter the number array:\n");

            for(int i=0;i<numsSize;i++){
                scanf("%d",&nums[i]);
            }

            sortColors(nums, numsSize);
            printf("\nEnter the target value:\n");
            scanf("%d",&target);

            int index = searchInsert(nums, numsSize, target);
            printf("The index of insertion of target value:-> %d\n",index);
            break;
        }
        case 4:{
            char haystack[100], needle[100];
            printf("Enter the Main string :\n");
            scanf("%s",&haystack);
    
            //printf("Enter the string to be find:\n");
            //scanf("%s",needle);
            int len = strlen(haystack);//--just to check strlen() function
            printf("%d\n",len);
            break;

        }
        case 5:{
            char haystack[100], needle[100];
            printf("Enter the Main string :\n");
            scanf("%s",&haystack);
    
            printf("Enter the string to be find:\n");
            scanf("%s",needle);
    //int len = strlen(needle);--just to check strlen() function
    //printf("%d",len);
            int s_index = strStr(haystack, needle);
            if(s_index!=-1){
            printf("String is present in the main string on index:-> %d\n",s_index);
            }
            else{
                printf("String is not present in the main string.\n");

            }
            break;
        }
        case 0:{
            return 0;
        }
        default:{
            printf("Enter right choice:\n");
        }
    }}
            
        


            
    


    /*printf("Enter size of number array:\n");
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
    printf("The index of insertion of target value:-> %d",index);*/


    /*char haystack[100], needle[100];
    printf("Enter the Main string :\n");
    scanf("%s",&haystack);
    
    printf("Enter the string to be find:\n");
    scanf("%s",needle);
    //int len = strlen(needle);--just to check strlen() function
    //printf("%d",len);
    int s_index = strStr(haystack, needle);
    if(s_index!=-1){
        printf("String is present in the main string on index:-> %d",s_index);
    }
    else{
        printf("String is not present in the main string.");
    }*/


}

int strStr(char* haystack, char* needle){
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