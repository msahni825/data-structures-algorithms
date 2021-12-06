class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();++i){
            /*lower bound returns the iterator to (element>=nums[i])*/
            auto p=lower_bound(ans.begin(),ans.end(),nums[i]);
            if(p!=ans.end()){
                //element found
                *p=nums[i];
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return ans.size();
    }
};
/*
i/p: [9,2,5,3,7,101,18]
o/p: [2,3,7,18] || [2,3,7,101]

1.[9]
2.[2]   2<9  (replace)
3.[2,5]
4.[2,5] 3<5 (replace)
5.[2,3]
6.[2,3,7]
7.[2,3,7,101]
8.[2,3,7,18]

TIME:O(nlgn)
SPACE:O(n)
*/
