class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n,0));
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int val=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                result[top][i]=val;
                val++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                result[i][right]=val;
                val++;
            }
            right--;
            for(int i=right;i>=left;i--){
                result[bottom][i]=val;
                val++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                result[i][left]=val;
                val++;
            }
            left++;
        }
        return result;
    }
};
