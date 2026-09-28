int maxDepth(char* s) {
    int count=0;
    int ans=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('){
            ans++;
        }else if(s[i]==')'){
            ans--;
        }

        if(ans>count){
            count = ans;
        }
    }

    return count;
    
}