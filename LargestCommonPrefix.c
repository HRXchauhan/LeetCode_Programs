#include <stdio.h>

// Function prototype
char* longestCommonPrefix(char** strs, int strsSize);

int main() {

    // Modifiable strings
    char str1[] = "";
    char str2[] = "";
    char str3[] = "";

    char *strs[] = {""
        
    };

    int strsSize = 0;

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