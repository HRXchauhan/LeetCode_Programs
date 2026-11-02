/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int key=-1,ans=-1;
    int temp=0,n=0;
    int k=0;
    while(ans!=-1||key!=arr2[arr2Size-1]){
        if(ans==-1){
            
            key=arr2[k];
            k++;
        }
        ans=-1;
        for(int j=n;j<arr1Size;j++){
            if(arr1[j]==key){
                ans=j;
            }
        }

        if(ans!=-1){
            temp=arr1[ans];
            arr1[ans]=arr1[n];
            arr1[n]=temp;
            n++;
        }
    }
    int m=0;
    bool swapped=false;

    do{
        swapped=false;
        for(int j=n+1;j<arr1Size-m;j++){
            if(arr1[j-1]>arr1[j]){
                temp=arr1[j];
                arr1[j]=arr1[j-1];
                arr1[j-1]=temp;
                swapped=true;
            }

        }
        m++;
    }while(swapped);


    *returnSize=arr1Size;

    return arr1;
    
    
}