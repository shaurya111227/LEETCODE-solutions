class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<int,int>m;
        for(char c : word1){
            m[c-'a']++;
        }
        for(char c : word2){
            m[c-'a']--;
        }
        for(int i = 0;i<26;i++){
            if(abs(m[i])>3)return false;
        }
        return true;
    }
};