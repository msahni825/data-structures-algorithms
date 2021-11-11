class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        result = 0
        sumval = 0
        for i in nums:
            sumval = sumval+i 
            result = min(result,sumval)
            
        return -result+1    
