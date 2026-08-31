class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        for(int len = k;len<=n;len++){
            string result = "";
            for(int st = 0;st<= n-len;st++){
                string temp = s.substr(st,len);
                int count = 0;
                for(char &c : temp){
                    if(c == '1')count++;
                }
                if(count == k){
                    if(result.empty() || temp < result){
                        result = temp;
                    }
                }
            }
            if(!result.empty()) return result;
        }
        return "";
    }
};