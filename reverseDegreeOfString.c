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