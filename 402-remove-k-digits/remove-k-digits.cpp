class Solution {
public:
    string removeKdigits(string num, int k) {
      deque<int>dq;
      dq.push_back(num[0]-'0');
      for(int i=1;i<num.size();i++){
        while(!dq.empty() && dq.back() > num[i]-'0' && k > 0){
            dq.pop_back();
            k--;
        }
        dq.push_back(num[i]-'0');
      }
      string ans="";
      while (!dq.empty() && k > 0){
        dq.pop_back();
        k--;
      }
      while(!dq.empty() && dq.front()==0){
        dq.pop_front();
      }
      while(!dq.empty()){
        int val=dq.front();
        ans+=val+'0';
        dq.pop_front();
      }
      return ans.empty() ? "0":ans;  
    }
};