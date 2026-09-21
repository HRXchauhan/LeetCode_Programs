int reverseDegree(char* s) {

    int sum=0, prd=1, n=0;
    int x=0;


    while(s[n]!='\0'){
        x=s[n]-123;
        x=x*-1;
        prd=x*(n+1);
        sum=sum+prd;
        n++;
    }

    return sum;
    
}