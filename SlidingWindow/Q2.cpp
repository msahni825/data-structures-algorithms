class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sz=nums.size();
        int sum=0;
        int minc=INT_MAX;
        int t=target;
        //O(N^2): time
        while(j<sz){
            sum+=nums[j];
            if(sum>=t){
                while(i<=j){
                    if(sum-nums[i]>=t){
                        sum-=nums[i];
                        i++;
                    }
                    else{
                        break;
                    }
                }
                minc=min(minc,j-i+1);
            }
            j++;
        }
        if(minc==INT_MAX){
            return 0;
        }
        return minc;
    }
};
