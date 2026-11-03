class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxEle=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxEle=max(maxEle,nums[i]);
        }
        int step=0;
        for(int i=0;i<nums.size();i++){
            step+=maxEle-nums[i];
        }
        return step;
    }
};