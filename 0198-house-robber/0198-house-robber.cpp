class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int hello = 0;
        for(int i = 0;i<n;i++){
            int maxi = max(hello,count+nums[i]);
            count=hello;
            hello=maxi;
        }
        return hello;
    }
};