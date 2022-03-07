from re import S


class Solution(object):
    def buildArray(self, target, n):
        """
        :type target: List[int]
        :type n: int
        :rtype: List[str]
        """
        output = []
        i = 0
        num = 1
        while num <= target[len(target)-1]:
            if target[i] == num:
                output.append('Push')
                i += 1
            else:
                output.append('Push')
                output.append('Pop')
            num += 1
        return output

target = [1,7]
n = 7
sol = Solution()
print(sol.buildArray(target, n))