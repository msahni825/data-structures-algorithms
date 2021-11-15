# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], v: int) -> Optional[TreeNode]:
        # ans = Optional[TreeNode]
        def search(root):
            if root is None:
                return None
            elif root.val==v:
                # ans = root
                return root
            elif root.val>v:
                return search(root.left)
            elif root.val<v:
                return search(root.right)
        result = search(root)
        return result
