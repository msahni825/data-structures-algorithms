class Solution {
public:
    string longestPalindrome(string s) {
        string result;
        int n=s.size();
        //vector<int> dp(n+1,0);
        if(n==1){
            return s;
        }
        if(n==0){
            return "";
        }
        int min_start=0;
        int max_len=1;
        for(int i=0;i<n;){
           if(n-i<=max_len/2){
               break;
           }
            int j=i;
            int k=i;
            while(k<n-1 && s[k+1]==s[k]){
                ++k;
            }
            i=k+1;
            while((k<n-1) && (j>0) && (s[k+1]==s[j-1])){
                ++k;
                --j;
            }
            int new_len=k-j+1;
            if(new_len>max_len){
                min_start=j;
                max_len=new_len;
            }
        }
        return s.substr(min_start,max_len);
    }
};
