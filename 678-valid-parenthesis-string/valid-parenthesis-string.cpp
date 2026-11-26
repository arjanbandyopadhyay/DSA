class Solution {
public:
    bool checkValidString(string s) {
       stack<int>str;
       stack<int>brac;
       for(int i=0;i<s.size();i++){
         if(s[i]=='*'){
            str.push(i);
         }
         else if(s[i]=='('){
            brac.push(i);
         }
         else{
            if(!brac.empty()){
                brac.pop();
            }else if(!str.empty()){
                str.pop();
            }
            else{
                return false;
            }
         }
       }
       while(!brac.empty()){
        if(str.empty()) return false;

        else if(brac.top() <str.top()){
            str.pop();
            brac.pop();
        }else{
            return false;
        }
       }

       return brac.empty();

    }
};