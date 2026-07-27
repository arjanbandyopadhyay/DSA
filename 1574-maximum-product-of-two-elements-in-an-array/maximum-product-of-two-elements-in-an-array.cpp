class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int first=0,second=0;
        for(int val:nums){
            if(val>first){
               second=first;
                first=val;
            }
            else if(val>second){
                second=val;
            }
       
    }
    return (first-1)*(second-1);
    }
};