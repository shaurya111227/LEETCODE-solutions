class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for (int k = 0; k < min(m, n); k++) {
            for (int i = 0; i < m - 1; i++) {
                for (int j = 0; j < n - 1; j++) {
                    if (i >= j) {
                        if (grid[i][j] < grid[i + 1][j + 1])
                            swap(grid[i][j], grid[i + 1][j + 1]);
                    } else {
                        if (grid[i][j] > grid[i + 1][j + 1])
                            swap(grid[i][j], grid[i + 1][j + 1]);
                    }
                }
            }
        }
        return grid;
    }
};