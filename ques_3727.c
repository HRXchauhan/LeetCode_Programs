int compare(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;

    return (x > y) - (x < y);
}

long long maxAlternatingSum(int* nums, int numsSize) {
    long long temp=0;
    long long numss[numsSize];
    for(int i=0;i<numsSize;i++){
        numss[i]=nums[i]*nums[i];
    }
    /*for(int i=0;i<numsSize;i++){
        for(int j=1;j<numsSize-i;j++){
            if(numss[j]<numss[j-1]){
                temp=numss[j];
                numss[j]=numss[j-1];
                numss[j-1]=temp;
            }
        }
    }*/
    qsort(numss, numsSize, sizeof(long long), compare);

    int n=numsSize/2;
    long long sum=0,sub=0;
    for(int i=n;i<numsSize;i++){
        sum=sum+numss[i];
    }
    for(int k=0;k<n;k++){
        sub=sub+numss[k];
    }

    long long ans=sum-sub;

    return ans;
}