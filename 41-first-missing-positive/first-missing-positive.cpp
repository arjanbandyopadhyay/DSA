class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0 || nums[i]>n){
                nums[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            int val=abs(nums[i]);
            if(val>0 && val<=n){
                int idx=val-1;
                if(nums[idx]==0){
                    nums[idx]=-val;
                }
                else
                nums[idx]=-abs(nums[idx]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                return i+1;
            }
        }
        return n+1;
    }
};