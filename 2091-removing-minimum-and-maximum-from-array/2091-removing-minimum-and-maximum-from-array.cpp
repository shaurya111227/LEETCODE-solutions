class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minindex = min_element(nums.begin(),nums.end()) - begin(nums);
        int maxindex = max_element(nums.begin(),nums.end()) - begin(nums);
        int left = min(minindex,maxindex);
        int right = max(minindex,maxindex);
        return min({right+1,n-left,left+1+n-right});
    }
};