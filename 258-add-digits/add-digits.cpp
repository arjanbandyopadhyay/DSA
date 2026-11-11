class Solution {
public:
    int addDigits(int num) {
      long long no=num;
      long long sum=0;
      while(no!=0){
        long long temp=no%10;
        sum+=temp;
        no=no/10;
        if(no==0 && sum >=10){
            no=sum;
            sum=0;
        }
        else if(no==0 && sum < 10){
            break;
        } 
      }
   return sum;
    }
};