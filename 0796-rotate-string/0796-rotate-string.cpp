class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string t = s + s;
        for (int i = 0; i <= t.size() - goal.size(); i++) {
        if (t.substr(i, goal.size()) == goal)
        return true;
}
return false;
    }
};