class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mini(n);
        mini[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--) {
            mini[i] = min(nums[i], mini[i+1]);
        }
        int Maxi = INT_MIN;
        for(int i = 0; i < n; i++) {
            Maxi = max(Maxi, nums[i]);
            if(Maxi - mini[i] <= k) return i;
        }
        return -1;
    }
};