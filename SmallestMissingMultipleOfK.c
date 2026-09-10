int missingMultiple(int* nums, int numsSize, int k) {
    int frq[101]={0};


    for(int i=0;i<numsSize;i++){
        frq[nums[i]]++;
    }
    int ans=0;
    for(int j=1;j<102;j++){
        if(j*k>=101){
            ans=j;
            break;
            
        }
        if(frq[j*k]==0){
            ans=j;
            break;
        }
    }
    ans=ans*k;
    return ans;
    
}