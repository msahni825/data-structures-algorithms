class Solution {
public:
    int firstUniqChar(string s) {
       // unordered_map<pair<char,int>,int> freq;
       // unordered_map<pair<char,int>,int>::iterator it;
        unordered_map<char,int> freq;
        int sz=s.size();
        for(int i=0;i<sz;i++){
            freq[s[i]]++;
        }
        for(int i=0;i<sz;i++){
            if(freq[s[i]]==1){
                return i;
            }
        }
        return -1;
        
    }
};
