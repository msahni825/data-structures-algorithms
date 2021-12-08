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
    int calcSum(TreeNode* root, int& t){
            if(!root){
                return 0;
            }
            int l=calcSum(root->left,t);
            int r=calcSum(root->right,t);
            t+=abs(l-r);
        return l+r+root->val;
    } 
    int findTilt(TreeNode* root) {
        int tilt=0;
        if(root==NULL){
            return 0;
        }
        calcSum(root,tilt);
        return tilt;
    }
};
/*
1-> 2,3(0,0)
2-> 0,0
3-> 0,0
*/
