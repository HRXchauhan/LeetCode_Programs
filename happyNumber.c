#include <stdio.h>
#include <stdbool.h>

bool isHappy(int n) {


    int i, rem;
    int sum =0;
    long long tmp=n;
        do{
            
            sum = 0;
            for(i=tmp;i>0;i=i/10)
                {
                    rem=i%10;
                    rem=rem*rem;
                    sum=sum+rem;
                    tmp=sum;   
                }
                tmp=sum;
        }while(tmp!=1&&tmp!=4);
    if(tmp==1){
        return true;
    }
    else{
        return false;
    }
        
    

}

int main(){
    int n;
    printf("enter the number to check as happy or not:\n");
    scanf("%d",&n);

    if(isHappy(n)){
        printf("number is happy");
    }
    else{
        printf("number is sad");
    }

}

