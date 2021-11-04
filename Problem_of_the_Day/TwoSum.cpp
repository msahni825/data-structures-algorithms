class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> idx;
        for(int i=0;i<n;i++){
            int difference=target-nums[i];
            if(idx.find(difference)!=idx.end()){
                return {i,idx[difference]};
            }
            idx[nums[i]]=i;
        }
        return {};       
    }
};
