class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
      int i=0;
      int leastDiff=INT_MAX;
      int ans=nums[0]+nums[1]+nums[2];
      for(int i=0;i<nums.size()-2;i++){
        int j=i+1,k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            int diff=abs(sum-target);
            int preDiff=abs(ans-target);
            if(diff<preDiff){
                ans=sum;
            }
            if(sum<target)j++;
            else if(sum>target)k--;
            else{
                return target;
            }
            
        }
              
      }
    return ans;
  }
};