class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int i=1;
        while(i<nums.size()){
         if(nums[i-1]>nums[i]){
            break;
         }
         i++;
        }
        return i-1;
    }
};