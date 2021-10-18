class Solution:
    def rob(self, nums: List[int]) -> int:
        n=len(nums)
        if n==1:
            return nums[0]
        if n==2:
            return max(nums[0],nums[1])
        dp = [0]*n
        # result = 0
        dp[0]=nums[0]
        dp[1]=max(nums[0],nums[1])
        for j in range(2,n):
            dp[j]=max(nums[j]+dp[j-2],dp[j-1])
        return dp[n-1]    
