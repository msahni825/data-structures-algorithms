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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return NULL;
        }
        TreeNode* temp=root;
        if(key>temp->val){
            temp->right=deleteNode(temp->right,key);
        }
        else if(key<temp->val){
            temp->left=deleteNode(temp->left,key);
        }
        else{//root->val == key
            if(!temp->left && !temp->right){
                return NULL;
            }
            else if(!temp->left){
                return temp->right;
            }
            else if(!temp->right){
                return temp->left;
            }
            else{
                // both left and right exist(find minimum) and replace with the root 
                auto min=temp->right;
                while(min->left){
                    min=min->left;
                }
                min->left=temp->left;
                return temp->right;
                
            }
        }
        return temp;
    }
};
