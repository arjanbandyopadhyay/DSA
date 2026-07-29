class Solution {
public:
  void solve(int srt,int n,int k,vector<int>&ans,vector<vector<int>>&final){
    if(k==0){
        final.push_back(ans);
        return;
    }
    if(srt>n) return;
    ans.push_back(srt);
    solve(srt+1,n,k-1,ans,final);
    ans.pop_back();
    solve(srt+1,n,k,ans,final);
  }
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>>final;
   vector<int>ans; 
   solve(1,n,k,ans,final);
   return final;
    }
};