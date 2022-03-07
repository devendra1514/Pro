class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        l = []
        for i in range(numRows):
            l.append([])
        print(l)

        i = 0
        while i < len(s):
            for j in range(numRows):
                if i == len(s):
                    break
                l[j].append(s[i])
                i += 1
            for j in range(numRows - 2, 0, -1):
                if i == len(s):
                    break
                l[j].append(s[i])
                i += 1
        print(l)

        output_string = ''
        for r in l:
            for ch in r:
                output_string += ch
        return output_string


s = "PAYPALISHIRING"
numRows = 4
sol = Solution()
print(sol.convert(s, numRows))
