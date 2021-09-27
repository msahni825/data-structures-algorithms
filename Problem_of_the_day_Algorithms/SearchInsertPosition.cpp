class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //binary search variant since sorted array
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(low+(high-low)/2);
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        // if(target>nums[mid]){
        //     return mid+1;
        // }
        // else{
        //     return mid-1;
        // }
    }
};
