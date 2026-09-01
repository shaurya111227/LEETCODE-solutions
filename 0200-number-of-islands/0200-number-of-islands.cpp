class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& grid){
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size()) return;
        if(grid[r][c]=='0') return;
        grid[r][c] = '0';
        dfs(r - 1, c, grid);
        dfs(r + 1, c, grid);
        dfs(r, c - 1, grid);
        dfs(r, c + 1, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int m = 0;m<grid.size();m++){
            for(int n = 0;n<grid[0].size();n++){
                if(grid[m][n]=='1'){
                    count++;
                    dfs(m,n,grid);
                }
            }
        }
        return count;
    }
};