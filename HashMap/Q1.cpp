class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        int flag=0;
        int n=words.size();
        unordered_map<char,int> mp1;
        for(auto ch:chars){
            mp1[ch]++;
        }
        unordered_map<char,int> mp2=mp1;
        for(auto s:words){
            for(int i=0;i<s.size();i++){
                if(mp2.find(s[i])!=mp2.end() && mp2[s[i]]!=0){
                    mp2[s[i]]--;
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                res+=s.size();    
            } 
            else{
                flag=0;
                
            }
            mp2=mp1;
            
        }
        return res;
    }
};
