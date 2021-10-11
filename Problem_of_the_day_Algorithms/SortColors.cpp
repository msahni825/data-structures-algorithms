class Solution {
public:
    void sortColors(vector<int>& nums) {
        //O(N), O(1)
        //zero_count, one_count, two_count
        int l=0;    //low, represents 0
        int m=0;    //mid, represents 1
        int n=nums.size()-1;
        while(m<=n){
            if(nums[m]==1){
                m++;
            }
            else if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else{
                swap(nums[n],nums[m]);
                n--;
            }
        }
    }
};
