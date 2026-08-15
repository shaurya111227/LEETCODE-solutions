class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = 0;
        int b = 0;
        for(int i = 0;i<requests.size();i++){
            int k = abs(requests[i]-b);
            ans+=k;
            b = requests[i];
        }
        return ans;
    }
};