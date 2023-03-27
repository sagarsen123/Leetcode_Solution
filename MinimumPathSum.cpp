class Solution {
public:
 

    int minPathSum(vector<vector<int>>& grid) {
      int n = grid.size(), m = grid[n - 1].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int curr = INT_MAX;
                if(i - 1 >= 0)
                    curr = min(curr, grid[i - 1][j]);
                if(j - 1 >= 0)
                    curr = min(curr, grid[i][j - 1]);
                if(curr == INT_MAX)
                    curr = 0;
                grid[i][j] += curr;
            }
        }
        return grid[n - 1][m - 1];
    }
};
