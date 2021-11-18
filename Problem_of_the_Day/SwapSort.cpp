class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //time:O(N) |   space:O(1)
        //inplace swap and then traverse the array
        vector<int> res;
        int n=nums.size();
        int i=0;
        while(i<n){
           // for(int i=1;i<n;i++){
            if(i+1 != nums[i]){
                int index=nums[i]-1;
                if(nums[index]==nums[i] || i==index){
                    i++;
                }
                else{
                    swap(nums[index],nums[i]);
                }
            }
            else{
                i++;
            }
            //}
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                res.push_back(i+1);
            }
       }
        return res;
 };
