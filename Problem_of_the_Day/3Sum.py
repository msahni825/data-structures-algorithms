class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        results=[]
        nums=sorted(nums)
        for i, num in enumerate(nums):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            left_window, right_window = i + 1, len(nums) - 1
            while left_window < right_window:
                leftVal  = nums[left_window]
                rightVal  = nums[right_window]
                loopSum = num + leftVal + rightVal
                if loopSum == 0:
                    results.append([num, leftVal, rightVal])
                    while left_window < right_window and nums[left_window] == leftVal:
                        left_window += 1
                    while left_window < right_window and nums[right_window] == rightVal:
                        right_window -= 1
                elif loopSum < 0:
                    while left_window < right_window and nums[left_window] == leftVal:
                        left_window += 1
                else:
                    while left_window < right_window and nums[right_window] == rightVal:
                        right_window -= 1    
        return results
        
