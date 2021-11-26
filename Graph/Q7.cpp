class Solution {
public:
    vector<vector<int>> result;
    void compute(vector<int> &in, int i, vector<int> &nums){
        if(i==nums.size()){
            result.push_back(in);
            return;
        }
        compute(in,i+1,nums);//not include
        in.push_back(nums[i]);//include
        compute(in,i+1,nums);
        in.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        //vector<vector<int>> result;
        vector<int> in;
        compute(in,0,nums);
        return result;
    }
};
