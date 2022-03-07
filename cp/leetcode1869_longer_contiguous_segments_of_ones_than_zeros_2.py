class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        max_count = {'0' : 0, '1' : 0}
        i = 0
        count = 0
        while i < len(s):

            ch = s[i]
            while i < len(s):
                if ch == s[i]:
                    count += 1
                    i += 1
                else:
                    if max_count[ch] < count:
                        max_count[ch] = count
                    count = 0
                    break
            else:
                if max_count[ch] < count:
                    max_count[ch] = count
                
        print(max_count)
        if max_count['0'] < max_count['1']:
            return True
        else:
            return False


s = ""
sol = Solution()
print(sol.checkZeroOnes(s))