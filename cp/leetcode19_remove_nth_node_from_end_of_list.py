# Definition for singly-linked list.

from typing import List


class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        temp = head
        length = 0
        while temp != None:
            length += 1
            temp = temp.next
        del temp
        if n > length:
            return None
        else:
            del_index = length-n+1
            temp = head
            prev = head
            i = 1
            if head.next == None:
                return None
            elif del_index == 1:
                head = head.next
                return head
            else:
                while temp != None:
                    if del_index == i:
                        prev.next = temp.next
                        break
                    prev = temp
                    temp = temp.next
                    i += 1
                return head



# head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
head = ListNode(1, ListNode(2))
sol = Solution()
head = sol.removeNthFromEnd(head, 2)
while head != None:
    print(head.val)
    head = head.next
        