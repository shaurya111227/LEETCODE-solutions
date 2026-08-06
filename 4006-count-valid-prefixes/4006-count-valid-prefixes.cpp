class Solution {
public:
    int countValidPrefixes(string s) {
        int a = 0,b = 0;
        int ans = 0;
        for(char c: s){
            if(c == '0')a++;
            if(c == '1')b++;
            if(abs(a-b)<=1) ans++;
        }
        return ans;
    }
};