class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        int x = nums[0];
        for(int i = 2; i < n; i++) {
            if(x > nums[i]) {
                return false;
            }
            x = max(x, nums[i-1]);
        }
        return true;
    }
};