class Solution {
public:
    void dfs(vector<vector<char>>& board,vector<vector<bool>>&vis,int row, int col){
        int n=board.size();
        int m=board[0].size();
        if(row<0 || col<0 || row>=n || col>=m || board[row][col]!='O' ||
        vis[row][col]){
            return ;
        }
        vis[row][col]=true;
        dfs(board, vis, row-1, col);
        dfs(board, vis, row, col+1);
        dfs(board, vis, row+1, col);
        dfs(board, vis, row, col-1);
    }

    void solve(vector<vector<char>>& board) {
       int n=board.size();
       int m=board[0].size();
       vector<vector<bool>>vis(n,vector<bool>(m,false));
       for(int i=0;i<m;i++){
        if(board[0][i]=='O' && !vis[0][i]){
            dfs(board,vis,0,i);
        }
       }
       for(int i=1;i<n;i++){
        if(board[i][m-1]=='O' && !vis[i][m-1]){
            dfs(board,vis,i,m-1);
        }
       }
       for(int i=m-2;i>=0;i--){
        if(board[n-1][i]=='O' && !vis[n-1][i]){
            dfs(board,vis,n-1,i);
        }
       }
       for(int i=n-2;i>=0;i--){
        if(board[i][0]=='O' && !vis[i][0]){
            dfs(board,vis,i,0);
        }
       }

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='O' && !vis[i][j]){
                board[i][j]='X';
            }
        }
       } 
    }
};