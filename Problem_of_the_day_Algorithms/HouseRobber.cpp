class Solution {
public:
    int rob(vector<int>& nums) {
        //1 2 3 1
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int> dp(n);
        //bottom-up
        // for(int i=0;i<n;i+=2){
        //     sum1+=nums[i];
        // }
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int j=2;j<n;j++){
            //sum2+=nums[j]; 
            dp[j]=max(nums[j]+dp[j-2],dp[j-1]);
        }
        // int ans;
        // ans=max(sum1,sum2);
        return dp[n-1];
    }
};
