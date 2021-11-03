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
    int sumNumbers(TreeNode* root,int result=0){
        //DFS
        int sum=0;
        if(!root){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return (result*10+root->val);
        }
        return (sumNumbers(root->left,result*10+root->val) + sumNumbers(root->right,result*10+root->val));
    }
};
