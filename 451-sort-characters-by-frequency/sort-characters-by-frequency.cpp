class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        string ans="";
        for(auto it:s){
            m[it]++;
        }
        vector<pair<char,int>>vec;
        for(auto it:m){
            vec.push_back(it);
        }
         sort(vec.begin(), vec.end(),
             [](auto &a, auto &b) {
                 return a.second > b.second;
             });
        for(auto it:vec){
            for(int i=0;i<it.second;i++){
                ans+=it.first;
            }
        }
       
       return ans;   
    }
};