# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def __init__(self):
        self.b = True

    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True
        else:
            return self.compare(root.left, root.right)

    def compare(self, r1, r2):
        if r1 is not None and r2 is not None:
            a = self.compare(r1.left, r2.right)
            b = self.compare(r1.right, r2.left)
            if r1.val == r2.val and a and b:
                return True
            else:
                return False
        elif r1 is None and r2 is None:
            return True
        else:
            return False

root= TreeNode(1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(2, TreeNode(4), TreeNode(3)))
# root= TreeNode(1, TreeNode(2, TreeNode(3), TreeNode(4)), TreeNode(2, TreeNode(3), TreeNode(4)))
# root = TreeNode(1, TreeNode(2, None, TreeNode(4)), TreeNode(2, None, TreeNode(4)))
# root = TreeNode(1, None, TreeNode(2))
sol = Solution()
print(sol.isSymmetric(root))
# [1,2,2,null,3,null,3]
