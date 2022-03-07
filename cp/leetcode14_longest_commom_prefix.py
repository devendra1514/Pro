class Solution(object):
    def longestCommonPrefix(self, strs):
        temp = strs[0]
        org = ""
        for str in strs:
            i = 0
            while i < len(temp) and i < len(str):
                if temp[i] == str[i]:
                    org += str[i]
                else:
                    break
                i += 1
            temp = org
            org = ""
        return temp

strs = ["flower","flow","flight"]
sol = Solution()
print(sol.longestCommonPrefix(strs))