class Solution {
public:
    void orangesRottingUtil(vector<vector<int> > &grid, int i, int j , int n, int m, int time){
        
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || (1 < grid[i][j] && grid[i][j] < time)){
            return;
        }
        
        grid[i][j] = time;
        orangesRottingUtil(grid, i+1, j, n, m, time+1);
        orangesRottingUtil(grid, i, j+1, n, m, time+1);
        orangesRottingUtil(grid, i-1, j, n, m, time+1);
        orangesRottingUtil(grid, i, j-1, n, m, time+1);
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int time = 2;
        // vector<vector<int> > dp (n,vector<int>(m, INT_MAX));
        for(int i = 0; i<n; i++){
            for(int j =0 ; j<m; j++){
                if (grid[i][j]==2){
                orangesRottingUtil(grid, i, j, n, m, time);
                // updateMatrixUtil(mat,dp, i, j+1, n, m, val);
                // updateMatrixUtil(mat,dp, i-1, j, n, m, val);
                // updateMatrixUtil(mat,dp, i, j-1, n, m, val);
                }
            }
        }
        for (int i =0; i<n; i++){
            for (int j =0; j<m; j++){
                if(grid[i][j]==1){
                    return -1;
                }
                
                else if (grid[i][j]>=2){
                    time = max(time, grid[i][j]);
                }
            }
        }
        
        return time-2;
    }
};
