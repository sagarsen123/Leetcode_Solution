class Solution {
public:
    int row,col;
    int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
    void dfs(int i,int j,vector<vector<int>>& grid){
        if(grid[i][j]) return;
        grid[i][j]=1;
        for(int p=0;p<4;p++){
            int x = i +dir[p][0];
            int y = j +dir[p][1];
            if(x>=0 && x<row && y>=0 && y<col) dfs(x,y,grid);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        row  = grid.size();
        col = grid[0].size();
      
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i*j == 0 || i==row-1 || j==col-1){
                    if(grid[i][j]==0) dfs(i,j,grid);
                }
            }
        }
        int ans = 0;
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                    if(grid[i][j]==0){ ans++;dfs(i,j,grid);}

            }
        }
        return ans;
    }
}; 
