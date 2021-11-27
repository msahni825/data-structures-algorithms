class Solution {
public:
    void compute(int index, vector<int> &candidates, vector<vector<int>> &result, vector<int> ans, int target){
    if(index==candidates.size()){
        if(target==0){
            result.push_back(ans);
        }
        return;
    }
    if(candidates[index]<=target){
        ans.push_back(candidates[index]);
        compute(index,candidates,result,ans,target-candidates[index]);
        ans.pop_back();
    }
    compute(index+1,candidates,result,ans,target);
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        compute(0,candidates,result,ans,target);
        return result;
    }
};
