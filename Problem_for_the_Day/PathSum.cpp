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
    void helper(TreeNode* root, int targetSum, vector<vector<int>> &res, vector<int> &arr){
        if(!root){
            return;
        }
        arr.push_back(root->val);
        targetSum-=root->val;
        if(!root->left && !root->right){
            //check and add to final res when we reach leaf
            if(targetSum==0){
                res.push_back(arr);
            }
        }
            else{
                helper(root->left,targetSum,res,arr);
                helper(root->right,targetSum,res,arr);
            }
        //if targetSum != 0 then remove 
           arr.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        //dfs
        vector<int> arr;
        vector<vector<int>> res;
    
        helper(root,targetSum,res,arr);
        return res;
    }
};
