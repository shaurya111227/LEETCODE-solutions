class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int i = 0;
        int j = 0;
        int ans = 0;
        for(int x : nums){
            m[x]++;
            while(m[x]>k){
                int leftnum = nums[i];
                m[leftnum]--;
                i++;
            }
            int window = j - i + 1;
            ans = max(ans,window);
            j++;
        }
        return ans;
    }
};