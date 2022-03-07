class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        if n == 1:
            return '1'
        else:
            result = self.countAndSay(n-1)
            print(result)
            output = ''
            i = 0
            while i < len(result):
                j = i
                count = 0
                while j < len(result):
                    if result[i] == result[j]:
                        count += 1
                    else:
                        output += str(count) + result[i]
                        break
                    j += 1
                else:
                    output += str(count) + result[i]
                i = j
            return output

n = 4
sol = Solution()
print(sol.countAndSay(n))