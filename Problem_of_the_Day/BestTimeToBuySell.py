class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        buy_price = 99999
        sell_price = -99999
        profit = 0
        if n == 0:
            return 0
        for i in range(0,n):
            curr_price = prices[i]
            if curr_price < buy_price and i<=n-2:
                buy_price = curr_price
                sell_price = -99999
            elif curr_price > sell_price: 
                sell_price = curr_price
                profit = max(profit,(sell_price-buy_price))
        return profit
