class Solution {
public:
    bool checkDivisibility(long long n) {
        long long temp = n;
        long long sum = 0;
        long long product = 1;
        while(temp>0){
            long long ld = temp%10;
            sum+=ld;
            product*=ld;
            temp = temp/10;
        }
        if(n%(sum+product)==0){
            return true;
        }
        return false;
    }
};