class Solution(object):
    def containsDuplicate(self, nums_list):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # nums_list_len = len(nums_list)
        # nums_set_len = len(set(nums_list))

        # if (nums_list_len == nums_set_len):
        #     return False
        # else:
        #     return True

        l = {}
        for v in nums_list:
            if v in l:
                return True
            else:
                l[v] = 1
        else:
            return False

        

nums = [1,2,3,1]
sol = Solution()
print(sol.containsDuplicate(nums))