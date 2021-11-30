class Solution {
public:
    int mod=(1e9)+7;
int numRollsToTarget(int d, int f, int target) {
  if(d*f<target || target<d){
              return 0;
          }
          else if(d==1){
              return 1;
          }
          vector<vector<long long>> dp(d+1,vector<long long>(target+1,0));
          for(int i=1;i<=min(target,f);i++){
              dp[1][i]=1;
          }
          for(int i=2;i<=d;i++){
              for(int j=1;j<=target;j++){
                  for(int k=1;k<=f && j-k>=1;k++){
                      dp[i][j]=(dp[i][j]+dp[i-1][j-k])%mod;
                  }
              }
          }
        return (int) dp[d][target]%mod;
}
};
