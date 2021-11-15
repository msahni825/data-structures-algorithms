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
    TreeNode* result;
    TreeNode* searchBST(TreeNode* root, int v) {
        //preorder traversal
        if(root==NULL){
            return NULL;
        }
        
        if(root->val==v){
            result=root;
            return result;
        }
        if(root->left && root->val>v){
            searchBST(root->left,v);
        }
        if(root->right && root->val<v){
            searchBST(root->right,v);
        }
        return result;
    }
};
