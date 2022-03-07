class Solution(object):
    def climbStairs(self, n):
        if n < 0:
            return 0
        elif n < 1:
            return 1
        else:
            i = 0
            prev = 0
            next = 1
            while(i < n):
                sum = prev + next
                prev = next
                next = sum
                i += 1
            return next

num = 6
sol = Solution()
print(sol.climbStairs(num))