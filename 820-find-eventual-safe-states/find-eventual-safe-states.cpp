class Solution {
public:
    bool dfs(int src,vector<vector<int>>& graph,vector<bool>&vis,vector<bool>&pathVis,
    vector<int>&check){
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
        check[src]=1;
        pathVis[src]=false;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int n=graph.size();
       int m=graph[0].size();
       vector<bool>vis(n,false);
       vector<bool>pathVis(n,false);
       vector<int>check(n,0);
       vector<int>ans;
       for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,graph,vis,pathVis,check);
        }
       }
       for(int i=0;i<n;i++){
        if(check[i]==1){
            ans.push_back(i);
        }
       }
    return ans;
    }
};