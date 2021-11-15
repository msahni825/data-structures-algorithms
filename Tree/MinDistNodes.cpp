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
    void inorder(TreeNode* root, int &minimum, int &num, int &f){
        if(root==NULL){
            return;
        }
        inorder(root->left,minimum,num,f);
        if(f==0){
            num=root->val;
            f++;
        }
        else{
            minimum=min(minimum,root->val-num);
            num=root->val;
        }
        inorder(root->right,minimum,num,f);
    }
    
    int minDiffInBST(TreeNode* root) {
        //find minimum values    |   space: O(1), time: O(N)
        //sorted inorder traversal(first 2 elements)    |   space:O(N), time:O(N)
    
        int minimum=INT_MAX;
        int num=0;
        int f=0;
        inorder(root,minimum,num,f);
        return minimum;
        // int min1=INT_MAX;
        // int min2=INT_MAX;
        // int mini=INT_MAX;
        // while(root){
        //    min1=root->val;
        //    root=root->left; 
        //    if(root){
        //        min2=root->val;
        //        mini=abs(min1-min2);
        //    } 
        // }
        // return mini;
    }
};
