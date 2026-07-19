class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int final =0, minVal=INT_MAX;
       for(int i =0;i<prices.size();i++){
          
            minVal=min(prices[i],minVal);
             final=max(final, prices[i]-minVal);
        
    }
    return final;  
  
    }
};