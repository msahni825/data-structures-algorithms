class Solution {
public:
//     int computeXOR(vector<int>& input){
//         int xor_value;
//         for(int i=0;i<input.size();i++){
//             xor_value^=input[i];
//         }
//         return xor_value;
//     }
//     vector<vector<int>> computeSubsets(vector<int>& nums, int i, int n, vector<vector<int>>& result, int j){
//         if(i==n){
//             int index=0;
//             while(index<j){
//                 result.push_back(result[index]);
//                 ++index;
//             }
//             return result;
//         }
//         computeSubsets(nums,i+1,n,result,j);
//         result[j]=nums[i];
//         computeSubsets(nums,i+1,n,result,j+1);
//         return result;
//     }
    
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        
        function<void(int, int)> backtracking = [&](int index, int currentXOR) -> void {
            if(index == n) return;
            
            for(int i = index; i < n; i++){
                res += (currentXOR ^ nums[i]);
                backtracking(i + 1, (currentXOR ^ nums[i]));
            }
        };
        
        backtracking(0,0);
        return res;
//         //compute all subsets of array
//         result=computeSubsets(nums,0,n,result,0);
        
//         //compute xor of all subsets 
//         for(int i=0;i<result.size();i++){
//             res+=computeXOR(result[i]);
//         }
        
//         for(int i=0;i<nums.size();i++){
//             //adding sum of all array elements to res value
//             res+=nums[i];
//         }
//        return res;
    }
};
