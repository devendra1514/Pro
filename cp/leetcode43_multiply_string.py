# Note : You must not use any built-in BigInteger library or convert the inputs to integer directly.

class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        i1 = self.getInteger(num1)
        i2 = self.getInteger(num2)

        mul = i1 * i2

        rem = 0

        print(mul)

        if mul == 0:
            return "0"

        output = ""

        while mul != 0:
            rem = mul % 10
            output = self.getCharacter(rem) + output
            mul = mul // 10
            print(mul)
        return (output)

    def getCharacter(self, numI):
        return chr(48 + numI)

    def getInteger(self, numS):
        i = 0
        num = 0
        while i < len(numS):
            if 48 <= ord(numS[i]) <= 57:
                num *= 10
                j = 0
                for ascii in range(48, 57+1):
                    if ascii != ord(numS[i]):
                        j +=1 
                    else:
                        num += j
            i += 1
        return num

num1 = "2"
num2 = "6"

sol = Solution()
print(sol.multiply(num1, num2))