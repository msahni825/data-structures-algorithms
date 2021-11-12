# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def compute(self, root, result):
        if root:
            self.compute(root.left,result)
            self.compute(root.right,result)
            result.append(root.val)
        
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        self.compute(root,result)
        return result

   
