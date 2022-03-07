# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def hasPathSum(self, root, targetSum):
        """
        :type root: TreeNode
        :type targetSum: int
        :rtype: bool
        """
        if root == None:
            return False
        return self.find(root, root.val, targetSum)

    def find(self, root, val, targetSum):
        if root.left is None and root.right is None:
            if val == targetSum:
                return True
            return False
                
        elif root.right is None:
            a = self.find(root.left, root.left.val + val, targetSum)
            return a

        elif root.left is None:
            b = self.find(root.right, root.right.val + val, targetSum)
            return b

        else:
            a = self.find(root.left, root.left.val + val, targetSum)
            if a:
                return True
            return self.find(root.right, root.right.val + val, targetSum)

# root = TreeNode(5, TreeNode(4, TreeNode(11, TreeNode(7), TreeNode(2))),TreeNode(8, TreeNode(13), TreeNode(4, None, TreeNode(1))))
# root = TreeNode(1, TreeNode(2), TreeNode(3))
# root = TreeNode(1)
root = TreeNode()
targetSum = 0

sol = Solution()
print(sol.hasPathSum(root, targetSum))


        # if root is not None:
        #     a = self.find(root.left, root.val + val, targetSum)
        #     if a:
        #         return True
        #     b = self.find(root.right, root.val + val, targetSum)
        #     if b:
        #         return True
        #     else:
        #         return False
        # elif root == None:
        #     if val == targetSum:
        #         return True
        #     else:
        #         return False