#include <stdio.h>
#include <stdbool.h>


bool isValid(char* s) {

    char op[100];

    int n=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(','[','{'){

            op[n]=s[i];
            n++; 

        }
        else if(s[i]==')'){
            if(op[n-1]=='('){
                op[n-1]='\0';
                n--;
            }
            else
                return false;
        }
        else if(s[i]==']'){
            if(op[n-1]=='['){
                op[n-1]='\0';
                n--;
            }
            else return false;
        }
        else if(s[i]=='}'){
            if(op[n-1]=='{'){
                op[n-1]='\0';
                n--;
            }
            else return false;
        }
    }

    if(op[n]=='\0'){
        return true;
    }
    else return false;
    
}

int main() {

    
    char s[100];
    int strsSize;
    printf("enter the size of the strings:\n");
    scanf("%d", &strsSize);

    printf("enter strings :\n");
    for(int a=0;a<strsSize;a++){
        scanf("%99s",s[a]);
        
    }
    bool is= isValid(s);
    if(is){
        printf("true");
    }
    else
        printf("false");
    return 0;
}