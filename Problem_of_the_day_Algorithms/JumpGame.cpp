class Solution {
public:
    bool canJump(vector<int>& nums) {
        //vector<int> steps;
        int n=nums.size();
        int reach=0;
        if(n==1){
            return true;
        }
        for(int i=0;i<n;i++){
            reach=max(reach,i+nums[i]);
            if(reach==i){
                return false;
            }
            else{
                if(reach>=n){
                    return true;
                }
            }
        }
        return true;
    }
};
