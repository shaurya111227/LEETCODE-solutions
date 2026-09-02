class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i = left;i<=right;i++){
            int temp = i;
            bool ok = true;
            while(temp>0){
                if(temp%10 == 0 || (i%(temp%10)!=0)){
                    ok = false;
                    break;
                }
                temp/=10;
            }
            if(ok) v.push_back(i);
        }
        return v;
    }
};