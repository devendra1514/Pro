# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l = ListNode()
        temp_l = l
        prev = None
        sum = 0
        temp = 0
        while l1 != None and l2 != None:
            sum = l1.val + l2.val + temp
            if sum // 10 == 0:
                temp_l.val = sum
                temp = 0
            else:
                temp_l.val = sum % 10
                temp = 1
            temp_l.next = ListNode()
            prev = temp_l
            temp_l = temp_l.next
            l1 = l1.next
            l2 = l2.next

        while l1 != None:
            sum = l1.val + temp
            if sum // 10 == 0:
                temp_l.val = sum
                temp = 0
            else:
                temp_l.val = sum % 10
                temp = 1
            temp_l.next = ListNode()
            prev = temp_l
            temp_l = temp_l.next
            l1 = l1.next

        while l2 != None:
            sum = l2.val + temp
            if sum // 10 == 0:
                temp_l.val = sum
                temp = 0
            else:
                temp_l.val = sum % 10
                temp = 1
            temp_l.next = ListNode()
            prev = temp_l
            temp_l = temp_l.next
            l2 = l2.next
        
        if temp == 1:
            temp_l.val = 1
        else:
            prev.next = None
        return l

l1 = ListNode(1, ListNode(2, ListNode(6, ListNode(7))))
l2 = ListNode(1, ListNode(2, ListNode(6)))
sol = Solution()
l = sol.addTwoNumbers(l1, l2)
while l != None:
    print(l.val)
    l = l.next