bool checkDivisibility(int n) {
    int sum=0, pro=1, temp=n;
    while(temp!=0){
        sum=sum+temp%10;
        pro=pro*(temp%10);
        temp=temp/10;

    }
    sum=sum+pro;
    if(n%sum==0){
        return true;
    }
    return false;

    
}