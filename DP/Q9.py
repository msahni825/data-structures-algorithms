class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        if n==1:
            return True
        reach = 0
        for i in range(0,n-1):
            reach = max(reach,i+nums[i])
            print(reach)
            if(reach==i):
                return False
            else:
                if reach>=n:
                    return True
        return True
