class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
     int curr=1;
     vector<int>miss(arr.size(),-1);
     for(int i=0;i<arr.size();i++){
        miss[i]=arr[i]-curr;
        curr++;
     }
     int low=0,high=miss.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(miss[mid]<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low+k;
    }
};