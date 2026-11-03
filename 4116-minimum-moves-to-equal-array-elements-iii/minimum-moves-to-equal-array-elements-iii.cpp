class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=nums[nums.size()-1];
        int count=0;
        for(int i=nums.size()-2;i>=0;i--){
            while(nums[i]!=ans){
                nums[i]+=1;
                count++;
            }
        }
   return count;
    }
};