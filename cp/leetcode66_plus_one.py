class Solution(object):
    def plusOne(self, digits):
        temp = 1
        sum = 0
        i = len(digits)-1
        while i >= 0:
            sum = 0
            sum = digits[i] + temp
            sum = str(sum)
            if len(sum) == 1:
                digits[i] = int(sum[0])
                return digits
            else:
                digits[i] = int(sum[1])
                temp = int(sum[0])

            i -= 1
        if len(sum) == 2:
            digits.insert(0, temp)
        
        return digits

nums = [9, 9, 9, 9]
sol = Solution()
print(sol.plusOne(nums))
