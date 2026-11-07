class Solution {
public:
    bool dfs(int src,vector<vector<int>>& graph,vector<bool>&vis,vector<bool>&pathVis,
    vector<bool>&check){
        vis[src]=true;
        pathVis[src]=true;
        for(auto it:graph[src]){
            if(!vis[it]){
                if(dfs(it,graph,vis,pathVis,check)){
                    return true;
                }  
            }
            else if(pathVis[it]){
                    return true;
                }
        }
        check[src]=true;
        pathVis[src]=false;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int n=graph.size();
       int m=graph[0].size();
       vector<bool>vis(n,false);
       vector<bool>pathVis(n,false);
       vector<bool>check(n,false);
       vector<int>ans;
       for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,graph,vis,pathVis,check);
        }
       }
       for(int i=0;i<n;i++){
        if(check[i]){
            ans.push_back(i);
        }
       }
    return ans;
    }
};