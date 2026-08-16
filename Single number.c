int singleNumber(int* nums, int numsSize) {
    
    int frq[10];
    for(int n=0;n<10;n++)
    {
        frq[n]=0;
    }
    for(int i=0;i<numsSize;i++)
    {
        frq[nums[i]]++;
        
    }
    for(int j=0;j<10;j++)
    {
        if(frq[j]==1)
        {
            return j;
            
        }
    }
    return 0;
}
    
