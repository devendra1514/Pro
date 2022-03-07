from typing import List


class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_element = max(nums)
        print(max_element)
        l = [0] * max_element


nums = [2,2,1,1,1,2,2]
sol = Solution()
sol.majorityElement(nums)