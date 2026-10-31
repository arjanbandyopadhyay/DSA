class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxbn=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxbn=max(maxbn,piles[i]);
        }
        long long i=1,j=maxbn;
        int ans=INT_MAX;
        while(i<=j){
            int mid=i+(j-i)/2;
            long long hours=0;
            for(int i=0;i<piles.size();i++){
                hours += (piles[i] + mid - 1) / mid;
            }
                if(hours<=h){
                    ans=min(ans,mid);
                    j=mid-1;
                    hours=0;
                }
                else{
                    i=mid+1;
                    hours=0;
                }
                
        }
            
        return ans;
    }
};