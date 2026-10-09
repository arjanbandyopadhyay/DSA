class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>rows;
        vector<int>col;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    col.push_back(j);
                }
            }
        }
        int i=0,j=0;
        while(i<rows.size() && j<col.size()){
            for(int c=0;c<m;c++){
                matrix[rows[i]][c]=0;
            }
            for(int r=0;r<n;r++){
                matrix[r][col[j]]=0;
            }
            i++;
            j++;
        }

    }
};