class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def reverseKGroup(self, head, k):
        if k == 1:
            return head
        else:
            i = 1
            output_tail = ListNode()
            output_head = output_tail
            while head is not None:
                temp = ListNode(head.val)
                temp_head = temp
                head = head.next
                i += 1
                while head is not None:
                    temp.next = ListNode(head.val)
                    if i == k:
                        output_tail.next = self.reverseList(temp_head)
                        while output_tail.next is not None:
                            output_tail = output_tail.next
                        del temp
                        del temp_head
                        i = 1
                        head = head.next
                        break
                    temp = temp.next
                    head = head.next
                    i += 1
                else:
                    while temp_head is not None:
                        output_tail.next = ListNode(temp_head.val)
                        output_tail = output_tail.next
                        temp_head = temp_head.next

            return output_head.next

    def reverseList(self, root):
        output = ListNode(root.val)
        root = root.next
        while root is not None:
            temp = ListNode(root.val)
            temp.next = output
            output = temp
            root = root.next
        return output


sol = Solution()
head = ListNode(1, ListNode(2, ListNode(3, ListNode(4))))
head = sol.reverseKGroup(head, 2)
while head is not None:
    print(head.val)
    head = head.next
