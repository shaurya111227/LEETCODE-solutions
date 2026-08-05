class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        t = t.substr(1, t.size() - 2);
        int pos = t.find(s);
        return pos != -1;
    }
};