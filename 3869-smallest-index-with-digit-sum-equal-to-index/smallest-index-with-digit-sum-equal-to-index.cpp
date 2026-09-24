class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int digitSum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;
            while(n!=0){
                int last =n%10;
                sum+=last;
                n=n/10;
            }
            if(sum==i){
                digitSum=min(digitSum,sum);
            }
        }
        return digitSum==INT_MAX ? -1:digitSum;
    }
};