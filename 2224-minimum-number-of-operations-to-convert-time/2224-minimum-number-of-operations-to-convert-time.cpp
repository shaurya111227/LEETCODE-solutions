class Solution {
public:
    int convertTime(string current, string correct) {
        int h1 = (current[0] - '0') * 10 + (current[1] - '0');
        int m1 = (current[3] - '0') * 10 + (current[4] - '0');
        int h2 = (correct[0] - '0') * 10 + (correct[1] - '0');
        int m2 = (correct[3] - '0') * 10 + (correct[4] - '0');
        int t1 = h1 * 60 + m1;
        int t2 = h2 * 60 + m2;
        int diff = t2 - t1;
        int count = 0;
        while (diff >= 60) {
            diff -= 60;
            count++;
        }
        while (diff >= 15) {
            diff -= 15;
            count++;
        }
        while (diff >= 5) {
            diff -= 5;
            count++;
        }
        while (diff >= 1) {
            diff -= 1;
            count++;
        }
        return count;
    }
};