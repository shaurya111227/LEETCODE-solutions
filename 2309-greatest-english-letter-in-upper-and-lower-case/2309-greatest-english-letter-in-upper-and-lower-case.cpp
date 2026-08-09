class Solution {
public:
    string greatestLetter(string s) {
        int lower[26] = {0};
        int upper[26] = {0};
        for(char c : s) {
            if(c >= 'a' && c <= 'z') lower[c - 'a'] = 1;
            else upper[c - 'A'] = 1;
        }
        for(int i = 25; i >= 0; i--) {
            if(lower[i] && upper[i]) return string(1, 'A' + i);
        }
        return "";
    }
};