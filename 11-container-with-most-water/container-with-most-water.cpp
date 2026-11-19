class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0,j=height.size() -1;
      long long ans=0;
      while(i<=j){
        int high=min(height[i],height[j]);
        int width=abs(i-j);
        long long ar=high*width;
        ans=max(ans,ar);
        if(height[i]<=height[j])i++;
        else j--;
      }
      return ans; 
    }
};