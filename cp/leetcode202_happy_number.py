class Solution(object):
    def isHappy(self, n):
        d = dict()
        while n != 1:
            if n in d.keys():
                break
            d[n] = 1
            sum = 0
            while n != 0:
                sum = sum + (n%10) ** 2
                n //= 10
            n = sum

        if n == 1:
            return True
        return False
        

sol = Solution()
print(sol.isHappy(2))
