class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sort(strs.begin(),strs.end());
        vector<vector<string>> result;
        unordered_map<string,vector<string>> mp1;
        
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp1[strs[i]].push_back(temp);
        }
        for(auto it=mp1.begin();it!=mp1.end();it++){
            result.push_back(it->second);
        }
        return result;
    }
};
