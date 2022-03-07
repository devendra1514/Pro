from typing import Text


class Solution(object):
    def searchInsert(self, nums, target):
        if target < nums[0]:
            return 0
        elif target > nums[len(nums)-1]:
            return len(nums)
        else:
            s = 0
            e = len(nums)-1
            while(s <= e):
                m = (s+e)//2
                if target == nums[m]:
                    return m
                elif target < nums[m]:
                    e = m-1
                elif target > nums[m]:
                    s = m+1
            return s




nums = [1,3,5,6]
target = 2

sol = Solution()
print(sol.searchInsert(nums, target))