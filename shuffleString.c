#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* restoreString(char* s, int* indices, int indicesSize) {
    char *r;
    r=malloc(indicesSize * sizeof(char));
    for(int i=0;i<indicesSize;i++){
        r[indices[i]]=s[i];
    }
    for(int j=0;j<indicesSize;j++){
        s[j]=r[j];
    }
    free(r);
    return s;
    
}
void main(){
    int indicesSize;

    printf("Enter the lenght of string and indice array:\n");
    scanf("%d",&indicesSize);
    char s[indicesSize+1];

    printf("Enter the string:\n");

    /*for(int i=0;i<indicesSize;i++){
        scanf("%s",&s[i]);
    }*/
   scanf("%s",s);

    printf("Enter the indices array:\n");
    int indices[indicesSize];
    for(int j=0;j<indicesSize;j++){
        scanf("%d",&indices[j]);
    }

    char *u=restoreString(s, indices, indicesSize);

    printf("The restored string is:\n");
    //for(int t=0;t<indicesSize;t++){
      //  printf("%s",s);
    //}
    printf("%s",u);
}