class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int result=INT_MAX;
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n));
        dp[0]=matrix[0];
        
        for(int row=1;row<n;row++){
            for(int col=0;col<n;col++){
                int minimum=dp[row-1][col];
                cout<<"min: "<<minimum<<"\n";
                if(col>0){
                    minimum=min(dp[row-1][col-1],minimum);
                }
                if(col<n-1){
                    minimum=min(minimum,dp[row-1][col+1]);
                }
                cout<<"------";
                dp[row][col]=minimum+matrix[row][col];
                cout<<"dp[row][col]: "<<dp[row][col]<<"\n";
            }
        }
        for(int i=0;i<n;i++){
            result=min(dp[n-1][i],result);
        }
        return result;
    }
};
