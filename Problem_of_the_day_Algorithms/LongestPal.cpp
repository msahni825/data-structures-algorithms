class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
        bool flag=false;
        int oddcount=0;
        unordered_map<char,int> mp;
        unordered_map<char,int>:: iterator it;
        if(s.length()==1){
            return 1;
        }
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second%2==0){
                //cout<<it->second<<"\n";
                count+=it->second;
            }
            else{
                count+=it->second-1;
                flag=true;
            }
        }
        //cout<<"odd-count: "<<oddcount<<"\n";
        if(flag){
            count=count+1;
        }
        return count;
    }
};
