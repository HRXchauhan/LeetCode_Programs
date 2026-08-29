bool isIsomorphic(char* s, char* t) {
    int freq[256]={0};
    int fre[512]={0};
    int n=0, a=0, c=0;
    for(int i=0;s[i]!='\0'&&t[i]!='\0';i++){
        if(freq[s[i]]==0){
            n++;
            freq[s[i]]++;
        }

        if(fre[t[i]+s[i]]==0){
            a++;
            fre[t[i]+s[i]]++;
        }
        
        if(a!=n){
        return false;
        }
    }
    if(a==n){
        return true;
    }
    else{
        return false;
    }
}
