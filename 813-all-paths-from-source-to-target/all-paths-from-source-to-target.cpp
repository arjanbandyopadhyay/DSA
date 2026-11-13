class Solution {
public:
    void dfs(vector<vector<int>>&ans,vector<vector<int>>& graph,int src, vector<int>&temp){
        int target=graph.size()-1;
        temp.push_back(src);
        if(src==target){
            ans.push_back(temp);
        }
        else{
            for(auto it:graph[src]){
                dfs(ans,graph,it,temp);
            }
        }

        temp.pop_back();

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      int n=graph.size();
      
      vector<vector<int>>ans;
      vector<int>temp;
     dfs(ans,graph,0,temp);
          
      return ans;   
    }
};