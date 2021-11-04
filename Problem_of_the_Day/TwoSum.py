class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indexes = {}
        for i, n in enumerate(nums):
                difference = target-nums[i]
                if difference in nums and i != nums.index(difference):
                    return i, nums.index(target-n)
