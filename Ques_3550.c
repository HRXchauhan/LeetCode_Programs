 smallestIndex(int* nums, int numsSize) {
    int ans=-1;
    int num=0, sum=0;
    for(int i=0;i<numsSize;i++){
        num=nums[i];
        sum=0;
        while(num>0){
            
            sum=sum+(num%10);
            num=num/10;
            
        }
        if(i==sum){
            return i;
        }
    }
    return ans;
    
}
