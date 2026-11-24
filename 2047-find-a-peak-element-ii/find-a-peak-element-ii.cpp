class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
     for(int i=0;i<m;i++){
        int low=0,high=n-1;
        while(low<=high){
           int midRow=low+(high-low)/2; 
           int up = (midRow > 0) ? mat[midRow - 1][i] : -1;
                int down = (midRow < n - 1) ? mat[midRow + 1][i] : -1;

                if (up < mat[midRow][i] && down < mat[midRow][i]) {

                    int left =
                        (i > 0) ? mat[midRow][i - 1] : -1;
                    int right =
                        (i < m - 1) ? mat[midRow][i + 1] : -1;

                    if (left < mat[midRow][i] &&
                        right < mat[midRow][i]) {
                        return {midRow, i};
                    }
                }

                if (down > mat[midRow][i]) {
                    low = midRow + 1;
                } else {
                    high = midRow - 1;
                }
        }
     }
     return {0,0};
    }
};