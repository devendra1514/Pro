class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        size = len(s)
        chars = []
        max = 0
        i = 0
        while i < size:
            print("i: ", i)
            chars.append(s[i])
            j = i+1

            while j < size:
                if s[j] in chars:
                    i += chars.index(s[j])
                    break
                chars.append(s[j])
                j += 1

            if max <= len(chars):
                max = len(chars)
            chars.clear()

            i += 1
        return max


s = "abccabdabdefghfjklmnoabcdefgh"
'''Given a string s, find the length of the longest substring without repeating characters.
ex1: abcabcde
ans: abcde
ex2: pwwkew
ans: wke or kew
'''

sol = Solution()
print(sol.lengthOfLongestSubstring(s))
