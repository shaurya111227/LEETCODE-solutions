class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                long long hcf = gcd(nums[i],nums[j]);
                long long a = nums[i]/hcf;
                long long b = nums[j]/hcf;
                ans = max(ans,a*b);
            }
        }
        return ans;
    }
};