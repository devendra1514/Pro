class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        d = {}
        s_len = len(s)
        t_len = len(t)
        if s_len != t_len:
            return False
        else:
            for s_ch, t_ch in zip(s, t):
                if d.get(s_ch, "None") != "None":
                    if t_ch == d[s_ch]:
                        continue
                    else:
                        return False
                else:
                    if t_ch in d.values():
                        return False
                    d[s_ch] = t_ch
            else:
                return True


        

s = "title"
t = "paper"
sol = Solution()
print(sol.isIsomorphic(s, t))