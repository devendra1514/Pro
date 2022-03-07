class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        l = []
        i = 0
        while i < numRows:
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
        return l


numRows = 0
sol = Solution()
print(sol.generate(numRows))
