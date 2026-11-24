class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int i=0,j=arr.size()-1;
      int n=arr.size();
      while(i<=j){
        int mid=i+(j-i)/2;
        int midMiss=arr[mid]-(mid+1);
        if(midMiss < k){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
      }
      return i+k;
    }
};