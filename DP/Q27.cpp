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
    unordered_map<TreeNode*,int> mp;
    
    int helper(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        if(mp.find(root)!=mp.end()){
            return mp[root];
        }
        int case1=root->val;
        if(root->left){
            case1+=helper(root->left->left);
            case1+=helper(root->left->right);
        }
        if(root->right){
            case1+=helper(root->right->right);
            case1+=helper(root->right->left);
        }
        int case2=helper(root->left)+helper(root->right);
        return mp[root]=max(case1,case2);
    }
    int rob(TreeNode* root) {
        if(root==NULL)
            return 0;
        return helper(root);
    }
};
