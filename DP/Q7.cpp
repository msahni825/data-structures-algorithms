class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        if(n==3){
            return max({nums[0],nums[1],nums[2]});
        }
        dp[1]=nums[1];
        dp[2]=max(nums[2],nums[1]);
        for(int i=3;i<n;i++){
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
        nums[1]=max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++){
            nums[i]=max(nums[i-1],nums[i]+nums[i-2]);
        }
        return max(nums[n-2],dp[n-1]);
    }
};
