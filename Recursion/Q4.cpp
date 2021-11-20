class Solution {
public:
    
    bool compute(string& s, string& p, int i, int j, int t[][2002]){
        if(j==p.size()){// p has ended: s must have ended with a match b/w s and t 
            return i==s.size();
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(i==s.size()){// s has ended: p could only be '*' or multiple of '*'
            return (p[j]=='*' && compute(s,p,i,j+1,t));
        }
        if(p[j]=='*'){// both string not ended, compare both the strings
            t[i][j]=compute(s,p,i+1,j,t) || compute(s,p,i,j+1,t);
            return t[i][j];
        }
        else{// p[j]='?' or p[j] is a char, if it is a char then both s and p char to be same
            bool samechar=i<s.size() && (p[j]==s[i] || p[j]=='?');
            t[i][j]=(samechar && compute(s,p,i+1,j+1,t));
            return t[i][j];
        }
    }
    bool isMatch(string s, string p) {
        int t[2002][2002];
        int i=0;
        int j=0;
        for(int c=0;c<s.size()+1;c++){
            for(int d=0;d<p.size()+1;d++){
                t[c][d]=-1;
            }
        }
        return compute(s,p,i,j,t);
    }
};
