class Solution {
public:    
    void retCombination(int index, vector<int>& candidates, vector<vector<int>> &result, vector<int> ans, int target){
          if(target==0){
              result.push_back(ans);
              return;
          }
        if(target<0){
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }   
            ans.push_back(candidates[i]);
            retCombination(i+1,candidates,result,ans,target-candidates[i]);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        sort(candidates.begin(),candidates.end());
        retCombination(0,candidates,result,ans,target);
        return result;
    }
};
