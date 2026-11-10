class Solution {
public:
    int reverse(int x) {
       long long number=llabs((long long)x);
       string ans="";
       while(number!=0){
        ans+=(number%10)+'0';
        number=number/10;
       }
       long long rev=ans.empty()? 0:stoll(ans);
       if( x < 0){
        rev=-rev;
       }
     if(rev > INT_MAX || rev < INT_MIN)return 0; 

       return (int)rev;
    }
};