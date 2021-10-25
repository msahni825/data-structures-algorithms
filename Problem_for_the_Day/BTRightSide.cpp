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
    vector<int> ans;
        
    vector<int> helper(TreeNode* root,int level){
        if(root==NULL){
            return ans;
        }
        if(ans.size()<level){
            ans.push_back(root->val);
        }
        helper(root->right,level+1);
        helper(root->left,level+1);
        return ans;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        //dfs 
        if(root==NULL){
            return ans;
        }
        return helper(root,1);
    }
};
