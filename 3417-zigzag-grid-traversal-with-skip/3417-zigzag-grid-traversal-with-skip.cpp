class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>v;
        int m = grid.size();
        int n = grid[0].size();
        bool ok = true;
        for(int i = 0;i<m;i++){
            if(i%2==0){
                for(int j = 0;j<n;j++){
                    if(ok)v.push_back(grid[i][j]);
                    ok = !ok;
                }
            } else {
                for(int j = n-1;j>=0;j--){
                    if(ok)v.push_back(grid[i][j]);
                    ok = !ok;
                }
            }
        }
        return v;
    }
};