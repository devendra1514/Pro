class Solution(object):
    def reverse(self,x):
        if x == 0:
            return 0
        elif x >= -(2**31) and x <= (2**31):
            if x > 0:
                if int(str(x)[::-1]) > 2**31:
                    return 0
                return int(int(str(x)[::-1]))
            else:
                if int(str(-x)[::-1]) > 2**31:
                    return 0
                return -int(int(str(-x)[::-1]))
        else:
            return 0


sol = Solution()
x = int(input())
print(sol.reverse(x))
print(-(2 ** 31))