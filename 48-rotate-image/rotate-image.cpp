class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
      }
      int size = m - 1;
        for(int i = 0; i < n; i++) {
            int left = 0;
            while(left < size - left) {
                swap(matrix[i][left], matrix[i][size - left]);
                left++;
            }
        }
    }
};