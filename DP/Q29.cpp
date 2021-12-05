class Solution {
public:
    int integerBreak(int n) {
        if(n==2){
            return 1;
        }
        if(n==3){
            return 2;
        }
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        for(int i=4;i<=n;i++){
            dp[i]=0;
            for(int j=i-1;j>=i/2;j--){
                dp[i]=max(dp[i],dp[j]*dp[i-j]);
            }
        }
        return dp[n];
    }
};
