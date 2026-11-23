class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int maxi=INT_MIN;
       for(auto it:nums)maxi=max(maxi,it);
       int i=1,j=maxi;
        int ans=INT_MAX;
       while(i<=j){
        long long sum=0;
        int mid=(i+j)/2;
        for(auto it:nums){
            int divi=ceil((double)it/mid);
            sum+=divi;
        }
        if(sum<=threshold){
            ans=min(ans,mid);
            j=mid-1;
        }
        else{
            i=mid+1;
        }
       }
     return ans;   
    }
};