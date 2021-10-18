class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        vector<int> dp(m+1,0);
        for(auto x:nums){
            dp[x]+=x;
        }
        for(int i=2;i<=m;i++){
            dp[i]=max(dp[i-2]+dp[i],dp[i-1]);
        }
        return *max_element(dp.begin(),dp.end());
    }
};
