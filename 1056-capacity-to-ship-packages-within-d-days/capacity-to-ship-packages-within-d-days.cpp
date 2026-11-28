class Solution {
public:
   void call(vector<int>& nums, int mid, int &taken){
    taken = 1;

    long long curr = 0;

    for(int i = 0; i < nums.size(); i++){
        if(curr + nums[i] <= mid){
            curr += nums[i];
        }
        else{
            taken++;
            curr = nums[i];
        }
    }
}
    int shipWithinDays(vector<int>& nums, int days) {
       int maxi=INT_MIN;
       long long sum=0;
       for(int i=0;i<nums.size();i++){
        maxi=max(nums[i],maxi);
        sum+=nums[i];
       }
       int i=maxi,j=sum;
       int ans=INT_MAX;
       while(i<=j){
        int mid=(i+j)/2;
        int taken=0;
        call(nums,mid,taken);
        if(taken <= days){
           ans=min(mid,ans);
           j=mid-1;
        }else if(taken > days){
            i=mid+1;
        }
    }
     return ans;   
        
    }
};