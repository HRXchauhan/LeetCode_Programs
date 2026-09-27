int mostFrequentEven(int* nums, int numsSize) {
    int count = -1;
    int ans = 1000000;

    int frq[100000]={0};
    for(int i=0;i<numsSize;i++){
        frq[nums[i]]++;
        if(nums[i]%2==0&&frq[nums[i]]>=count){
            if(count<frq[nums[i]]){
                ans=nums[i];
            }
            else if(count==frq[nums[i]]&&ans>nums[i]){
                ans=nums[i];

            }
            count=frq[nums[i]];
            
        }
    }

    if(ans==1000000){
        return -1;
    }
    else{
        return ans;
    }
}