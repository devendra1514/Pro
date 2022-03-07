# s = 'aabbc'
'''
first pick first value 'a' and then compare to its next value until they match and 
then after intialize two index i and j to its prev index and next index
and compare i and j indexes value until they matching
if they not match we go to next value 'a' 
'''



class Solution:
    def longestPalindrome(self, s: str):
        counter = 0
        size = len(s)
        list_of_sub_p = []
        while counter < size:
            i = counter - 1
            j = counter + 1

            while j < size:
                if s[counter] == s[j]:
                    j += 1
                else:
                    break

            while i >= 0 and j < size:
                if s[i] == s[j]:
                    i -= 1
                    j += 1
                else:
                    break
            list_of_sub_p.append(s[i + 1:j])
            counter += 1

        high_p = 0
        output = ''
        for ch in list_of_sub_p:
            if len(ch) > high_p:
                high_p = len(ch)
                output = ch
        return output

s = 'aabbc'
sol = Solution()
print(sol.longestPalindrome(s))