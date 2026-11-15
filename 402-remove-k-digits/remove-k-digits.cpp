class Solution {
public:
    string removeKdigits(string num, int k) {
        deque<int>dq;
        for(int i=0;i<num.size();i++){
            while(!dq.empty() && k>0 && dq.back()>num[i]){
                k--;
                dq.pop_back();
            }
            dq.push_back(num[i]);
        }
        while(k>0){
            dq.pop_back();
            k--;
        }
         while(!dq.empty() && dq.front()=='0') dq.pop_front();

        string ans="";
        
        while(!dq.empty()){
            ans+=dq.front();
            dq.pop_front();
        }
        return ans.empty()? "0":ans;
        
    }
};