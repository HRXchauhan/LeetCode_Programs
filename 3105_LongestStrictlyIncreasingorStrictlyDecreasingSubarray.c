int longestMonotonicSubarray(int* nums, int numsSize) {
    int increase,decrease;
    int ans=1;
    for(int i=0;i<numsSize;i++){
        increase=0;
        decrease=0;
        for(int j=i+1;j<numsSize;j++){

            if(nums[i]<nums[j]&&nums[j-1]<nums[j]&&decrease==0){
                increase++;
            }else if(nums[i]>nums[j]&&nums[j-1]>nums[j]&&increase==0){
                decrease++;
            }else{
                break;
            }
        }
        if(increase!=0&&increase+1>ans){
            ans=increase+1;
        }else if(decrease!=0&&decrease+1>ans){
            ans=decrease+1;

        }
    }

    return ans;
}