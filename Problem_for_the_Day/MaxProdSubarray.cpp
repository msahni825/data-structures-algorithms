class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=1;
        int n=nums.size();
        int max_prod_LR=INT_MIN;
        
        for(int i=0;i<n;i++){
            prod=prod*nums[i];
            max_prod_LR=max(max_prod_LR,prod);
            if(prod==0){
                prod=1;
            }  
        }
            prod=1;
            int max_prod_RL=INT_MIN;
            for(int i=n-1;i>=0;i--){
                prod=prod*nums[i];
                max_prod_RL=max(max_prod_RL,prod);
                if(prod==0){
                    prod=1;
                }
            }
            return max(max_prod_LR,max_prod_RL);
         }
        // int max_prod=1;
        // int n_max_prod=1;
        // int n=nums.size();
        // int n_count=0; //# of negative elements count
        // if(n==1){
        //     return nums[0];
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]<0){
        //         n_count++;
        //     }    
        //     max_prod=max_prod*nums[i];
        // }
        // cout<<n_count<<" ";
        // if(n_count%2==0){
        //     return max_prod;   
        // }
        // else{
        //     for(int i=0;i<n;i++){
        //         if(nums[i]>0){
        //             n_max_prod=n_max_prod*nums[i];
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return n_max_prod;
};
