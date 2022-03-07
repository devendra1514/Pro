class Solution(object):
    def strStr(self, haystack, needle):
        if len(needle) == 0:
            return 0
        else:
            haystack_size = len(haystack)
            needle_size = len(needle)

            if haystack_size < needle_size:
                return -1
            else:
                i = 0
                while i <= haystack_size - needle_size:
                    if haystack[i:i+needle_size] == needle:
                        return i+1
                    i += 1
                if i == haystack_size - needle_size+1:
                    return -1
            

sol = Solution()
print(sol.strStr(input(), input()))