class Solution {
public:
    int largestOverlap(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();
        int maxoverlaps = 0;
        for(int r = -n+1;r<n;r++){
            for(int c = -n+1;c<n;c++){
                int count = 0;
                for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                int bi = i+r;
                int bj = j+c;
                if(bi<0 || bi>=n || bj<0 || bj>=n) continue;
                if(a[i][j]==1 && b[bi][bj]==1)count++;
            }
        }
                maxoverlaps = max(maxoverlaps,count);
            }
        }
        return maxoverlaps;
    }
};