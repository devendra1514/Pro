class Solution(object):
    def isPalindrome(self, x):
        if x < 0:
            return False
        else:
            n = x
            ans = 0
            while n != 0:
                r = n % 10
                ans = ans*10 + r
                n = n // 10
            if x == ans:
                return True
            return False

sol = Solution()
print(sol.isPalindrome(int(input())))
