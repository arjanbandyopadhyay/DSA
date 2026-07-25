class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(int ele:nums){
            if(s.find(ele)!=s.end()){
            return ele;
                
            }s.insert(ele);
        }
        return -1;
    }
};