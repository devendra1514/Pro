# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        else:
            temp = head
            # first check two nodes present in linkedlist to swap it
            while temp.next is not None:
                val1 = temp.val
                val2 = temp.next.val
                temp.val = val2
                temp.next.val = val1

                temp = temp.next
                # after jump next nodes we check for that next node in present or note
                if temp.next is not None:
                    temp = temp.next
                else:
                    break
        return head


sol = Solution()
root = ListNode(1)
# root = ListNode()
root = sol.swapPairs(root)
while root is not None:
    print(root.val)
    root = root.next
