class Solution {
public:
    bool checkDivisibility(int n) {

        vector<int> digits;
        int temp = n;

        while (n > 0) {
            int digit = n % 10;
            digits.push_back(digit);
            n = n / 10;
        }
        int sum = 0;
        int product = 1;
        for (int i = 0; i < digits.size(); i++) {
            sum = sum + digits[i];
        }
        for (int j = 0; j < digits.size(); j++) {
            product = product * digits[j];
        }

        if (temp % (sum + product) == 0) {
            return true;
        }
            return false;
    }
};