class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        for(int i=nums1.size()-1;i>=0;i--){
            if(nums1[i]%2!=0){
                return true;
            }
            else if(nums1[i]%2==0){
                if(i==0){
                return true;
            }
                continue;  
            }
        
        }
        return false;
    }
};