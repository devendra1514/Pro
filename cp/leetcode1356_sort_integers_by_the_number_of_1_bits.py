from cmath import pi

from numpy import outer


class Solution(object):
    def sortByBits(self, arr):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        countBits = {}
        countVal = {}
        for val in arr:
            if val in countVal:
                countVal[val] += 1
            else:
                bits = bin(val).replace('0b', '')
                count = bits.count('1')
                countBits[val] = count
                countVal[val] = 1
                
        # print(countVal)
        # print(countBits)

        # print(countBits)
        countBits = dict(sorted(countBits.items()))
        countBits = dict(sorted(countBits.items(), key = lambda item:item[1]))
        
        output = []
        for key in countBits:
            for count in range(countVal[key]):
                output.append(key)
        return output

arr = [0,1,2,3,4,5,6,7,8]
# arr = [1024,512,256,128,64,32,16,8,4,2,1]
# arr = [10000,10000]
sol = Solution()
print(sol.sortByBits(arr))