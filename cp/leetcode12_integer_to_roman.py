class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        l = [1, 5, 10, 50, 100, 500, 1000]
        i = 1
        pow = 1
        s = ''
        t = 1
        while num != 0:
            n = num % 10 ** pow
            num = num - n
            if n == 0:
                pass
            elif n < 1000:
                if n < l[i]:
                    if l[i] - n == t:
                        s += self.getRoman(l[i])
                        s += self.getRoman(t)
                    else:
                        for j in range(n//t):
                            s += self.getRoman(t)
                elif n > l[i]:
                    if l[i+1] - n == t:
                        s += self.getRoman(l[i+1])
                        s += self.getRoman(t)
                    else:
                        for j in range((n - l[i])//t):
                            s += self.getRoman(t)
                        s += self.getRoman(l[i])
                else:
                    s += self.getRoman(l[i])
            else:
                for j in range(n // 1000):
                    s += self.getRoman(1000)
            i += 2
            t *= 10
            pow += 1
        return s[::-1]

        
    def getRoman(self, n) :
        if n == 1:
            return 'I'
        elif n == 5:
            return 'V'
        elif n == 10:
            return 'X'
        elif n == 50:
            return 'L'
        elif n == 100:
            return 'C'
        elif n == 500:
            return 'D'
        elif n == 1000:
            return 'M'

num = 99999
sol = Solution()
print(sol.intToRoman(num))