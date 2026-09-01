class Solution {
public:
    int findMin(vector<int>& nums) {
        int srt=0,end=nums.size()-1;
        while(srt<end){
            int mid=srt+(end-srt)/2;
            if(nums[mid]>nums[end]){
                srt=mid+1;
                }
                else{
                    end=mid;
                }
         }
          return nums[srt];
    }
};