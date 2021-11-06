class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        n = len(nums)
        x = 0
        for i in nums:
            x^=i;
        sb = x & (x-1)
        sb ^= x
        one = 0
        zero = 0
        for i in nums:
            if i & sb:
                one ^= i
            else:
                zero ^= i
        answer = []   
        answer.append(one)
        answer.append(zero)
        return answer
        
        
  
