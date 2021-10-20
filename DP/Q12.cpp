class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        //variation of kadane's algo
        int max_sum=nums[0];
        int min_sum=nums[0];
        int curr_sum=nums[0];
        int prev_min=nums[0];
        int prev_max=nums[0];
        
        int n=nums.size();
        for(int i=1;i<n;i++){
            curr_sum=curr_sum+nums[i];
            prev_max=max(nums[i],prev_max+nums[i]);
            max_sum=max(prev_max,max_sum);
            
            prev_min=min(prev_min+nums[i],nums[i]);
            min_sum=min(prev_min,min_sum);
        }
        return curr_sum==min_sum ? max_sum : max(max_sum,curr_sum-min_sum);
    }
};
