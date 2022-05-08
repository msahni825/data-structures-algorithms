class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        // if(n==1 && nums[0]==target){//edge case 1
        //     return 0;
        // }
        // if(n==2){
        //     if(nums[0]==target){//edge case 2
        //         return 0;
        //     }
        //     else if(nums[1]==target){
        //         return 1;
        //     }
        // }
        while(low<high){
            int mid = low + floor((high - low + 1)/2);
            
            if(target < nums[mid]){
                high = mid -1;
            }
            else{
                low = mid;
            }
        }
        return nums[low] == target ? low:-1;
    }
};
