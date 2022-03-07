class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        
        i = 0
        size = len(nums)
        while i < size - 1:
            j = i + 1
            while j <= i + k and j < size:
                if nums[i] == nums[j]:
                    return True
                j += 1
            i += 1
        if i == size - 1:
            return False

nums = [13,23,1,2,3]
k = 5
sol = Solution()
print(sol.containsNearbyDuplicate(nums, k))