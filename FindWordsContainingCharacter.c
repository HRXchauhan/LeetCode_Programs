/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *ans=malloc(wordsSize * sizeof(int));
    
    int count=0,is=0;
    for(int i=0;i<wordsSize;i++){
        int j=0;
        while(words[i][j]!='\0'){
            if(words[i][j]==x){
                is=1;
            }
            j++;
            
        }
        if(is==1){
            ans[count]=i;
             count++;
             is=0;   
        }
    }

    *returnSize=count;

    return ans;
}