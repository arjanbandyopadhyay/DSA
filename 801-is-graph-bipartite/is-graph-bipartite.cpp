class Solution {
public:
    bool dfs( vector<int>&colour,vector<vector<int>>&graph, int src,int col){
        colour[src]=col;
        for(auto it:graph[src]){
            if(colour[it]==-1){
               if(!dfs(colour,graph,it,!col))
               return false;
            }
            else if(colour[it]==col){
                return false;
            }
        }
        return true;

    }
    bool isBipartite(vector<vector<int>>& graph) {
       int n=graph.size();
       vector<int>colour(n,-1);
       for(int i=0;i<graph.size();i++){
        if(colour[i]==-1){
            if(!dfs(colour,graph,i,0)){
                return false;
            }
        }
       }
       return true;
    }
};