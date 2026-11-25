class Solution {
public:
    string multiply(string num1, string num2) {
     if(num1=="0" || num2=="0")return "0";
     int carry=0;
     int totalSize=num1.size()+num2.size();
    vector<int>ans(totalSize,0);
    int in=ans.size();
     for(int i=num1.size()-1;i>=0;i--){
        int digit=num1[i]-'0';
        for(int j=num2.size()-1;j>=0;j--){
           int last=num2[j]-'0';
           int pro=last*digit;
           int p1=i+j;
           int p2=i+j+1;
          int sum = pro + ans[p2];
          ans[p2] = sum % 10;
          ans[p1] += sum / 10;
        }
     }

     string res;
     int i=0;
     while(ans[i]==0)i++;

    while(i<ans.size()){
        res.push_back(ans[i]+'0');
        i++;
     }
        return res;
    }
};