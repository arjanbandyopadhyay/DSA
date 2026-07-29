class Solution {
public:
set<vector<int>>s;
void sums(vector<int>& candidates,int i,vector<int>&ans,int target,vector<vector<int>>&final){
    if(i==candidates.size() || target<0){
        return;
    }

    if(target==0){
        if(s.find(ans)==s.end()){
        final.push_back(ans);
        s.insert(ans);
        }
        return;
        }
    
        
            ans.push_back(candidates[i]);
        sums(candidates,i+1,ans,target-candidates[i],final);
        sums(candidates,i,ans,target-candidates[i],final);
        ans.pop_back();
        sums(candidates,i+1,ans,target,final);
         
        
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int>ans;
       vector<vector<int>>final;
       sums(candidates,0,ans,target,final);
       return final; 
    }
};