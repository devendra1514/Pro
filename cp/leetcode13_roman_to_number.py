class Solution(object):
    def romanToInt(self, s):
        def convert(ch):
            if ch == 'I' or ch == 'i':
                return 1
            elif ch == 'V' or ch == 'v':
                return 5
            elif ch == 'X' or ch == 'x':
                return 10
            elif ch == 'L' or ch == 'l':
                return 50
            elif ch == 'C' or ch == 'c':
                return 100
            elif ch == 'D' or ch == 'd':
                return 500
            elif ch == 'M' or ch == 'm':
                return 1000

        i = len(s)-1
        sum = convert(s[i])
        while i > 0:
            if convert(s[i]) <= convert(s[i-1]):
                sum += convert(s[i-1])
            else:
                sum -= convert(s[i-1])
            i -= 1
        return sum


sol = Solution()
print(sol.romanToInt(input()))
