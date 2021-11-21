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
    TreeNode* constructBTree(vector<int>& inorder,vector<int>& postorder,int in_start, int in_end, int post_start, int post_end){
        if(in_start>in_end){
            return NULL;
        }
        int rootval=postorder[post_end];
        int root_idx=-1;
        for(int i=in_start;i<=in_end;i++){
            if(inorder[i]==rootval){
                root_idx=i;
                break;
            }
        }
            int Left_ins = in_start;
            int Left_ine = root_idx-1;
            int Left_posts = post_start;
            int Left_poste = Left_ine - Left_ins + Left_posts;
            int Right_ins = root_idx+1;
            int Right_ine = in_end;
            int Right_posts = Left_poste + 1;
            int Right_poste  = post_end - 1; 
        
        TreeNode* root=new TreeNode(rootval);
        root->left=constructBTree(inorder,postorder,Left_ins,Left_ine,Left_posts,Left_poste);
        root->right=constructBTree(inorder,postorder,Right_ins,Right_ine,Right_posts,Right_poste);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int sz=inorder.size();  
        return constructBTree(inorder,postorder,0,sz-1,0,sz-1);
    }
};
