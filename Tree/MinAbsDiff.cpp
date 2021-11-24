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
    int minimum=INT_MAX;
    int val=-1;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        if(val>=0){
            minimum=min(minimum,abs(root->val-val));
        }
        val=root->val;
        inorder(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        //inorder for BST is sorted
        inorder(root);
        return minimum;
    }
};
