class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //start from bottom left
        for(int i=0;i<matrix.size();i++){
            //add to top left
            for(int j=0;j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
