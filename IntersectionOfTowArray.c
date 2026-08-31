#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hash[1001]={0};
    int *arr=malloc( 1001 * sizeof(int));
    for(int i=0;i<nums1Size;i++){
        hash[nums1[i]]=1;
    }
    int n=0;
    for(int j=0;j<nums2Size;j++){
        if(hash[nums2[j]]==1){
            arr[n]=nums2[j];
            hash[nums2[j]]=0;
            n++;
        }
    }
    *returnSize= n;
    return arr;
}

int main(){
    int nums1Size, nums2Size, size;
    printf("Enter the size of nums1 array:\n");
    scanf("%d",&nums1Size);
    printf("enter the size of nums2 array:\n");
    scanf("%d",&nums2Size);
    int nums1[nums1Size];
    int nums2[nums2Size];
    printf("Enter the nums1 array:\n");
    for(int i=0;i<nums1Size;i++){
        scanf("%d",&nums1[i]);
    }
    for(int j=0;j<nums2Size;j++){
        scanf("%d",&nums2[j]);
    }
    int *returnSize=size;
    
    int *arr=intersection( nums1, nums1Size, nums2, nums2Size, returnSize);
    for(int e=0;e<size;e++)
    {
        printf("ans:-> %d",arr[e]);
    }
    free(arr);
    return 0;
}