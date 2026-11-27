class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
     int five=0;
     int ten=0;
     int tw=0;
     for(int i=0;i<bills.size();i++){
        if(bills[i]==5)five++;
        else if(bills[i]==10){
            if(five > 0){
            ten++;
            five--;
            }else{
                return false;
            }
        }
        else if(bills[i]==20){
            if(ten > 0 && five > 0){
                ten--;
                five--;
                tw++;
            }else if( five > 2){
                five-=3;
                tw++;
            }else{
                return false;
            }
        }
     }
     return true;

    }
};