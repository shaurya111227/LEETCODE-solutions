class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int sum = 0;
        int x = 0;
        for(char c : s){
            if(c!='0'){
                sum+= c-'0';
                x = x*10 + (c-'0');
            }
        }
        return 1LL*sum*x;
    }
};