class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        return self.first_and_last_position(nums, target)
    def binary_search(self, low, high, condition):
        while low <= high:
            mid = (low+high)//2
            result = condition(mid)
            if result == 'found':
                return mid
            elif result == 'left':
                high = mid-1
            else:
                low = mid+1
        return -1
    
    
    def first_position(self, nums, query):
        def condition(mid):
            if nums[mid] == query:
                if mid-1 >= 0 and nums[mid-1] == query:
                    return 'left'
                else:
                    return 'found'
            elif nums[mid] < query:
                return 'right'
            else:
                return 'left'

        return self.binary_search(0, len(nums)-1, condition)

    def last_position(self, nums, query):
        def condition(mid):
            if nums[mid] == query:
                if mid+1 <= len(nums)-1 and nums[mid+1] == query:
                    return 'right'
                else:
                    return 'found'
            elif nums[mid] < query:
                return 'right'
            else:
                return 'left'

        return self.binary_search(0, len(nums)-1, condition)

    def first_and_last_position(self, nums, query):
        return [self.first_position(nums, query), self.last_position(nums, query)]

nums = [1,1,2,3,4,4,4,5,5,6,7,8,8,12]
query = 4
sol = Solution()
print(sol.searchRange(nums, query))