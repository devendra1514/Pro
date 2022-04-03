class Solution(object):
    def evalRPN(self, tokens: str):
        """
        :type tokens: List[str]
        :rtype: int
        """
        operand = []
        for ch in tokens:
            if ch.isnumeric() or len(ch) > 1:
                operand.append(int(ch))
            else:
                n2 = operand.pop()
                n1 = operand.pop()
                value = 0
                if ch == "+":
                    value = n1 + n2
                elif ch == "-":
                    value = n1 - n2
                elif ch == "/":
                    value = int(n1 / n2)
                elif ch == "*":
                    value = n1 * n2
                operand.append(value)
        return operand[0]
        

tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
sol = Solution()
print(sol.evalRPN(tokens))