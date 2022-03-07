class Solution(object):
    def addBinary(self, a, b):
        i = len(a)-1
        j = len(b)-1

        temp = 0
        s = ""

        while i >= 0 and j >= 0:
            sum = int(a[i]) + int(b[j]) + temp
            if sum == 0:
                s += str(0)
                temp = 0
            elif sum == 1:
                s += str(1)
                temp = 0
            elif sum == 2:
                s += str(0)
                temp = 1
            else:
                s += str(1)
                temp = 1

            i, j = i-1, j-1

        while i >= 0:
            sum = int(a[i]) + temp
            if sum == 0:
                s += str(0)
                temp = 0
            elif sum == 1:
                s += str(1)
                temp = 0
            else:
                s += str(0)
                temp = 1

            i -= 1

        while j >= 0:
            sum = int(b[j]) + temp
            if sum == 0:
                s += str(0)
                temp = 0
            elif sum == 1:
                s += str(1)
                temp = 0
            else:
                s += str(0)
                temp = 1

            j -= 1

        if temp == 1:
            s += str(1)

        return "".join(reversed(s))

    
a = "1111"
b = '1111'
sol = Solution()
print(sol.addBinary(a, b))