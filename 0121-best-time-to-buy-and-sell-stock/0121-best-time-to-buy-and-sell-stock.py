
        # max_value = max(prices)
        # min_value = min(prices)
        # max_index = prices.index(max(prices)) # can also use max_value
        # min_index = prices.index(min(prices)) # can also use min_value
        
        # if prices[0] == max_value and prices[-1] == min_value:
        #     return 0
        
        # sub = prices[min_index +1:]  # array after the min element hits.
        
        # if sub:
        #     sub_max_value = max(sub)
        #     sub_max_index = sub.index(max(sub))
        #     sub_min_index = sub.index(min(sub))

        # else: 
        #     return 2

        # return sub_max_value - min_value
            
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = prices[0]
        max_profit = 0

        for price in prices:

            if price < min_price:
                min_price = price

            current_profit = price - min_price

            if current_profit > max_profit:
                max_profit = current_profit
            
        return max_profit
