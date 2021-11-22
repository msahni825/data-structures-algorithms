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
    int res=0;
    
    void computeSum(TreeNode* root, int ans){
        if(!root){
            return;
        }
        ans=ans*2+root->val;
        if(!root->left && !root->right){
            res+=ans;
        }
        computeSum(root->left,ans);
        computeSum(root->right,ans);
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        computeSum(root,ans);
        return res;
    }
};
