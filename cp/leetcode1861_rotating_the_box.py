class Solution(object):
    def rotateTheBox(self, box):
        """
        :type box: List[List[str]]
        :rtype: List[List[str]]
        """
        for sub in box:
            i = len(sub) - 1

            while i >= 0:
                if sub[i] == '#' and i < len(sub) - 1:
                    j = i + 1
                    while j < len(sub) and sub[j] != '*':
                        if sub[j] == '#':
                            break
                        else:
                            sub[j] = '#'
                            sub[j-1] = '.'
                        j += 1
                i -= 1

        new = []

        i = 0
        while i < len(box[0]):
            j = len(box) - 1
            temp = []
            while j >= 0:
                temp.append(box[j][i])
                j -= 1
            print(temp)
            new.append(temp)
            i += 1

        return new

box = [["#","#","*",".","*","."],["#","#","#","*",".","."],["#","#","#",".","#","."]]
sol = Solution()
print(sol.rotateTheBox(box))


