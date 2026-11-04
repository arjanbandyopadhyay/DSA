class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
     queue<pair<int,int>>q;   
     int n=grid.size();
     int m=grid[0].size();
     vector<vector<bool>>vis(n,vector<bool>(m,false));
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 ||j==0 || i==n-1 || j==m-1){
                if(grid[i][j]==1){
                vis[i][j]=true;
                q.push({i,j});
                }
                
                
            }
        }
     }
     int dirRow[]={-1,0,1,0};
     int dirCol[]={0,1,0,-1};

     while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nrow = row + dirRow[i];
                int ncol = col + dirCol[i];

                if(nrow>=0 && nrow<n &&
                   ncol>=0 && ncol<m &&
                   !vis[nrow][ncol] &&
                   grid[nrow][ncol]==1)
                {
                    vis[nrow][ncol]=true;
                    q.push({nrow,ncol});
                }
            }
        }
    int count=0;
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