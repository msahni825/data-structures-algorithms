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
    int sumOfLeftLeaves(TreeNode* root, bool leftNode=false) {
        if(!root){
            return 0;
        }
        if(root->left==NULL and root->right==NULL){
            if(leftNode){
                return root->val;
            }
            else{
                return 0;
            }
        }
        return sumofLeftLeaves(root->left,true)+sumofLeftLeaves(root->right,false);
    }
};
