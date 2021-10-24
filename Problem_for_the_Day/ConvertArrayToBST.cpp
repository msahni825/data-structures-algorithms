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
    TreeNode* helper(vector<int> &nums, int l, int r){
        int mid;
        TreeNode* ft;
        if(l>r){
            return NULL;
        }
        if(l==r){
            ft=new TreeNode(nums[l]); 
        }
        else{
            mid=l+(r-l)/2;
            ft=new TreeNode(nums[mid]);
            ft->left=helper(nums,l,mid-1);
            ft->right=helper(nums,mid+1,r);
        }
        return ft;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        return helper(nums,left,right);
    }
};
