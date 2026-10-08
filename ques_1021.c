char* removeOuterParentheses(char* s) {
    int l=strlen(s);
    char *p=malloc((l+1) * sizeof(char));
    
    int count=0,n=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==')'){
            count--;
        }
        if(count>0){
            p[n]=s[i];
            n++;
        }
        if(s[i]=='('){
            count++;
        }
        
    }
    p[n]='\0';

    return p;
    
}