# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def __init__(self):
        self.depth = 0
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        else:
            self.compare(root.left, root.right)
            return self.b

    def compare(self, r1, r2):
        if r1 is not None and r2 is not None:
            if r1.val is r2.val:
                self.compare(r1.left, r2.right)
                self.compare(r1.right, r2.left)
                self.depth += 1


root= TreeNode(1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(2, TreeNode(4), TreeNode(3)))
sol = Solution()
sol.maxDepth(root)