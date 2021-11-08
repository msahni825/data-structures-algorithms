class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> magazine_mp;
       
        for(auto i:magazine){
            magazine_mp[i]++;
        } 
        for(auto j:ransomNote){
            if(magazine_mp[j]>0){
                magazine_mp[j]--;   
            }
            else{
                return false;
            }
        } 
        return true;
        /*
        a->2    a->2
        b->1
        */
    }
};
