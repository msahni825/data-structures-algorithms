class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        n = len(prices)
        for i in range(1,n):
            ans = ans + max(prices[i]-prices[i-1],0)
            print(ans)
        return ans
