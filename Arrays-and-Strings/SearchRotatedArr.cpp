class Solution {
public:
    bool search(vector<int>& nums, int target) {
        /* [1 0 1 1 1], target=0 
          => high=4, low=0, mid=2, nums[mid]=1            
        */
        int high=nums.size()-1; 
        int low=0;
        while(high>=low){//4>0; 1>0
            int mid=low+((high-low)/2);//2, 0
            cout<<"mid:"<<mid<<"\n";
            if(nums[mid]==target){
                return true;
            }
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){//mid=0
                while(low<=high && nums[low]==nums[mid] && nums[high]==nums[mid]){
                    //low=1, high=3
                    low++;
                    high--;
                }
            }
            else if(nums[low]<=nums[mid]){//
                if(nums[low]<=target && target<=nums[mid])
                {
                    //(nums[1])<=0 and 0<=nums[2]
                    //nums[0]<=0 and 0<=nums[0]
                    high=mid-1; // high=mid-1=1; high=mid-1
                }
                else{
                    low=mid+1;
                }
            }
            else{//nums[low]>nums[mid]
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        } 
        return false;
    }
};
/*
target=3
0 1 2 3 4 5 6
2 5 6 0 0 1 2

low=0
high=6
mid=0+(6-0)/2=3
*/
