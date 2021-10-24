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
    int index=0;
    TreeNode* buildTreeRec(vector<int>& preorder, vector<int>& inorder, int s, int e){
        
        int pos;
        if(s>e){
            return NULL;
        }
        TreeNode* result=new TreeNode(preorder[index++]);
        for(int i=s;i<=e;i++){
            if(inorder[i]==result->val){
                pos=i;
                break;
            }
        }
            result->left=buildTreeRec(preorder,inorder,s,pos-1);
            result->right=buildTreeRec(preorder,inorder,pos+1,e);
        return result;   
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeRec(preorder,inorder,0,inorder.size()-1);
        
    }
};
