class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,1);
        //prefix products
        for(int i=1;i<n;i++){
            result[i]=result[i-1]*nums[i-1];
        }
        int product=1;
        //postfix products
        for(int j=n-2;j>=0;j--){
            product=product*nums[j+1];
            result[j]*=product;
        }
        return result;
    }
};
