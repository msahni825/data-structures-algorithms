class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        //create a map, if present in mp sub from mp
        
        map<char,int> mp;
        map<char,int>::iterator it;
        
        for(int i=0;i<word1.size();i++){
            mp[word1[i]]++;
        }
        for(int j=0;j<word2.size();j++){
            mp[word2[j]]--;
        }
        for(it=mp.begin();it!=mp.end();it++){
            if(abs(it->second)>3){
                return false;
            }
        }
        return true;
    }
};
