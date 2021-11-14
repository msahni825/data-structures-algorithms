# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if root == None:
            return False
        elif root.val ==targetSum and root.left == None and root.right == None:
            return True
        else:
            target = targetSum - root.val
            return self.hasPathSum(root.left, target) or self.hasPathSum(root.right, target) 
