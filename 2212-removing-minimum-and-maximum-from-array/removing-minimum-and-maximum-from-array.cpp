class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int maxi=INT_MIN,maxIdx=0,mini=INT_MAX,minIdx=0,ans;
       int n=nums.size();
       for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
        mini=min(mini,nums[i]);
       }
       for(int i=0;i<n;i++){
        if(maxi==nums[i]){
            maxIdx=i;
        }
        if(mini==nums[i]){
            minIdx=i;
        }
       }
       int ans1=max(maxIdx,minIdx)+1;
       int ans2=n-min(maxIdx,minIdx);
       if (maxIdx<n/2){
        maxIdx+=1;
       }
       else{
        maxIdx=n-maxIdx;
       }
       if(minIdx<n/2){
        minIdx+=1;
       }
       else{
        minIdx=n-minIdx;
       }
        ans=min(min(ans1,ans2),(maxIdx+minIdx));
        return ans;
       }
};