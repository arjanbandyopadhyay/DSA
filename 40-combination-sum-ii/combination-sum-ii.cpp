class Solution {
public:
    void solve(vector<int>& candidates, int i, int target, vector<int>& ans, vector<vector<int>>& final) {
        if(target == 0) {
            final.push_back(ans);
            return;
        }
        for(int j = i; j < candidates.size(); j++) {
            
            if(j > i && candidates[j] == candidates[j-1]) continue;

            if(candidates[j] > target) break; 

            ans.push_back(candidates[j]);
            solve(candidates, j+1, target - candidates[j], ans, final);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> final;
        vector<int> ans;
        solve(candidates, 0, target, ans, final);
        return final;
    }
};
