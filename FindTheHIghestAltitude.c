int largestAltitude(int* gain, int gainSize) {
    int high=0, sum[gainSize+1];
    sum[0]=0;
    for(int i=0;i<gainSize;i++){
        sum[i+1]=sum[i]+gain[i];
        if(high < sum[i+1]){
            high=sum[i+1];
        }
    }
    return high;
}
