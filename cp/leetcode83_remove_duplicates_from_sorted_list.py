# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        if head == None:
            return
        else:
            prev = head
            temp = head.next
            while temp != None:
                if prev.val == temp.val:
                    prev.next = temp.next
                    temp = prev.next
                else:
                    prev = prev.next
                    temp = temp.next
            return head

head = ListNode(1)
# head.next = ListNode(2)
# head.next.next = ListNode(3)
sol = Solution()
temp = sol.deleteDuplicates(head)
while temp != None:
    print(temp.val)
    temp = temp.next