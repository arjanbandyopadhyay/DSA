class Solution {
public:
    int call(vector<int>& days,int mid, int m, int k){
        int bouquets=0;
        int adj=0;
        for(int i=0;i<days.size();i++){
                if(days[i]<=mid){
                    adj++;
                }
                if(adj==k){
                   bouquets++;
                   adj=0;
                }
                else if(days[i] > mid){
                    adj=0;
                }
            }
        
        return bouquets;

    }
    int minDays(vector<int>& days, int m, int k) {
     int mini=INT_MAX;
     int maxi=INT_MIN;
     int ans=-1;
     for(int i=0;i<days.size();i++){
        mini=min(mini,days[i]);
        maxi=max(maxi,days[i]);
     }

    int i=mini,j=maxi;
    while(i<=j){
        int mid=(i+j)/2;
        int no=call(days,mid,m,k);
        if(no >= m){
           ans=mid;
           j=mid-1;
        }
        else if(no < m){
            i=mid+1;
        }
    }
    return ans;
        
    }
};