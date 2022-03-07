class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        # size = len(prices)
        # if size <= 1:
        #     return 0
        # else:
        #     min_price = prices[0]
        #     max_profit = 0
        #     store_profit = []
        #     for i in range(size):
        #         if prices[i] <= min_price:
        #             min_price = prices[i]
        #         else:
        #             max_profit = prices[i]
        #             for j in range(i, size):
        #                 if prices[j] >= max_profit:
        #                     max_profit = prices[j]
        #             store_profit.append(max_profit - min_price)

        # try:
        #     return max(store_profit)
        # except:
        #     return 0

        minprice = float('inf')
        maxprofit = 0
        for price in prices:
	        if price < minprice:
		        minprice = price
	        if price - minprice > maxprofit:
		        maxprofit = price - minprice
        return maxprofit
        

prices = [2,1,2,1,0,1,2]
prices = [7,1,5,0,6,4]
sol = Solution()
print(sol.maxProfit(prices))