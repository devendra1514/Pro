class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        i = len(columnTitle)-1
        number = 0
        if i >= 0:
            temp = ord(columnTitle[i]) - 64
            number += temp
            i -= 1
            j = 1
            while i >= 0:
                print((ord(columnTitle[i]) - 65))
                temp = 26 ** j * ((ord(columnTitle[i]) - 64))
                number += temp
                i -= 1
                j += 1
        return number


sol = Solution()
print(sol.titleToNumber('BBB'))