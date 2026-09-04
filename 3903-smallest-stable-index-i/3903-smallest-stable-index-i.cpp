class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>sum1(n);
        vector<int>sum2(n);
        sum1[0] = nums[0];
        for(int i = 1;i<n;i++){
            sum1[i] = max(sum1[i-1],nums[i]);
        }
        sum2[n-1]=nums[n-1];
        for(int i = n-2;i>=0;i--){
            sum2[i]=min(sum2[i+1],nums[i]);
        }
        for(int i = 0;i<n;i++){
            if(sum1[i] - sum2[i] <= k)return i;
        }
            return -1;
    }
};