class Solution {
public:
    int countMonobit(int n) {
        int a = 0;
        int b = 1;
        while (pow(2, b) - 1 <= n) {
            a++;
            b++;
        }
        return b;
    }
};