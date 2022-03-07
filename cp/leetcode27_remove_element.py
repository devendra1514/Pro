class Solution(object):
    def removeElement(self, nums, val):
        s = 0
        e = len(nums) - 1
        while s <= e:
            if nums[s] == val:
                nums[s] = nums[e]
                nums[e] = '_'
                e -= 1
            else:
                s += 1

        return s
        # i = 0
        # while i < s:
        #     print(nums[i])
        #     i += 1


nums = [3, 2, 4]
sol = Solution()
sol.removeElement(nums, int(input()))