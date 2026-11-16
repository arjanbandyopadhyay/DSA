class Solution {
public:
    string digitSum(string s, int k) {
      string ans=s;
      while(ans.size()>k){
        int count=0;
        int sum=0;
        string temp="";
        for(int i=0;i<ans.size();i++){
            sum+=ans[i]-'0';
            count++;
            if(count==k){
                temp+=to_string(sum);
                sum=0;
                count=0;
            }
            else if(i==ans.size()-1){
                temp+=to_string(sum);
            }
        }
        ans=temp;
      }  
      return ans;
    }
};