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
    vector<int> traversal;
        
    int inorderTraversal(TreeNode* root, int& k){
        if(!root){
            return 0;
        }
        int l=inorderTraversal(root->left,k);
        if(l!=0){
            return l;
        }
        k=k-1;
        if(k==0){
            return root->val;
        }
        int r=inorderTraversal(root->right,k);
        return r;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        if(!root){
            return 0;
        }
         return inorderTraversal(root,k);
        // return ans;
    }
};
