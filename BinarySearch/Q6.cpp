class Solution {
public:
    
    int findMin(vector<int>& nums) {
        //min element is finding the # of times the array is rotated
        int n=nums.size();
        int low=0;
        int high=n-1;
        int result=INT_MAX;
        
        if(n==1){
            return nums[0];
        }
        if(nums[0]<nums[n-1]){
            return nums[0]; //sorted array
        }
        while(low<=high){
            int mid=low+((high-low)/2);
        
            if(nums[mid]>=nums[0]){
                low=mid+1;
            }
            else{
                result=min(result,nums[mid]);
                high=mid-1;
            }
        }
//         int prev=nums[(mid+1)%n];
//         int next=nums[(mid+n-1)%n];
//         if(nums[mid]<prev && nums[mid]<next){
//             result=nums[mid];
//         }
//         else if(nums[mid]>nums[low] && nums[mid]>nums[high]){
//             return binarySearch(nums,mid+1,high);
//         }
//         else if(nums[mid]>nums[low] && nums[mid]<nums[high]){
//             return binarySearch(nums,low,mid-1);
//         }
        return result;
    }
};
