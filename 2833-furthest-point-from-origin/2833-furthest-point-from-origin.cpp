class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        int a = 0;
        int b = 0;
        for(char c : moves){
            if(c=='L')a++;
            else if(c=='R')b++;
        }
        return abs(a-b)+(n-(a+b));
    }
};