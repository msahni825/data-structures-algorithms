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
    /*T.C: O(N) Using Queue, 
      S.C: O(N) */
    vector<vector<int>> result;
    vector<vector<int>> printZigzagOrder(TreeNode* root){
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool flag=false;
        while(!q.empty()){
            int l=q.size();
            vector<int> curr;
            for(int i=0;i<l;i++){
                TreeNode* temp=q.front();
                curr.push_back(temp->val);
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            if(flag){
                reverse(curr.begin(),curr.end());
            }
            flag=!flag;
            
            result.push_back(curr);
        }
        return result;
    } 
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return printZigzagOrder(root);
    }
};
