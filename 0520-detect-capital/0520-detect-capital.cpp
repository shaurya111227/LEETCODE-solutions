class Solution {
public:
    bool detectCapitalUse(string word) {
        int uc = 0;
        for(char ch : word){
            if(isupper(ch)) uc++;
        }
        if((uc == word.length())||(uc == 0)||(uc == 1 && isupper(word[0]))) return true;
        return false;
    }
};