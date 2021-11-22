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
    vector<string> result;
    
    void computePaths(TreeNode* root, string s=""){
        if(root){
            if(s.empty()){
                s+=to_string(root->val);
            }
            else{
                s+="->"+to_string(root->val);
            }
            if(!root->left && !root->right){
                result.push_back(s);
            }
            computePaths(root->left,s);
            computePaths(root->right,s);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        computePaths(root);
        return result;
    }
};
