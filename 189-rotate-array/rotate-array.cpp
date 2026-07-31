class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
       int srt=0,end=n-k-1;
       while(srt<=end){
        swap(nums[srt],nums[end]);
        srt++;end--;
       }
       int srt1=n-k,end1=n-1;
       while(srt1<=end1){
        swap(nums[srt1],nums[end1]);
        srt1++;end1--;
       }
       int srt2=0,end2=n-1;
       while(srt2<=end2){
        swap(nums[srt2],nums[end2]);
        srt2++;end2--;
       }
        
    }
};