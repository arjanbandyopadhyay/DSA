class Solution {
public:
    int myAtoi(string s) {
     int sign=1;
     int i=0;
     long long ans=0;
     bool isCheck=true;
     while(i<s.size()){
        char temp=s[i];
        if(temp== ' ' && isCheck){
            i++;
        }
        else if(temp=='-' && isCheck){
            sign=-1;
            isCheck=false;
            i++;
        }
        else if(temp=='+' && isCheck){
            sign=1;
            isCheck=false;
            i++;
        }
        
        else{
            if(s[i]-'0'>=0 && s[i]-'0'<=9){
                if (ans > INT_MAX / 10 ||
       (ans == INT_MAX / 10 && s[i]-'0' > (sign == 1 ? 7 : 8))) {
        return sign == 1 ? INT_MAX : INT_MIN;
                    }
                ans=(s[i]-'0')+ans*10;
                 i++;
                 isCheck=false;
            }
            else{
                break;
            }
        }
       
     }
     return sign*ans;   
    }
};