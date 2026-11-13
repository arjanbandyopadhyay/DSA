class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     vector<int>fre(nums.size()+1,0);
      for(int i=0;i<nums.size();i++){
        if(nums[i]>0 && nums[i]<=nums.size()){
            fre[nums[i]-1]++;
        }
      }
      for(int i=0;i<fre.size();i++){
        if(fre[i]==0){
            return i+1;
        }
      }
      return 0; 
    }
};