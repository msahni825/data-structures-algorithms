class Solution {
public:
    
    int findFirst(vector<int>& nums, int target, int n){
        int first=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                first=mid;
                high=mid-1;
                //low=mid+1;
            }
        }
        return first;
    }
    
    int findSecond(vector<int>& nums, int target, int n){
        int second=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                second=mid;
                low=mid+1;
                //high=mid-1;
            }
        }
        return second;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int n=nums.size();
        
        int f=findFirst(nums,target,n);
        int s=findSecond(nums,target,n);
        
        res.push_back(f);
        res.push_back(s);
        
        return res; 
       
    }
};
