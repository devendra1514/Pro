class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        digits_list = []
        for ch in digits:
            digits_list.append(self.getChar(ch))

        size = len(digits)

        if size == 0 or size >= 5:
            return []
        else:
            output_combination = []
            for i in digits_list[0]:
                if size >= 2:
                    for j in digits_list[1]:
                        if size >= 3:
                            for k in digits_list[2]:
                                if size >= 4:
                                    for l in digits_list[3]:
                                        output_combination.append(i+j+k+l)
                                else:
                                    output_combination.append(i+j+k)
                        else:
                            output_combination.append(i+j)
                else:
                    output_combination.append(i)
        
        return output_combination
    
    def getChar(self, ch) :
        if ch == "2":
            return "abc"
        elif ch == "3":
            return "def"
        elif ch == "4":
            return "ghi"
        elif ch == "5":
            return "jkl"
        elif ch == "6":
            return "mno"
        elif ch == "7":
            return "pqrs"
        elif ch == "8":
            return "tuv"
        elif ch == "9":
            return "wxyz"
        

digits = "2455"
sol = Solution()
print(sol.letterCombinations(digits))