class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int count = 0;
        for(int i = 0;i<nums1.size();i++){
            if(nums1[i]%2!=0)count++;
        }
        int mx = *min_element(nums1.begin(),nums1.end());
        if((mx%2!=0) || (mx%2==0 && count==0)) return true;
        return false;
    }
};