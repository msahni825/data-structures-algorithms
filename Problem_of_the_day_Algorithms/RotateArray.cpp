class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int temp,temp1;
        // int s=1;
        // while(s--){
        //    temp=nums[nums.size()-1];
        //    temp1=nums[0];
        //    nums[0]=temp;
        //    nums[1]=temp1; 
        //    for(int i=2;i<nums.size()-1;i++){
        //        nums[i+1]=nums[i];
        //    } 
        // }
        if(k<0){
            k=k+nums.size();
        }
        if(k==nums.size()){
            return;
        }
        if(k>nums.size()){
            k=k%nums.size();
        }
        int j=nums.size()-k;
        vector<int> ans;
        for(int i=nums.size()-1;i>=j;i--){
            ans.push_back(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<j;i++){
            ans.push_back(nums[i]);
        }
        nums=ans;
    }
};
