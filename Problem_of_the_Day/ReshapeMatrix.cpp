class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        if(r*c != row*col){
            return mat;
        }
        vector<vector<int>> result;
        vector<int> temp;
        
        int num=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(num==c){
                    num=0;
                    result.push_back(temp);
                    temp.clear();
                }
                temp.push_back(mat[i][j]);
                num++;
            }
        }
        result.push_back(temp);
        return result;
    }
};
