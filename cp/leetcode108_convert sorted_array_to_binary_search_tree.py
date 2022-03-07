# Definition for a binary tree node.


class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        i = 0

        root = TreeNode(nums[0])
        i += 1

        while i < len(nums):
            self.insertInBST(root, nums[i])
            i += 1
            
        return root

    def insertInBST(self, root, val):
        print("Hello")
        if root == None:
            root = TreeNode(val)
        elif val <= root.val:
            self.insertInBST(root.left, val)
        else:
            self.insertInBST(root.left, val)


nums = [1, 3, 4, 5, 6, 7, 12]
sol = Solution()
root = sol.sortedArrayToBST(nums)
# print("Hello")
def inorder(root):
    if root != None:
        print("Hello")
        inorder(root.left)
        print(root.val)
        inorder(root.right)
