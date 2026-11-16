class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long rev=0;
        while(temp!=0){
            int last=temp%10;
            rev=last+(10*rev);
            temp=temp/10;
        }
        if(x<0){
            rev=-rev;
        }
        return rev==x? true:false;
        
        
    }
};