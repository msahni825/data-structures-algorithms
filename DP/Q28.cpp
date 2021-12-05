class Solution {
public:
    int compute_mindistance(const string &word1, const string &word2, vector<vector<int>> &dp, int i=0, int j=0, string new_word=""){
        
        if(j==word2.size()){
            return word1.size()-i;
        }
        if(i==word1.size()){
            return word2.size()-j;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(word1[i]==word2[j]){
            return dp[i][j]=compute_mindistance(word1,word2,dp,i+1,j+1,new_word+word1[i]);
        }
        else{
            int _insert=compute_mindistance(word1,word2,dp,i,j+1,new_word+word2[j]);
            int _delete=compute_mindistance(word1,word2,dp,i+1,j,new_word);
            int _replace=compute_mindistance(word1,word2,dp,i+1,j+1,new_word+word2[j]);
            return dp[i][j]=1+min(_insert,min(_delete,_replace));
        }
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(), vector<int>(word2.size(),-1));
        return compute_mindistance(word1,word2,dp);
    }
};
