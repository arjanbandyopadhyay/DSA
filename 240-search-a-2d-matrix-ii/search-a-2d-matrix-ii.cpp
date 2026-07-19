class Solution {
public:
  
  
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size() ,m=matrix[0].size();
        int st=0 ,end=m-1;
        while(st<n && end>=0){
            if(matrix[st][end]==target){
               return true;
               }
            else if(matrix[st][end]>target){
                end--;
            }else{
                st++;
            }
    }
    
        
        return false;
    }
};