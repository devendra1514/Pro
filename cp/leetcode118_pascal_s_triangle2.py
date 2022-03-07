class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        l = []
        i = 0
        while i < rowIndex+1:
            temp = []
            for j in range(i + 1):
                temp.append(1)
            l.append(temp)
            j = 0
            # lst = temp
            while j < i-1:
                l[i][j+1] = l[i-1][j] + l[i-1][j+1]
                j += 1

            del temp
            i += 1
        return l[rowIndex]
        

rowIndex = 0
sol = Solution()
print(sol.getRow(rowIndex))
