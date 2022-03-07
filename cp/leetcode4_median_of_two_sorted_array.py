class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        i = 0
        j = 0
        # median = 0
        m = len(nums1)
        n = len(nums2)
        nums = []
        while(i < m and j < n):
            if nums1[i] <= nums2[j]:
                nums.append(nums1[i])
                i += 1
            else:
                nums.append(nums2[j])
                j += 1
        
        while i < m:
            nums.append(nums1[i])
            i += 1
        while j < n:
            nums.append(nums2[j])
            j += 1
        
        if (m + n) % 2 == 1:
            return nums[(m+n)//2]
        else:
            print(float((nums[((m+n)//2)-1] + nums[((m+n)//2)]) / 2))
            return float((nums[((m+n)//2)-1] + (nums[((m+n)//2)])) / 2)

        

nums1 = [1,2]
nums2 = [3,4]
sol = Solution()
print(sol.findMedianSortedArrays(nums1, nums2))