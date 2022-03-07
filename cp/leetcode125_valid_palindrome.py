class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        size = len(s)
        if size < 1:
            pass
        else:
            i = 0
            temp = ''
            while i < size:
                if 'a' <= s[i] <= 'z':
                    temp += s[i]
                elif 'A' <= s[i] <= 'Z':
                    temp += chr(ord(s[i]) + 32)
                elif 48 <= ord(s[i]) <= 57:
                    temp += s[i]
                i += 1

            if temp == "".join(reversed(temp)):
                return True
            else:
                return False


s = "0p"
sol = Solution()
print(sol.isPalindrome(s))
