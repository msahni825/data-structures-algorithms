class Solution {
public:
    vector<vector<int>> res;
    void solve(int n, int index, vector<int> curr, int k, int sum){
        if(curr.size()==k){
            if(sum==n){
                res.push_back(curr);
            }
            return;
        }
        //backtracking
        for(int i=index;i<10;i++){//use digits from 1-9
            curr.push_back(i);
            solve(n,i+1,curr,k,sum+i);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
       
        solve(n,1,curr,k,0);
        return res;
    }
};
