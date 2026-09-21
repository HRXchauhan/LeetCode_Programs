#include <stdio.h>
#include <string.h>

int reverseDegree(char* s) {

    int sum=0, prd=1, n=0;
    int x=0;


    while(s[n]!='\0'){
        x=123-s[n];
       
        prd=x*(n+1);
        sum=sum+prd;
        n++;
    }

    return sum;
    
}

int main(){
    char s[100];
    printf("Enter the string:\n");
    scanf("%s",&s);

    int result=reverseDegree(s);

    printf("The result is :-> %d",result);

    return 0;
}