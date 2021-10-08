class Solution {
public:
    vector<string> result;
    
    void permutations(string s, int k, string res=""){
        if(k==s.length()){
            result.push_back(res);
            return;
        }
        char c=s[k];
        if(isdigit(c)){
            permutations(s,k+1,res+c);
        }
        else{
            char ch=isupper(c)? tolower(c): toupper(c);
            permutations(s,k+1,res+c);
            permutations(s,k+1,res+ch);
        }
    }
    vector<string> letterCasePermutation(string s) {
       // string res="";
        permutations(s,0);
        return result;
    }
};
