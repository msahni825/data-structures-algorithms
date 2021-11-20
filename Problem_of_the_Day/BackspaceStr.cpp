class Solution {
public:
    bool backspaceCompare(string s, string t) {     
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && i!=0){
                s.erase(i-1,2);
                i=i-2;
            }        
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && i!=0){
                t.erase(i-1,2);
                i=i-2;
            }
        }
        if(s[0]=='#'){
            s.erase(0,1);
        }
        if(t[0]=='#'){
            t.erase(0,1);
        }
        return s==t;
    }
};
