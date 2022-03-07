# Definition for a binary tree node.

class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def __init__(self):
        self.b = True
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        
        if p == None and q == None:
            return True
        else:
            self.inorderTraversal(p, q)
            return self.b
        
    def inorderTraversal(self, p, q):
        if p != None and q!= None and self.b != False:
            if p.val == q.val:
                self.inorderTraversal(p.left, q.left)
                self.inorderTraversal(p.right, q.right)
            else:
                self.b = False
        elif p != None and q == None:
            self.b = False
        elif p == None and q != None:
            self.b = False

root1= TreeNode(5, TreeNode(6, TreeNode(8), TreeNode(9)), TreeNode(7, TreeNode(10), TreeNode(11)))
root2 = TreeNode(5, TreeNode(6, TreeNode(8), TreeNode(9)), TreeNode(7, TreeNode(10), TreeNode(11)))
# root1 = TreeNode(1)
# root2 = TreeNode(1, TreeNode(2))
# root1 = TreeNode()
# root2 = TreeNode()
sol = Solution()
print(sol.isSameTree(root1, root2))