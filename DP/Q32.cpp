class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int len=coins.size();
        // if(len==1 && amount!=coins[0]){
        //     return -1;
        // }
        int dp[len+1][amount+1];
        for(int i=0;i<len+1;i++){
            for(int j=0;j<amount+1;j++){
                if(i==0){
                    dp[i][j]=INT_MAX-1;
                }
                if(j==0){
                    dp[i][j]=0;
                }
                if(i==1){
                    if(j%coins[0]==0){
                        dp[i][j]=j/coins[0];
                    }
                    else{
                        dp[i][j]=INT_MAX-1;
                    }
                }
            }
        }
        for(int i=2;i<len+1;i++){
            for(int j=1;j<amount+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[len][amount]!=INT_MAX-1){
            return dp[len][amount];
        }
        return -1;
    }
};
