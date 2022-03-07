class Solution(object):
    def frequencySort(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # count the number that how many time it occure
        countNum = {}
        for num in nums:
            if num in countNum:
                countNum[num] += 1
            else:
                countNum[num] = 1
        # after that we arrange it to in frequently occure
        # countNum.item() return key and value in tuple form

        countNum = dict(sorted(countNum.items(), reverse=True))
        # print(countNum)
        countNum = dict(sorted(countNum.items(), key=lambda item:item[1]))
        # print(countNum)

        # now we insert the value in list by their count

        output = []
        for key in countNum.keys():
            for i in range(countNum[key]):
                output.append(key)
        return output
        

nums = [1,1,2,2,3,3]
sol = Solution()
print(sol.frequencySort(nums))