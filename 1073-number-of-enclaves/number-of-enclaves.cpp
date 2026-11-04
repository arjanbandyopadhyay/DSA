class Solution {
public:
    void dfs(vector<vector<int>>& grid, vector<vector<bool>>&vis,int row, int col){
        int n=grid.size();
        int m=grid[0].size();
        if(row < 0 || col < 0 || row>=n || col>=m || vis[row][col] || grid[row][col]!=1 ){
            return;
        }
        vis[row][col]=true;
        dfs(grid,vis,row-1,col);
        dfs(grid,vis,row,col+1);
        dfs(grid,vis,row+1,col);
        dfs(grid,vis,row,col-1);
    }


    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                dfs(grid,vis,0,i);
            }
        }
        for(int i=1;i<n;i++){
            if(grid[i][m-1]==1){
                dfs(grid,vis,i,m-1);
            }
        }
        for(int i=m-2;i>=0;i--){
            if(grid[n-1][i]==1){
                dfs(grid,vis,n-1,i);
            }
        }
        for(int i=n-2;i>=1;i--){
            if(grid[i][0]==1){
                dfs(grid,vis,i,0);
            }
        }        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    count++;
                }
            }
        }
        return count;
    }
};