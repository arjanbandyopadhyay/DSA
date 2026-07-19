class Solution {
public:
bool search(vector<vector<int>>& matrix, int target,int row){
    int n=matrix[0].size();
    int st=0 , end=n-1;
    while(st<=end){
        int mid= st+(end-st)/2;
    
    if(matrix[row][mid]==target){
        return true;
    }else if(target>matrix[row][mid]){
        st = mid+1;
    }else{
        end=mid-1;
    }
}
return false;
}

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n=matrix.size() ,m=matrix[0].size();
       int srtrow=0 ,endrow=n-1;
       while(srtrow<=endrow){
        int midrow=srtrow+(endrow-srtrow)/2;
        if(matrix[midrow][0]<=target && target<=matrix[midrow][m-1]){
            return search(matrix,target,midrow);
        }else if(target>=matrix[midrow][m-1]){
            srtrow=midrow+1;
        }else{
             endrow=midrow-1;
        }
       }
       return false;
       
       
        
    }
};