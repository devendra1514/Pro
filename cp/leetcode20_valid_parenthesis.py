class Solution(object):
    def isValid(self, s):
        l1 = []
        for ch in s:
            if ch == '[' or ch == '{' or ch == '(':
                l1.append(ch)
            else:
                if ch == ')':
                    if len(l1) > 0:
                        if l1.pop() == '(':
                            pass
                        else:
                            return False
                    else:
                        return False
                elif ch == '}':
                    if len(l1) > 0:
                        if l1.pop() == '{':
                            pass
                        else:
                            return False
                    else:
                        return False
                elif ch == ']':
                    if len(l1) > 0:
                        if l1.pop() == '[':
                            pass
                        else:
                            return False
                    else:
                        return False
        else:
            if len(l1) == 0:
                return True
            else:
                return False



sol = Solution()
print(sol.isValid(input()))