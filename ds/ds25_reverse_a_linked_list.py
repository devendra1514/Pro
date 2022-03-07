class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverse(self, head):
        while head is not None:
            temp = ListNode(head.val)
            temp_head = temp
            head = head.next
            while head is not None:
                temp.next = ListNode(head.val)
                temp = temp.next
                head = head.next
        return temp_head

sol = Solution()
head = ListNode(1,ListNode(2,ListNode(4,ListNode(6))))
head = sol.reverse(head)
while head is not None:
    print(head.val)
    head = head.next