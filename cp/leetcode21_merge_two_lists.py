class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution(object):
    def mergeTwoLists(self, l1, l2):

        if l1.val < l2.val:
            temp = head = ListNode(l1.val)
            l1 = l1.next
        else:
            temp = head = ListNode(l2.val)
            l2 = l2.next

        while l1 is not None and l2 is not None:
            if l1.val <= l2.val:
                temp.next = ListNode(l1.val)
                l1 = l1.next
            else:
                temp.next = ListNode(l2.val)
                l2 = l2.next
            temp = temp.next
        
        while l1 is not None:
            temp.next = ListNode(l1.val)
            l1 = l1.next
            temp = temp.next

        while l2 is not None:
            temp.next = ListNode(l2.val)
            l2 = l2.next
            temp = temp.next

        return head


a1 = ListNode(1)
a2 = ListNode(2)
a3 = ListNode(4)
a1.next = a2
a2.next = a3
b1 = ListNode(1)
b2 = ListNode(3)
b3 = ListNode(4)
b1.next = b2
b2.next = b3
l1 = a1
l2 = b1

sol = Solution()
head = sol.mergeTwoLists(l1, l2)

while head is not None:
    print(head.val)
    head = head.next

#  -------------------------------------------------------------------------------

# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


# class Solution(object):
#     def mergeTwoLists(self, l1, l2):

#         temp = head = ListNode()
#         while l1 is not None and l2 is not None:
#             if l1.val <= l2.val:
#                 temp.next = ListNode(l1.val)
#                 l1 = l1.next
#             else:
#                 temp.next = ListNode(l2.val)
#                 l2 = l2.next
#             temp = temp.next
        
#         while l1 is not None:
#             temp.next = ListNode(l1.val)
#             l1 = l1.next
#             temp = temp.next

#         while l2 is not None:
#             temp.next = ListNode(l2.val)
#             l2 = l2.next
#             temp = temp.next
#         head = head.next
#         return head


# a1 = ListNode(1)
# a2 = ListNode(2)
# a3 = ListNode(4)
# a1.next = a2
# a2.next = a3
# b1 = ListNode(1)
# b2 = ListNode(3)
# b3 = ListNode(4)
# b1.next = b2
# b2.next = b3
# l1 = a1
# l2 = b1

# sol = Solution()
# head = sol.mergeTwoLists(l1, l2)

# while head is not None:
#     print(head.val)
#     head = head.next
