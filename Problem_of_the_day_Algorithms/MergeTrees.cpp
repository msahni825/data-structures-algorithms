/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL)
            return NULL;
        TreeNode* finalTree=new TreeNode();
        //base cases:
        if(root2 && root1==NULL)
            finalTree->val=root2->val;
        else if(root1 && root2==NULL)
            finalTree->val=root1->val;
        else{
            finalTree->val=root1->val+root2->val;
        }
        //recursively calculating left and right
        finalTree->left=mergeTrees(root1?root1->left:NULL,root2?root2->left:NULL);
        finalTree->right=mergeTrees(root1?root1->right:NULL,root2?root2->right:NULL);    
        
        return finalTree;
    }
};
