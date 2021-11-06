class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sz=nums.size();
        long long remove_dup=0;
        
        for(auto i:nums){
            remove_dup^=i;
        }
        long long sb=(remove_dup)&(remove_dup-1);
        sb^=remove_dup;
        
        int one=0;
        int zero=0;
        for(auto i:nums){
            if(i&sb){
                one^=i;
            }
            else{
                zero^=i;
            }
        }
        vector<int> answer={one,zero};
        return answer;
    }
};
