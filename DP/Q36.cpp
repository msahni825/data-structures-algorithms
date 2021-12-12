class Solution {
public:
    int8_t dp[201][10001]={[0 ... 200] = {[0 ... 10000] = -1}};
    
    bool subsetSum(vector<int>& nums, int sum, int i=0){
        if(sum==0){
            return true;
        }
        if(i>=size(nums) || sum<0)
            return false;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        return dp[i][sum]=subsetSum(nums, sum-nums[i],i+1) || subsetSum(nums,sum,i+1);
    }
    
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(begin(nums),end(nums),0);
        if(sum & 1)
            return false;
        return subsetSum(nums,sum/2);
    }
};
