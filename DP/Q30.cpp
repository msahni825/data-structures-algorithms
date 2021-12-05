class Solution {
public:
    int longestCommonSubseq(string s1, string s2){
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j-1],max(dp[i][j-1],dp[i-1][j]));
                }
            }
        }
        return dp[n][m];
    }
    int minDistance(string word1, string word2) {
        int len=longestCommonSubseq(word1,word2);
        int w1=word1.size();
        int w2=word2.size();
        return (w1-len) + (w2-len);
        
        // map<char,int> mp1;
        // for(auto w1:word1){
        //     mp1[w1]++;
        // }
        // for(auto w2:word2){
        //     if(mp1.find(w2)!=mp1.end()){
        //         mp1[w2]--;
        //     }
        //     else{
        //         mp1[w2]++;
        //     }
        // }
        // int ans=0;
        // for(auto w:mp1){
        //     cout<<w.first<<" "<<w.second<<"\n";
        //     if(w.second>0){
        //         ans+=w.second;
        //     }
        // }
        // return ans;
    }
};
/*
l->1
e->2(-1)
#t->1(-1)
#c->1(-1)
#o->1(-1)
d->1
e->1

l e e t c o d e 
    e t c o 
*/
