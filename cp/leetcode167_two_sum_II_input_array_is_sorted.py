from typing import Text


class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        i = 0
        index = []
        size = len(numbers)
        while i < size-1:
            while(numbers[i] == numbers[i+1]):
                if numbers[i] + numbers[i+1] == target:
                    index.append(i+1)
                    index.append(j+1)
                    return index
                i += 1

            j = i+1
            while j < size:
                if numbers[i] + numbers[j] < target:
                    pass
                elif numbers[i] + numbers[j] == target:
                    index.append(i+1)
                    index.append(j+1)
                    return index
                elif numbers[i] + numbers[j] > target:
                    break
                j += 1
            i += 1
        return index
            
        

numbers = [2, 7, 10, 15]
sol = Solution()
print(sol.twoSum(numbers, 16))