int lengthOfLongestSubstring(char* s) {
   //int arr[256]={0};
    int count =0,ans=0;
    int j;
    int n=strlen(s);
    for(int i=0;s[i]!='\0';i++){
        int arr[256]={0};
        count=0;
        j=i;
        while(s[j]!='\0'&&arr[s[j]]==0){
            arr[s[j]]++;
            count++;
            j++;
            
        }
        if(count>ans){
            ans=count;
        }

        
    }
    return ans;
    
}