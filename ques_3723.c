char* maxSumOfSquares(int num, int sum) {
    char *s=malloc((num+1) * sizeof(char));
    if(num*9<sum){
        return "";
    }
    int n=0;
    while(num--){
        if(sum>9){
            s[n]='9';
            sum=sum-9;
            n++;
        }else{
            s[n]= sum + '0';
            sum=0;
            n++;
        }
    }
    s[n]='\0';
    return s;
    
}