class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
        sort(stones.begin(),stones.end());
        int a = stones[stones.size()-1];
        int b = stones[stones.size()-2];
        if(a==b){
            stones.pop_back();
            stones.pop_back();
        }
        else {
        stones.pop_back();
        stones[stones.size()-1]=a-b;
        }
        }
        if(stones.empty()) return 0;
        return stones[0];
    }
};