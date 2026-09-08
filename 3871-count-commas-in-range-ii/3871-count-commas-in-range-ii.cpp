class Solution {
public:
    typedef long long ll;
    long long countCommas(long long n) {
        ll ans = 0;
        if (n >= 1000) ans += (n - 1000 + 1) * 1;
        if (n >= 1000000) ans += (n - 1000000 + 1) * 1;
        if (n >= 1000000000) ans += (n - 1000000000 + 1) * 1;
        if (n >= 1000000000000) ans += (n - 1000000000000 + 1) * 1;
        if (n >= 1000000000000000) ans += (n - 1000000000000000 + 1) * 1;
        return ans;
    }
};