#include <stdio.h>

// Function prototype
char* longestCommonPrefix(char** strs, int strsSize);

int main() {

    char input[100][100];
    char *strs[100];
    int strsSize;
    printf("enter the size of the strings:\n");
    scanf("%d", &strsSize);

    printf("enter strings :\n");
    for(int a=0;a<strsSize;a++){
        scanf("%99s",input[a]);
        strs[a]=input[a];
    }
    // Modifiable strings
    /*char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char *strs[] = {
        str1,
        str2,
        str3
    };*/

    

    char *sub = longestCommonPrefix(strs, strsSize);

    printf("Longest Common Prefix: %s\n", sub);

    return 0;
}

char* longestCommonPrefix(char** strs, int strsSize) {

    int let = 0;

    for (int i = 0; strs[0][i] != '\0'; i++) {

        int count = 0;

        for (int n = 0; n < strsSize - 1; n++) {

            if (strs[n][i] == strs[n + 1][i]) {
                count++;
            } else {
                break;
            }
        }

        if (count == strsSize - 1)
            let++;
        else
            break;
    }

    strs[0][let] = '\0';

    return strs[0];
}