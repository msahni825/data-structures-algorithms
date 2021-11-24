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
    void calcStr(TreeNode* root,string &str){
        if(!root){
            return;
        }
        //inorder of tree
        calcStr(root->left,str);
        if(!root->left && !root->right){
            str+=to_string(root->val)+',';
        }
        calcStr(root->right,str);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1,s2;
        calcStr(root1,s1);
        calcStr(root2,s2);
        return s1==s2;
    }
};
