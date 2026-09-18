class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int i = 0;
        int j = 0;
        int currsum = 0;
        int bestlen = INT_MAX;
        int result = INT_MAX;
        vector<int>v(n,INT_MAX);
        while(j<n){
            currsum+=arr[j];
            while(i<j && currsum > target){
                currsum -= arr[i++];
            }
            if(currsum == target){
                int len = j-i+1;
                if(i>0 && v[i-1]!=INT_MAX){
                result = min(result,len+v[i-1]);
                }
                bestlen = min(bestlen , len);
            }
            v[j] = bestlen;
            j++;
        }
        if(result == INT_MAX)return -1;
        return result;
    }
};