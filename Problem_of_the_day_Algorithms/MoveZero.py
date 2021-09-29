class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        s = len(nums)
        lastzeroidx = 0
        for i in range(0,s):
            if nums[i] != 0:
                nums[lastzeroidx] = nums[i]
                lastzeroidx = lastzeroidx + 1
        for r in range(lastzeroidx,s):
            nums[r] = 0
        """
        Do not return anything, modify nums in-place instead.
        """
        
