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
//this the correct and optimum solution for that,
//i use chat gpt for learning sliding window and this my first sliding window ques;
/*int lengthOfLongestSubstring(char* s) {
    int arr[256]={0};
    int count =0,ans=0;
    int left=0,right=0;
    int n=strlen(s);
    for(int right=0;s[right]!='\0';right++){

      
      while(arr[s[right]]!=0){
        arr[s[left]]--;
        left++;
      }
      arr[s[right]]++;
      if(ans<right-left+1){
        ans=right-left+1;
      }

        
    }
    return ans;
    
}*/