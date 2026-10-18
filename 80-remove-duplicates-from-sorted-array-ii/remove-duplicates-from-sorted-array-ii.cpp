class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int temp=nums[0];
       int count=0;
       for(int i=0;i<nums.size();i++){
        if(temp==nums[i]){
            count++;
        }
        else{
            count=1;
            temp=nums[i];
        }
        if(count>2){
            nums[i]=INT_MAX;
        }
       }
       int i=nums.size()-1;
       while(i>=0){
        if(nums[i]==INT_MAX)
        nums.erase(nums.begin()+i);
        i--;
       }
        return nums.size();
        
    }
};