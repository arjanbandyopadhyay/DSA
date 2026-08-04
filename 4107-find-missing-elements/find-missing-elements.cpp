class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for (int ele : nums) {
            mpp[ele]++;
        }

        vector<int> ans;
        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());

        for (int i = minVal; i <= maxVal; i++) {
            if (mpp.find(i) == mpp.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
