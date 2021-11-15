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
    
    vector<int> nodevalue;
    unordered_map<int,int> mp;
        
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        mp[root->val]++;
        nodevalue.push_back(root->val);
        inorder(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        int count=0;
        int max1=0;
        int index=-1;
        
        inorder(root);
        
        for(auto i:mp){
            max1=max(max1,i.second);
        }
        for(auto j:mp){
            if(j.second==max1){
                res.push_back(j.first);
            }
        }
        return res;
    }
};
