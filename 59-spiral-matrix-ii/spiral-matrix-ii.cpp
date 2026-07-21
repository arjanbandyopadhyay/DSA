class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int srow=0,erow=n-1,scol=0,ecol=n-1;
        vector<vector<int>>arr(n,vector<int>(n));
        int val=1;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                arr[srow][i]=val++;
            }
            for(int i = srow+1;i<=erow;i++){
                arr[i][ecol]=val++;
            }
            if(srow<erow && scol<ecol){
            for(int i=ecol-1;i>=scol;i--){
                arr[erow][i]=val++;
            }
            for(int i= erow-1;i>=srow+1;i--){
                arr[i][scol]=val++;
            }
             }
             srow++;erow--;
            scol++;ecol--;
        }
        return arr;
        }

    
};