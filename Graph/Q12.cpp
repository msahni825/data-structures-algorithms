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
    TreeNode* first=NULL;
    TreeNode* second=NULL;
    TreeNode* prev=NULL;
    
    void BST(TreeNode* root){
        if(root==NULL){
            return;
        }
        BST(root->left);
        if(prev!=NULL && root->val < prev->val){
            if(first==NULL){
                first=prev;
            }
            second=root;
        }
        prev=root;
        BST(root->right);
    }
   /* void inorder(TreeNode* root, vector<int> &arr){
        if(!root){
            return;
        }
        inorder(root->left,arr);
        arr.push_back(arr->val);
        inorder(root->right,arr);
    }
    void inorder2(TreeNode* root, vector<int> &arr, int &i){
        inorder2(root->left,arr,i);
        root->val=arr[i++];
        inorder2(root->right,arr,i);
    }*/
    void recoverTree(TreeNode* root) {
        BST(root);
        swap(first->val,second->val);
       /* vector<int> arr;
        inorder(root,arr);
        sort(arr.begin(),arr.end());
        int i=0;
        inorder2(root,arr,i);*/        
    }
};
