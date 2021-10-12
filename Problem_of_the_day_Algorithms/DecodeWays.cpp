class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        string str=s;
        if(s[0]=='0'){
            return 0;
        }
        int count[n+1];
        count[0]=1;
        count[1]=1;
        //top-down approach
        for(int i=2;i<=n;i++){
            count[i]=0;
            if(str[i-1]>'0'){
                count[i]=count[i-1];
            }
            if(str[i-2]=='1' || str[i-2]=='2' && str[i-1]<'7'){
                count[i]+=count[i-2];
            }
        }
        return count[n];
    }
};
