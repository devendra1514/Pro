class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        maxsf = float('-inf')
        currentmax=0
        
        for item in nums:
            currentmax+= item
            
            if maxsf<currentmax:
                maxsf=currentmax
                
            if currentmax<0:
                currentmax=0
        
        return maxsf


nums = [-5, 19, -20, 12]
sol = Solution()
print(sol.maxSubArray(nums))