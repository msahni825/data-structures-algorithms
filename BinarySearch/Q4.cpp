int search(vector<int>& nums, int target) {
       // mid=start+((end-start)/2);  to avoid integer overflow
        /*# of times an array is rotated:
        (index of min element(both left and right(neighbours) are greater than the element)) => 
            now apply BINARY SEARCH in both the sorted arrays*/
        
        int n=nums.size();
        int result=-1;
        int low=0;
        int high=n-1;
        int pivot=nums[0];
        while(low<=high){
            int mid=low+((high-low)/2);
            if(target==nums[mid]){
                return mid;
            }
            if(nums[mid]>=pivot && target<pivot){
                low=mid+1;
            }
            else if(nums[mid]<pivot && target>=pivot){
                high=mid-1;
            }
            else{
                if(target<nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return -1;
    }
    };
