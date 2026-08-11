#include <stdio.h>
#include <string.h>

int romanToInt(char* s);

int main(){
    //int i=1, v=5, x=10, l=50, c=100, d=500, m=1000;
    char s[20];

    printf("Enter roman number in captial only:\n");
    scanf("%s",s);
    int int_g = romanToInt(s);

    printf("Integer value:\n%d", int_g);
    return 0;
}

int romanToInt(char* s) {
    
    int sum=0,nsum=0;
    int a[100];

    int len = strlen(s);
    for(int j=0;j<len;j++){
        if(s[j]=='M'){
            a[j]=1000;
        }
        else if(s[j]=='D'){
            a[j]=500;
        }
        else if(s[j]=='C'){
            a[j]=100;
        }
        else if(s[j]=='L'){
            a[j]=50;
        }
        else if(s[j]=='X'){
            a[j]=10;
        }
        else if(s[j]=='V'){
            a[j]=5;
        }
        else if(s[j]=='I'){
            a[j]=1;
        }


    }
    for(int i=0;i<len-1;i++){
        if(a[i]>=a[i+1]){
            sum=sum+a[i];
        }
        else{
            nsum=nsum+a[i];
        }
    }
    sum = sum+a[len-1];
    sum = sum-nsum;
    return sum;
    
    
}