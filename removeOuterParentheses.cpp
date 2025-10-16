class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        int start=0;
        string ans="";
        int i =0;
        int len=s.length();
        while(i<len){
            if(s[i]=='('){
                c+=1;
            }else if(s[i]==')'){
                c-=1;
            }
            if(c==0){
                ans+=s.substr(start+1,i-start-1);
                start=i+1;
            }
            i++;
        }
        return ans;
    }
};
