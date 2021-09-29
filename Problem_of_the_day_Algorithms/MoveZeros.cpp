class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=nums.size();
        int lastzeroidx=0;
        for(int i=0;i<s;i++){
            if(nums[i]){
                nums[lastzeroidx++]=nums[i];
            }
        }
        for(int j=lastzeroidx;j<s;j++){
            nums[j]=0;
        }
    }
};
