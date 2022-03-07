import random
class MinStack(object):

    def __init__(self):
        self.stack = []

    def push(self, val):
        self.stack.append(val)
        
    def pop(self):
        self.stack.pop()
        
    def top(self):
        return self.stack[len(self.stack)-1]
        
    def getMin(self):
        return min(self.stack)
        

# Your MinStack object will be instantiated and called as such:
# minStack = MinStack()
# minStack.push(2147483646)
# minStack.push(2147483646)
# minStack.push(2147483647)
# print(minStack.top())
# minStack.pop()
# print(minStack.getMin())
# minStack.pop()
# print(minStack.getMin())
# minStack.pop()
# minStack.push(-2147483648)
# print(minStack.top())
# print(minStack.getMin())
# minStack.pop()
# print(minStack.getMin())

minStack = MinStack()
minStack.push(-2)
minStack.push(0)
minStack.push(-3)
print(minStack.getMin())
minStack.pop()
print(minStack.top())
print(minStack.getMin())