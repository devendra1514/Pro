# Definition for a binary tree node.

class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution(object):
    def __init__(self):
        self.nums = []

    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if root != None:
            self.inorderTraversal(root.left)
            self.nums.append(root.val)
            self.inorderTraversal(root.right)
            return self.nums

            
root = TreeNode(5, TreeNode(6, TreeNode(8), TreeNode(9)), TreeNode(7, TreeNode(10), TreeNode(11)))
sol = Solution()
print(sol.inorderTraversal(root))