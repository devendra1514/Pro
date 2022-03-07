# Definition for singly-linked list.

class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        temp = ListNode()
        root = temp
        while head != None:
            if head.val != val:
                temp.next = ListNode(head.val)
                temp = temp.next
            else:
                pass
            head = head.next
        
        root = root.next
        return root

head = ListNode(1, ListNode(2, ListNode(6, ListNode(3, ListNode(4, ListNode(5, ListNode(6)))))))
sol = Solution()
root = sol.removeElements(head, 6)

while root != None:
    print(root.val)
    root = root.next