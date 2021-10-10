class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //O(N), O(1)
        int presence_count=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(!count){
                presence_count=nums[i];
            }
            if(nums[i]==presence_count){
                count++;
            }
            else{
                count--;
            }
        }
        return presence_count;
    }
};
