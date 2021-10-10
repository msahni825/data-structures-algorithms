class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        if(n==0 || n==1 || n==2){
            return {};
        }
        sort(nums.begin(),nums.end());
        int low;
        int high;
        int sum;
        for(int i=0;i<n-2;i++){
            if(i==0 || i>0 && nums[i]!=nums[i-1]){
                low=i+1;
                high=n-1;
                sum=0-nums[i];
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        result.push_back({nums[low],nums[high],nums[i]});
                        while(low<high && nums[low]==nums[low+1]){
                            low++;
                        }
                        while(low<high && nums[high]==nums[high-1]){
                            high--;
                        }
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        return result;
    }
};
