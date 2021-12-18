class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string s=to_string(n);
        int len=s.size();
        int ans=0;
        int choices=digits.size();
        
        for(int i=1;i<len;i++){
            ans+=pow(choices,i);
        }
        bool has_same_value;
        
        for(int i=0;i<len;i++){
            has_same_value=false;
            for(string x:digits){
                if(x[0]<s[i]){
                    ans+=pow(choices,len-i-1);
                }        
                if(x[0]==s[i]){
                    has_same_value=true;
                }
            }
            if(!has_same_value){
                break;
            }
        }
        if(has_same_value)
            return ans+1;
        else
            return ans;
    }
};
