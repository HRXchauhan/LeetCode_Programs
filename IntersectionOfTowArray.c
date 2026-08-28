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
