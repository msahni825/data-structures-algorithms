class Solution {
public:
    bool static compare(string a, string b){
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return to_string(nums[0]);
        }
        vector<string> res;
        for(int x:nums){
            res.push_back(to_string(x));
        }
        sort(res.begin(),res.end(),compare);
        string ans="";
        for(string str:res){
            ans+=str;
        }
            int i=0;
            while(i+1 < ans.length() && ans[i]=='0'){
                i++;
            }
            return ans.substr(i);       
    }
};
