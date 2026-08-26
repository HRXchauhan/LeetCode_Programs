#include <stdio.h>

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

int main(){
    int gainSize=0;
    printf("Enter the size of the gain array:\n");
    scanf("%d",&gainSize);
    int gain[gainSize];
    printf("Enter the gain array:\n");
    for(int i=0;i<gainSize;i++){
        scanf("%d",&gain[i]);
    }
    
    int high=largestAltitude(gain, gainSize);
    printf("The highest Altitude is :->%d",high);
}