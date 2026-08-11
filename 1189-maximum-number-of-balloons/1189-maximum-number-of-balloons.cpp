class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>m;
        for(char c : text){
            m[c]++;
        }
        m['l']/=2;
        m['o']/=2;
        return min({m['b'],m['a'],m['l'],m['o'],m['n']});
    }
};