class Solution {
public:
    unordered_map<string,int> freq;
    int dp[301][301];
    
    bool solve(string &s, int n, int start){
        if(start==n){
            return true;
        }
        if(dp[start][n]!=-1){
            return dp[start][n];
        }
        for(int i=start;i<n;i++){
            string str=s.substr(start,i-start+1);
            if(freq.find(str)!=freq.end()){
                if(solve(s,n,i+1)){
                    return dp[start][n]=true;
                }
            }
        }
        return dp[start][n]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        for(auto &w:wordDict){
            freq[w]++;
        }
        int n=s.size();
        return solve(s,n,0);
        // int len=s.size();
        // for(auto ch:s){
        //     freq[ch]++;
        // }
        // for(auto w:wordDict){a
        //     for(int i=0;i<w.size();i++){
        //         if(freq.find(w[i])!=freq.end() && len>0){
        //             freq[w[i]]--;
        //             len--;
        //         }
        //         else{
        //             cout<<w[i]<<" ";
        //         }
        //     }
        // }
        // for(auto w:freq){
        //     cout<<w.second<<" ";
        //     if(w.second<0){
        //         return false;
        //     }
        // }
        return true;
    }
};
