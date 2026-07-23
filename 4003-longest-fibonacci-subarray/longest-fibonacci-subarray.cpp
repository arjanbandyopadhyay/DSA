class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int count=2;
        if(n==1 ||n==2){
            return n;
        }
        int longest=2;
        for(int i =2;i<n;i++){
            if(nums[i]==nums[i-2]+nums[i-1]){
                count++;
                longest = max(longest, count);
            } else {
                count = 2;
            }
        }
        
            
        
        return longest;
    }
};