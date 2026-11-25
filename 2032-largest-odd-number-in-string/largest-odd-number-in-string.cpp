class Solution {
public:
    string largestOddNumber(string num) {
      string odd="";
      int i=num.size()-1;
      while(i>=0){
        int digit=num[i]-'0';
        if(digit % 2 !=0)break;

        i--;
      }
      int j=0;
      while(j<i+1){
        odd+=num[j++];
      }
       return odd;
    }
};