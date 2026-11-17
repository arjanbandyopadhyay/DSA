class Solution {
public:
    int trap(vector<int>& height) {
       int l=0;
       int r=height.size()-1;
       int leftMax=0;
       int rightMax=0;
       int water=0;
       while(l<=r){
        if(height[l]<=height[r]){
            if(leftMax>height[l]){
                water+=leftMax-height[l];
            }else{
                leftMax=height[l];
            }
            l++;
        }
          else {
            if(rightMax > height[r]){
                water+=rightMax-height[r];
            }else{
                rightMax=height[r];
            }
            r--;
          }
       }
       return water;
             
    }
};