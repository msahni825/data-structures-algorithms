class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> LIS(n,1), f(n,1);
        int mx=1,ans=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    if(LIS[i]<LIS[j]+1){
                        LIS[i]=1+LIS[j];
                        f[i]=f[j];
                    }
                    else if(LIS[i]==1+LIS[j]){
                        f[i]+=f[j];
                    }
                }
            }
            mx=max(mx,LIS[i]);
        }
        for(int j=0;j<n;j++){
            if(LIS[j]==mx){
               ans+=f[j]; 
            }
        }
        return ans;
    }
};
