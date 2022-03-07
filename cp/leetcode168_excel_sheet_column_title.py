from typing import Counter


class Solution(object):
    def convertToTitle(self, columnNumber):
        s = ""
        while columnNumber > 0:
            if columnNumber % 26 == 0:
                s += 'Z'
                columnNumber = (columnNumber // 26)-1
            else:
                s += chr(64 + (columnNumber % 26))
                columnNumber = columnNumber // 26
        
        return s[::-1]

        

columnNumber = 2109
sol = Solution()
print(sol.convertToTitle(columnNumber))