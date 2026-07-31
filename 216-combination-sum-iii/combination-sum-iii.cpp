class Solution {
public:
void solve(int i,int k,int n,vector<int>&ans,vector<vector<int>>&final){
    if(n==0 && ans.size()==k){
        final.push_back(ans);
        return;
    }
    if(n < 0 || ans.size() > k) return;
    for(int j=i;j<=9;j++){
        ans.push_back(j);
       solve(j+1,k,n-j,ans,final);
       ans.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int>ans;
       vector<vector<int>>final;
       solve(1,k,n,ans,final);
       return final; 

    }
};