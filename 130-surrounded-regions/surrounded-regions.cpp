class Solution {
public:
   void dfs(vector<vector<char>>& board,vector<vector<bool>>&vis,int row,int col){
    int n=board.size();
    int m=board[0].size();
    if(row < 0  || row>=n || col < 0 || col>=m || vis[row][col]  ||
    board[row][col]=='X'){
        return ;
    }
    vis[row][col]=true;
    dfs(board,vis,row-1,col);
    dfs(board,vis,row,col+1);
    dfs(board,vis,row+1,col);
    dfs(board,vis,row,col-1);
   }
    void solve(vector<vector<char>>& board) {
       int n=board.size();
       int m=board[0].size();
       vector<vector<bool>>vis(n,vector<bool>(m,false));
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==n-1 || j==0 || j==m-1 ){
                if(!vis[i][j])
                dfs(board,vis,i,j);
            }
        }
       }

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && board[i][j]=='O'){
                board[i][j]='X';
            }
        }
       }


    }
};