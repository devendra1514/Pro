class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        if (len(s) == 0):
            return 0
        else:
            num = 0
            temp_s = ''
            i = 0
            sign = ''
            while i < len(s):
                if s[i] == " ":
                    pass
                else:
                    break
                i += 1
            if i < len(s):
                if s[i] == '-':
                    sign = '-'
                    i += 1
                elif s[i] == '+':
                    sign = '+'
                    i += 1
            else:
                return 0
            
            while i < len(s):
                temp_s += s[i]
                i += 1
            for ch in temp_s:
                if '0' <= ch <= '9':
                    num = num*10 + int(ch)
                else:
                    break
            if sign == '-':
                num = -num
            if num <= -2**31:
                return -2**31
            elif num >= 2**31-1:
                return 2**31-1
            else:
                return num


num = " -"
sol = Solution()
print(sol.myAtoi(num))