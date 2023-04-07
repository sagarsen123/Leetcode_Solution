class Solution {
public:
    int row,col;
    void dfs(bool f,int &ans,vector<vector<int>>&grid,int x,int y){
        if(f) ans++;
        grid[x][y]=0;
        int arr[4][2] = {
            {1,0},{-1,0},{0,1},{0,-1}
        };
        for(int i=0;i<4;i++){
            int r = x + arr[i][0];
            int c = y + arr[i][1];
            if(r<row && r>=0 && c<col && c>=0 && grid[r][c]){
                dfs(f,ans,grid,r,c);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
         row = grid.size();
         col = grid[0].size();
         int ans=0;
         for(int i=0;i<row;i++){
             for(int j=0;j<col;j++){
                 if((i*j==0 || i==row-1 || j==col-1) && grid[i][j])
                    dfs(false,ans,grid,i,j);
             }
         }
         
         for(int i=0;i<row;i++){
             for(int j=0;j<col;j++){
                 if(grid[i][j])
                    dfs(true,ans,grid,i,j);
             }
         }
         return ans;
    }
};
