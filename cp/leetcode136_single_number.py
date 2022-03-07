class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        i = 0
        while i < len(nums)-1:
            if nums[i] == nums[i+1]:
                i += 1
                while i < len(nums)-1:
                    if nums[i] != nums[i+1]:
                        break
                    i += 1
            else:
                return nums[i]
            i += 1
        else:
            return nums[i]
        
        

sol = Solution()
print(sol.singleNumber([2]))