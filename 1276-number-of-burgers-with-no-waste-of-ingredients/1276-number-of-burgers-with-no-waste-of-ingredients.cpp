class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        if(t%2!=0) return{};
        float x = t/2 - c;
        float y = 2*c - t/2;
        if(x >= 0 && y >= 0 && (int)x==x && (int)y==y){
            return {(int)x,(int)y};
        }
        return {};
    }
};