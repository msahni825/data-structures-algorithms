class Solution {
public:
    void build_combinations(vector<int> nums, int n,vector<int>& ans, vector<vector<int>>& result, int k){
        if(k==0){
            result.push_back(ans);
            return;
        }
        if(n==nums.size()){
            return;
        }
        if(nums.size()-n<k){
            return;
        }
        ans.push_back(nums[n]);
        build_combinations(nums,n+1,ans,result,k-1);
        ans.pop_back();
        build_combinations(nums,n+1,ans,result,k);
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> nums;
        vector<int> ans;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        build_combinations(nums,0,ans,result,k);
        return result;
    }
};
