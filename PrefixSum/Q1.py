class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l = len(nums)
        result = []
        a = 1
        for n in nums:
            result.append(a)
            a*=n
        a = 1
        for j in reversed(range(l)):
            result[j]*=a
            a*=nums[j]
        return result
