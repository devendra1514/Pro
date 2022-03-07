class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        low = 0
        high = len(nums) - 1
        while low <= high:
            mid = (low + high)//2
            if nums[low] <= nums[mid] <= nums[high]:
                return low
            elif nums[low] <= nums[mid]:
                
                low = mid + 1
        

nums = [3,4,5,1,2]
sol = Solution()
print(sol.findMin(nums))