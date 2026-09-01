class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        vector<vector<int>> directions = {{-1, 0},{1, 0},{0, -1},{0, 1}};
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    grid[i][j]='0';
                    while(!q.empty()){
                        pair<int,int>curr = q.front();
                        q.pop();
                        int r = curr.first;
                        int c = curr.second;
                        for(auto &dir  : directions){
                            int nr = r + dir[0];
                            int nc = c + dir[1];
                            if(nr<0 || nc<0 || nr>=m || nc>=n) continue;
                            if(grid[nr][nc]=='0') continue;
                            grid[nr][nc]='0';
                            q.push({nr,nc});
                        }
                    }
                }
            }
        }
        return count;
    }
};