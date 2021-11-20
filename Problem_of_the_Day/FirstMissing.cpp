class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //Time: O(n) | Space:O(1)
        int sz=nums.size();
        int n=0;
        
        for(int i=0;i<sz;i++){
            if(nums[i]>0){
                nums[n]=nums[i];
                n++;
            }
        }
        for(int i=0;i<n;i++){
            if(abs(nums[i])<=sz && nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]*=(-1);
            }
        }
        for(int i=1;i<=n;i++){
            if(nums[i-1]>0){
                return i;
            }
        }
        return n+1;
    }
};
