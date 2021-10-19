//w/o DP
class Solution {
public:
    int jump(vector<int>& nums) {
        int j=0;
        int reach=0;
        int curr_reach=0;
        int n=nums.size();
        if(n==1){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(i>curr_reach){
                return -1;
            }
            reach=max(reach,i+nums[i]);    
            if(i==curr_reach){
                j++;
                curr_reach=reach;
            }
        }
        return j;
    }
};
