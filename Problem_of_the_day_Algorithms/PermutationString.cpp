class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //first letter from s1 that matches s2
        if(s1.length()>s2.length()){
            return false;
        }
        vector<int> table(26,0);
        vector<int> temp(26,0);
        
        for(char c:s1){
            table[c-'a']++;
        }
        for(int j=0;j<s2.length();j++){
            if(j>=s1.length()){
                temp[s2[j-s1.length()]-'a']--;
            }
            temp[s2[j]-'a']++;
            if(table==temp){
                return true;
            }
        }
        return false;
    }
};
