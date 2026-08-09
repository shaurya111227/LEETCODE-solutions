class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int x : nums){
            int sum = 0;
            while(x){
                int ld = x%10;
                sum+=ld;
                x /= 10;
            }
           ans = min(ans,sum);
        }
        return ans;
    }
};