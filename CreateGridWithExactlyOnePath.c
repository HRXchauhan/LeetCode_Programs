/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** createGrid(int m, int n, int* returnSize) {
    char **ans=malloc( m * sizeof(char *));
    for(int i=0;i<m;i++){
        ans[i] = malloc((n+1) * sizeof(char));

        for(int j=0;j<n;j++){
            if(i==0||j==n-1){
                ans[i][j]='.';
            }else{
                ans[i][j]='#';
            }
        }
    }
    for(int i=0;i<m;i++){
        ans[i][n]='\0';
    }

    *returnSize=m;

    return ans;

    
}