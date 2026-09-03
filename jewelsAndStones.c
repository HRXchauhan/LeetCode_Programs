#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int numJewelsInStones(char* jewels, char* stones) {
    //int len = strlen(jewels);
    int hash[256]={0};
    int count=0;
    for(int j=0;jewels[j]!='\0';j++){
        hash[jewels[j]]++;
    }

    for(int i=0;stones[i]!='\0';i++){
        if(hash[stones[i]]!=0){
            count++;
        }
    }
    return count;
}

int main(){
    int jewelslen, stoneslen;
    printf("Enter the lentgth of jewels and stone:\n");
    scanf("%d %d",&jewelslen, &stoneslen);
    char jewels[jewelslen+1], stones[stoneslen+1];

    printf("Enter the string;\n");
    scanf("%s",&jewels);
    printf("Enter the string stones;\n");
    scanf("%s",&stones);

    int result = numJewelsInStones(jewels,stones);

    printf("The result is:->%d",result);
    
    return 0;

}