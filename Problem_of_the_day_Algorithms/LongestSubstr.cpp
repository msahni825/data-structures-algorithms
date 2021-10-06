class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int c=0,i=0,j=0;
        int max_val=-1;
        unordered_map<char,int> um;
       // set<int> str;
        if(s.size()==0){
            max_val=0;
        }
        if(s.size()==1){
            max_val=1;
        }
        while(j<s.size()){
            um[s[j]]++;
            if(um[s[j]]==2){
                max_val=max(max_val,j-i);
                for(;i<j;i++){
                    if(s[j]==s[i]){
                        um[s[i]]--;
                        i++;
                        break;
                    }
                    um[s[i]]--;
                }
            }
            j++;
        }
        max_val=max(max_val,j-i);
        // else{
        //     for(int i=1;i<s.size();i++){
        //         if(s[i]!=s[i-1]){
        //             str.insert(s[i-1]);
        //         }
        //     }
        // }
        return max_val;
    }
};
