class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        max_count = {'0' : 0, '1' : 0}
        i = 0
        if len(s) > 0:
            count_0 = 0
            count_1 = 0
            prev = s[0]
            while i < len(s):
                if s[i] == '1':
                    if s[i] == prev:
                        count_1 += 1
                        prev = s[i]
                    else:
                        if max_count[prev] < count_0:
                            max_count[prev] = count_0
                        count_0 = 0
                        prev = s[i]
                        count_1 += 1
                else:
                    if s[i] == prev:
                        count_0 += 1
                        prev = s[i]
                    else:
                        if max_count[prev] < count_1:
                            max_count[prev] = count_1
                        count_1 = 0
                        prev = s[i]
                        count_0 += 1
                i += 1
            else:
                if max_count['0'] < count_0:
                    max_count['0'] = count_0
                    count_0 = 0
                if max_count['1'] < count_1:
                    max_count['1'] = count_1
                    count_1 = 1
                print(max_count)
                if max_count['0'] < max_count['1']:
                    return True
                else:
                    return False


s = ""
sol = Solution()
print(sol.checkZeroOnes(s))