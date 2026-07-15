class Solution {
public:

bool isalpha(char ch){
         if((ch>='0' && ch<='9' )|| (tolower(ch)>='a' && tolower(ch)<='z')){
         return true;
         }else{
            return false;
         }
        }
    bool isPalindrome(string s) {
        int n = s.size();
        int i =0,j=n-1;
        
        
        while(i<j){
            if(!isalpha(s[i])){
                i++;
                continue;
            }if(!isalpha(s[j])){
                j--;
                continue;
            }
            
            if(tolower(s[i])!=tolower(s[j])){
                  return false;
            }
                i++;
                j--;
    }
    return true;
    }
};