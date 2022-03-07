class Solution(object):
    def lengthOfLastWord(self, s):
        temp_s = ""
        temp = ""
        if len(s) < 1:
            return 0
        else:
            for ch in s:
                if ch != " ":
                    temp_s += ch
                    temp = ""
                else:
                    if len(temp_s) == 0:
                        pass
                    else:
                        temp = temp_s
                        temp_s = ""
            else:
                if len(temp_s) == 0:
                    return len(temp)
                else:
                    return len(temp_s)

s = "luffy is still joyboy"
sol = Solution()
print(sol.lengthOfLastWord(s))