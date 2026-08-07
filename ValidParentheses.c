#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s);

int main() {
    
    
    char s[100];
    //int strsSize;
   // printf("enter the size of the strings:\n");
    //scanf("%d", &strsSize);

    printf("enter strings :\n");
    
        scanf("%99s",s);
       
    bool is= isValid(s);
    if(is){
        printf("true");
    }
    else
        printf("false");
        
    return 0;
}

bool isValid(char* s) {
    int len = strlen(s);
    char op[len+1];

    int n=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            n++;
            op[n]=s[i];
            

        }
        else if(s[i]==')'){
            if(op[n]=='('){
                op[n]='\0';
                n--;
            }
            else
                return false;
        }
        else if(s[i]==']'){
            if(op[n]=='['){
                op[n]='\0';
                n--;
            }
            else return false;
        }
        else if(s[i]=='}'){
            if(op[n]=='{'){
                op[n]='\0';
                n--;
            }
            else return false;
        }
        else{
            printf("enter valid string:");
        }
    }

    if(op[1]=='\0'){
        return true;
    }
    else return false;
    
}