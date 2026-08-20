class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>arr;
        bool ok = true;
        for(int x : nums){
            arr[x]++;
        }
        for(int x : nums){
            if(arr[x]%2 != 0){
                ok = false;
                break;
            }
        }
        if(ok) return true;
        else return false;
    }
};