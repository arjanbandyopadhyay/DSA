class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
     stack<int>s;
     s.push(nums[0]);
     for(int i=1;i<nums.size();i++){
        bool destroy=false;
        while(!s.empty() && s.top() > 0 && nums[i] < 0 ){
            if(abs(s.top()) < abs(nums[i])){
                s.pop();
            }
            else if(abs(s.top())==abs(nums[i])){
                s.pop();
                destroy=true;
                break;
            }else{
                destroy=true;
                break;
            }  
        }
        if(!destroy){
            s.push(nums[i]);
        }
     }
     int n=s.size();
     vector<int>ans(n,0);
     int i=n-1;
     while(!s.empty() && i>=0){
        ans[i]=s.top();
        i--;
        s.pop();
     }
     return ans;
       
    }
};