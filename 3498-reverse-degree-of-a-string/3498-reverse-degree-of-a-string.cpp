class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = s.size()-1;i>=0;i--) sum += (i+1)*(26 - (s[i]-'a'));
        return sum;
    }
};