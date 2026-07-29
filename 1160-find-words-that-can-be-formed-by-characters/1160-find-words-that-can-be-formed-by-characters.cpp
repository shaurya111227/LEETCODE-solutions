class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int arr[26] = {0};
        int ans = 0;
        for(char c : chars)
            arr[c - 'a']++;
        for(string &word : words) {
            int v[26] = {0};
            for(char ch : word) {
                v[ch - 'a']++;
            }
            bool ok = true;
            for(int i = 0; i < 26; i++) {
                if(v[i] > arr[i]) {
                    ok = false;
                    break;
                }
            }
            if(ok) ans += word.length();
        }
        return ans;
    }
};