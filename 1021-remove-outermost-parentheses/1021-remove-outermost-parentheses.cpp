class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int outer = 0;
        for(char c:s){
            if(c=='('){
                if(outer>0) ans+=c;
                outer++;
            } else {
                outer--;
                if(outer>0) ans+=c;
            }
        }
        return ans;
    }
};