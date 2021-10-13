class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size()-1;
        int i=0;
        //int mid=n/2;
        while(i<matrix.size() && n>=0){
            if(matrix[i][n]==target){
                  return true;
            }
            else if(matrix[i][n]<target){
                i++;
            }
            else{
                n--;
            }
        }
        return false;
    }
};
