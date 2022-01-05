class Solution {
public:
    bool isPalindrome(int start, int end, string &s){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    
    void solve(int index, int n, string s, vector<string> &way, vector<vector<string>> &result){
        if(index==n){
            result.push_back(way);
            return;
        }
        for(int i=index;i<n;i++){
            if(s[i]==s[index] && isPalindrome(index,i,s)){
                //backtracking
                way.push_back(s.substr(index,i-index+1));
                solve(i+1,n,s,way,result);
                way.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> way;
        
        int len=s.size();
        solve(0,len,s,way,ans);
        return ans;
    }
};
