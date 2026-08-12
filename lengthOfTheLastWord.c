#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s);

int main(){
    char s[100];
    int snet;
    printf("Enter the string :\n");
    fgets(s, sizeof(s), stdin);//string be like{harsh kumar}-> {'h'a'r's'h' 'k'u'm'a'r'\n'\0'}

    snet=lengthOfLastWord(s);

    printf("Size of the last word in string is:-> %d\n",snet);

}


int lengthOfLastWord(char* s) {
    int i=0, count=0, in=0;
    while(s[i]!='\n'){
        // i am using '\n' instead of '\0' cause when i am taking input through fgets() function after the string orignal string it store '\n' and than '\0'

        if(s[i]!=' '){
            count=0;
        }
        if(s[i]!=' '){
             while(s[i]!=' '&&s[i]!='\n')}
                if(s[i]==' '){
                count=0;
                }
                else{
                    count++;
           
                }
                i++;
            }
        }
        else{
            i++;
        }
       
        
        
        
    }
    return count;
    
    
}