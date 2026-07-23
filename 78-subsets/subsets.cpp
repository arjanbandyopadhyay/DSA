class Solution {
public:

void subsets(vector<int>& nums,vector<int>&ans,int i,vector<vector<int>> &sub){
          if(i==nums.size()){
            sub.push_back({ans});
            return ;
          }
          ans.push_back(nums[i]);
          subsets(nums,ans,i+1,sub);
          ans.pop_back();
          subsets(nums,ans,i+1,sub);
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>sub;
        vector<int>ans;
        subsets(nums,ans,0,sub);
        
        return sub;
    }
};