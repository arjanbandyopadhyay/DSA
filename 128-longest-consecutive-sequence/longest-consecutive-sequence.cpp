class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());

        int len = 1;
        int curr = nums[0];
        int count = 1; 

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == curr) {
                continue; 
            }
            if(curr + 1 == nums[i]) {
                count++;          
                curr = nums[i];
            } else {
                count = 1;      
                curr = nums[i];
            }
            len = max(len, count);
        }
        return len;
    }
};
