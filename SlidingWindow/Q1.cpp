class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int res=0;
        int prod=1;
        int sz=nums.size();
        if(k<=1){
            return 0;
        }
        while(j<sz){
            prod=prod*nums[j];
            while(prod>=k){
                prod=prod/nums[i];
                i++;
            }
            res+=j-i+1;
            j++;    
        }
        return res;
    }
};
