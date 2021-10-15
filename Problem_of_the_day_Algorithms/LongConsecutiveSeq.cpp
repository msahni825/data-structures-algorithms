class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s({nums.begin(),nums.end()});
        int n=nums.size();
        int longest=0;
        for(int num:s){
            //checking if any ele consecutive to num is present in s or not?
            if(!s.count(num-1)){
                int curr=1;
                int c_num=num;
                while(s.count(c_num+1)){
                    curr++;
                    c_num++;
                }
                longest=max(curr,longest);
                cout<<curr<<" ";
            }
        }
        return longest;
    }
};
