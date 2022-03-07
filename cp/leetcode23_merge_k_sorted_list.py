# Definition for singly-linked list.
'''
lists = [[1,4,5],[1,3,4],[2,6]]
first we pop two indexes value and combine in sort form
and then append it to same list
ex: lists = [[1,4,5],[1,3,4],[2,6]]
lists = [[2,6],[1,1,3,4,4,5]]
then after apply same process
lists = [[1,1,2,3,4,4,5,6]]

--- we called this method 
'''
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[ListNode]
        :rtype: ListNode
        """
        if len(lists) == 0:
            return None
        elif len(lists) == 1:
            return lists[0]
        else:
            while len(lists) >= 2:
                l1 = lists.pop(0)
                l2 = lists.pop(0)
                temp = ListNode(0)
                sum = temp
                while l1 is not None and l2 is not None:
                    temp.next = ListNode()
                    temp = temp.next
                    if l1.val <= l2.val:
                        temp.val = l1.val
                        l1 = l1.next
                    else:
                        temp.val = l2.val
                        l2 = l2.next
                    
                while l1 is not None:
                    temp.next = ListNode()
                    temp = temp.next
                    temp.val = l1.val
                    l1 = l1.next
                    
                while l2 is not None:
                    temp.next = ListNode()
                    temp = temp.next
                    temp.val = l2.val
                    l2 = l2.next
                    
                sum = sum.next
                lists.append(sum)
            return lists[0]

        

l1 = ListNode(1,ListNode(2,ListNode(4,ListNode(6))))
l2 = ListNode(1,ListNode(3,ListNode(4,ListNode(8))))
l3 = ListNode(1,ListNode(1,ListNode(5,ListNode(6))))
l4 = ListNode(1,ListNode(1,ListNode(5,ListNode(6))))
l5 = ListNode(1,ListNode(1,ListNode(5,ListNode(6))))
l6 = ListNode(1,ListNode(1,ListNode(5,ListNode(6))))

sol = Solution()
sum = sol.mergeKLists([l1, l2, l3, l4, l5, l6])
print("sum: ", end="")
temp_l = sum
while temp_l is not None:
    print(temp_l.val, end=', ')
    temp_l = temp_l.next
print()



        # if len(lists) == 0:
        #     return None
        # elif len(lists) == 1:
        #     return lists[0]
        # else:
        #     l1 = lists[0]
        #     i = 0
        #     while i < len(lists)-1:
        #         l2 = lists[i+1]
        #         temp = ListNode(0)
        #         sum = temp
        #         while l1 is not None and l2 is not None:
        #             temp.next = ListNode()
        #             temp = temp.next
        #             if l1.val <= l2.val:
        #                 temp.val = l1.val
        #                 l1 = l1.next
        #             else:
        #                 temp.val = l2.val
        #                 l2 = l2.next
                    
        #         while l1 is not None:
        #             temp.next = ListNode()
        #             temp = temp.next
        #             temp.val = l1.val
        #             l1 = l1.next
                    
        #         while l2 is not None:
        #             temp.next = ListNode()
        #             temp = temp.next
        #             temp.val = l2.val
        #             l2 = l2.next
                    
        #         sum = sum.next
        #         l1 = sum
                
        #         i += 1
        #     return l1