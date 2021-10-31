class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int ans=0;
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        int dp[r][c];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        if(obstacleGrid[0][0]==1){
            return 0;
        }
        //1: obstacle
        //0: path possible
        for(int j=1;j<c;j++){
           if(obstacleGrid[0][j]==1){
             break;
            }
            else{
                 dp[0][j]=dp[0][j-1];
            }  
        } 
        for(int i=1;i<r;i++){
            if(obstacleGrid[i][0]==1){
                 break;
            }
            else{
                 dp[i][0]=dp[i-1][0];
            }
        }
        //top-bottom DP approach         
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[r-1][c-1];
    }
};
