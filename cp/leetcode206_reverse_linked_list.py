# Definition for singly-linked list.
from typing import List


class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def __init__(self):
        self.l = []
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """

        if head.next == None:
            return None
        else:
            self.call(head)            
            root = ListNode()
            temp = root
            prev = None
            
            for v in self.l:
                temp.val = v
                prev = temp
                temp.next = ListNode()
                temp = temp.next
            
            prev.next = None

            return root

    def call(self, head):
        if head != None:
            self.call(head.next)
            self.l.append(head.val)

head = ListNode(1, ListNode(2, ListNode(6, ListNode(3, ListNode(4, ListNode(5, ListNode(6)))))))
sol = Solution()
root = sol.reverseList(head)
while root != None:
    print(root.val)
    root = root.next