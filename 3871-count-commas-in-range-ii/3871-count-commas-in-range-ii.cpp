class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        else if(n>=1000 && n<1000000) return n-999;
        else if(n>=1000000 && n<1000000000) return (n-99999)*2-801000;
        else if(n>=1000000000 && n<1000000000000) return (n-9999999)*3 - 971001000;
        else if(n>=1000000000000 && n<1000000000000000) return (n-999999999)*4 - 997001001000;
        else return (n-999999999)*4 - 997001001000 + 1;
    }
};