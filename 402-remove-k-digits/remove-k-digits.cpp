class Solution {
public:
    string removeKdigits(string num, int k) {
      stack<int>s;
      int remove=k;
      for(int i=0;i<num.size();i++){
        while(!s.empty() && s.top()>num[i] && remove > 0){
            s.pop();
            remove--;
        }
        s.push(num[i]);
      }
      while (remove > 0) {
            s.pop();
            remove--;
        }
      string ans="";
      while(!s.empty()){
        ans+=s.top();
        s.pop();
      } 
      reverse(ans.begin(),ans.end());
      int i=0;
       while (i < ans.size() && ans[i] == '0') {
            i++;
        }
            ans=ans.substr(i);
        
        
      return ans.empty() ? "0" : ans; 
    }
};