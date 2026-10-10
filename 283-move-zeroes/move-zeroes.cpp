class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int count=0;
      for(int i=0;i<nums.size();){
        if(nums[i]==0){
            nums.erase(nums.begin()+i);
            count++;
        }else{
            i++;
        }
      }
        while(count>0){
            nums.push_back(0);
            count--;
        }

        
    }
};