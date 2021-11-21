class Solution {
public:
    int countGoodSubstrings(string s) {
        int len=s.size();
        if(len<3){
            return 0;
        }
        unordered_map<char,int> mp;
        for(int i=0;i<3;i++){
            mp[s[i]]++;
        }
        int i=0;
        int j=2;
        int sum=0;
        while(j<len){
            if(mp.size()==3){
                sum++;
            }
            if(mp[s[i]]==1){
                mp.erase(s[i]);
            }
            else{
                mp[s[i]]--;
            }
            mp[s[j+1]]++;
            i++;
            j++;
        }
        return sum;
    }
};
