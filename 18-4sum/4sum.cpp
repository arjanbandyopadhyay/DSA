class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      vector<vector<int>>ans;
      sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
        if(i > 0  && nums[i-1]==nums[i] ){
            continue;
        }
        for(int j=i+1;j<nums.size();j++){
            if(j > i+1  && nums[j-1]==nums[j]){
                continue;
            } 
            int k=j+1,n=nums.size()-1;
            while(k<n){
                if(target==( long long )nums[i]+nums[j]+nums[k]+nums[n]){
                    ans.push_back({nums[i],nums[j],nums[k],nums[n]});
                    k++;
                    n--;
                     while(k < n && nums[k] == nums[k - 1]) k++;
                    while(k < n && nums[n] == nums[n + 1]) n--;
                }
                else if(target >( long long )nums[i]+nums[j]+nums[k]+nums[n]){
                    k++;
                }
                else{
                    n--;
                }
            }
        }
      }
      return ans;  
    }
};