bool solve(vector<int>& nums) {
    //edge case #1
    if(nums.size()==0 || nums.size()==1){
        return true;
    }
    //edge case #2
    if(nums.size()==2 && nums[0]==nums[1]){
        return false;
    }
    //loop starts from i=3
    for (int i = 0; i < nums.size() -2; i++) {
        //edge case #3
        if (nums[i] == nums[i + 1] || nums[i+1]==nums[i+2]) {
            return false;
        }
        //!strictly increasing
        else if(nums[i]>nums[i+1] && nums[i+1]<nums[i+2]){
            return false;
        }
        //!strictly decreasing
        else if(nums[i]<nums[i+1] && nums[i+1]>nums[i+2]){
            return false;
        }
    }
    return true;
}
