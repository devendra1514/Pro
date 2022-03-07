class Solution(object):
    def removeDuplicates(self, nums):
        i = 0
        isNotDuplicate = True
        size = len(nums)
        if size == 1:
            return 1
        elif size == 2:
            if nums[0] == nums[1]:
                nums.pop(1)
                return 1
            else:
                return 2
        else:
            while i < size-1:
                if nums[i] == '_':
                    break
                elif nums[i] == nums[i+1]:
                    nums.pop(i+1)
                    nums.append('_')
                    isNotDuplicate = False
                else:
                    i += 1
        print(nums)
        return i+1 if isNotDuplicate else i


l = [1,2,3,4,4,4,4]
sol = Solution()
for i in range(sol.removeDuplicates(l)):
    print(l[i])
