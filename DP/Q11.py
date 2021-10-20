class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        t = nums[0]
        curr_sum = 0
        n = len(nums)
        if(n==0):
            return nums[0]
        
        for i in range(0,n):
            curr_sum = curr_sum + nums[i]
            t = max(t,curr_sum)
            if(curr_sum<0):
                curr_sum=0
        return t    
                  
