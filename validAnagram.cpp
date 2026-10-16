#include<bits/stdc++.h>
using namespace std;
int main(){

            string s="anagram";
            string t="nagaram";
            int freq[26]={0};
            for(int i=0;s[i]!='\0';i++){
                freq[s[i]-'a']++;
            }

            for(int j=0;t[j]!='\0';j++){
                freq[s[j]-'a']--;
            }
            int n=0;
            for(int i=0;i<26;i++){
                if(freq[i]!=0){
                    cout<<"NO"<< endl;
                    n=i;
                    break;
                }
                
            }
            if(freq[n]==0){
                cout<<"yes"<<endl;
            }
        }
