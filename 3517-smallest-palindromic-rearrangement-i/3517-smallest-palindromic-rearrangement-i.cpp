class Solution {
public:
    string smallestPalindrome(string s) {
        int arr[26] = {};
        for(char c : s){
            arr[c-'a']++;
        }
        string l = "";
        string m = "";
        for(int i = 0;i<26;i++){
            l.append(arr[i]/2,'a'+i);
            if (arr[i] % 2) m += char('a' + i);
        }
        string r = l;
        reverse(r.begin(),r.end());
        return l+m+r;
    }
};