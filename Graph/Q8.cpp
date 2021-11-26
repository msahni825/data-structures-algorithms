class Solution {
public:
    //stores all subsets
    vector<vector<int>> result;
    
    void compute(vector<int>& nums,vector<int>& curr, int idx){
        //including current subset into final ans
        result.push_back(curr);
        //if duplicate then continue
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]){
                continue;
            }
            curr.push_back(nums[i]);
            compute(nums,curr,i+1);
            //to get subsets w/o current nums[i]
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //stores current subsets
        vector<int> curr;
        //sorting to get the duplicates adjacent
        sort(nums.begin(),nums.end());
        compute(nums,curr,0);
        return result;
    }
};
