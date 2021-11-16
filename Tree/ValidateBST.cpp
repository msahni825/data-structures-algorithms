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
    vector<int> res;
    
    void inorder(TreeNode* root, vector<int>& res){
        if(root==NULL){
            return;
        }
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    
    bool isValidBST(TreeNode* root) {
        inorder(root,res);
        for(int i=1;i<res.size();i++){
            if(res[i-1]>=res[i]){
                return false;
            }
        }
        return true;
        
        // if(root==NULL){
        //     return true;
        // }
        // if(root->left != NULL and root->val <= root->left->val){
        //     return false;
        // }
        // if(root->right != NULL and root->val >= root->right->val){
        //     return false;
        // }
        // if(!isValidBST(root->left) || !isValidBST(root->right)){
        //     return false;   
        // }
        //return true;
    }
};
