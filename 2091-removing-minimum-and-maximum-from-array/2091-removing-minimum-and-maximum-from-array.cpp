class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 1;
        int maxi = 0;
        for(int i = 1;i<n;i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
        }
        int mini = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]<nums[mini]){
                mini = i;
            }
        }
        int l = max(maxi, mini) + 1;
        int r = n - min(maxi, mini);
        int t = min(maxi, mini) + 1 + n - max(maxi, mini);
        return min(l,min(r,t));
    }
};