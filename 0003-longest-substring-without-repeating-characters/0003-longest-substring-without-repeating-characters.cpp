class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(256,-1);
        int n = s.size();
        int l = 0;
        int r = 0;
        int maxlen = 0;
        while(r<n){
            if(arr[s[r]]!=-1){
                if(arr[s[r]]>=l){
                    l = arr[s[r]] + 1;
                }
            }
            int len = r-l+1;
            maxlen = max(len,maxlen);
            arr[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};