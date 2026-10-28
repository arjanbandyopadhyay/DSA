class Solution {
public:
   void dfs(int sr,int sc,vector<vector<bool>>&vis,vector<vector<int>>&ans,vector<vector<int>>& image,int color,int initial){
            int n=image.size();
            int m=image[0].size();
            if(sr < 0 || sc < 0 || sr >=n || sc >= m || image[sr][sc]!=initial ||
             vis[sr][sc]){
                return ;
            }
                ans[sr][sc]=color;
                vis[sr][sc]=true;
            dfs(sr-1,sc,vis,ans,image,color,initial);
            dfs(sr,sc+1,vis,ans,image,color,initial);
            dfs(sr+1,sc,vis,ans,image,color,initial);
            dfs(sr,sc-1,vis,ans,image,color,initial);
   }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialCol=image[sr][sc];
        vector<vector<int>>ans=image;
        int n=image.size();
        int m=image[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        dfs(sr,sc,vis,ans,image,color,initialCol);
        return ans;
    }
};