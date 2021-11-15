class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        //multiple of n or 1
        int ans=0;
        int pos=0;
        
        int n=nums.size();
        vector<vector<int>> vec(n);
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[i] % nums[j] == 0){
                    if(vec[i].size()<vec[j].size()+1){
                        vector<int> res=vec[j];
                        res.push_back(nums[j]);
                        vec[i]=res;
                    }
                }   
            }
            if(vec[i].size()>ans){
                ans=vec[i].size();
                pos=i;
            }   
        }
        vector<int> result=vec[pos];
        result.push_back(nums[pos]);
        
        return result;
    }
};
