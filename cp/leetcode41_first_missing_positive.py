class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        print(nums)

        i = 0
        while i < len(nums):
            if nums[i] >= 1:
                break
            i += 1
        else:
            return 1
        
        j = 1
        while i < len(nums):
            if nums[i] == j:
                i += 1
                while i < len(nums):
                    if nums[i] == j:
                        i += 1
                    else:
                        j += 1
                        break
                else:
                    return j + 1
            else:
                return j
        else:
            return j


nums = [1, 1,3,4,5]
sol = Solution()
print(sol.firstMissingPositive(nums))