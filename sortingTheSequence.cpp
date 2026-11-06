class Solution {
public:
    string sortSentence(string s) {

        string help="";
        string ans[10];
        
        for(int i=0;i<=s.size();i++){

            if(i==s.size()||s[i]==' '){

                int pos=help.back()-'0';

                help.pop_back();

                ans[pos]=help;
                help="";

            }else{
                help+=s[i];
            }
        }

        string result="";

        for(int i=0;i<10;i++){
            if(ans[i] != ""){
                if(result!=""){
                    result+=" ";
                }

                result+=ans[i];
            }
        }

        return result;
        

    }
};