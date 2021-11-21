class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int s_sz=s.size();
        int p_sz=p.size();
        if(s_sz<p_sz){
           return {}; 
        }
        vector<int> source(26,0), subStr(26,0);
        
        for(int i=0;i<p_sz;++i){
            source[p.at(i)-'a']++;
            subStr[s.at(i)-'a']++;
        }
        if(source==subStr){
            res.push_back(0);
        }
        for(int i=p_sz;i<s_sz;++i){
            subStr[s[i]-'a']++;
            subStr[s[i-p_sz]-'a']--;
            if(source==subStr){
                res.push_back(i-p_sz+1);
            }
        }
        return res;
    }
};
