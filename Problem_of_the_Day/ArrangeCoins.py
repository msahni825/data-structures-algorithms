class Solution:
    def arrangeCoins(self, n: int) -> int:
        row = 1
        ans = 0
        while n>=0:
            n = n - row
            row = row + 1
        if n == 0:
            ans = row - 1
        else:
            ans = row - 2
        return ans
            
