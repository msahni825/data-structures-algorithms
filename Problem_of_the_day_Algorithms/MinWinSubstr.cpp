class Solution {
public:
    string minWindow(string s, string t) {
        string result="";
        int m=s.length();
        int n=t.length();
        if(s==t){
            return s;
        }
        if(m<n){
            return "";
        }
        vector<int> letterCount(128,0);
        int left=0;
        int count=0;
        int min_left=-1;
        int min_len=s.size()+1;
        for(auto ch:t){
            letterCount[ch]++;
        }
        for(int i=0;i<m;++i){
            if(--letterCount[s[i]]>=0){
                ++count;
            }
            while(count==t.size()){
                if(min_len>i-left+1){
                    min_len=i-left+1;
                    min_left=left;
                }
                if(++letterCount[s[left]]>0){
                    --count;
                }
                ++left;
            }
        }
        // unordered_map<char,int> mp;
        // for(auto i:t){
        //     mp[t[i]]++;
        // }
        // int count=mp.size();
        // int temp=INT_MAX;
        // int i=0;
        // int j=0;
        // while(j<s.length()){
        //     if(mp.find(s[j])!=mp.end()){
        //         //if not present then sub
        //         mp[s[j]]--;
        //     }
        //     if(mp[s[j]]==0){
        //         count--;
        //     }
        // }
        // while(count==0){
        //     if(j-i+1<temp){
        //         temp=min(temp,j-i+1);
        //         result=s.substr(i,j-i+1);
        //     }
        //     if(mp.find(s[i])!=mp.end()){
        //         mp[s[i]]++;
        //         if(mp[s[i]]==1){
        //             count++;
        //         }
        //     }
        //     i++;
        // }
        // j++;
        // //unordered map: freq of letters in string t
        // //sliding window: 
        return min_left == -1 ? "" : s.substr(min_left,min_len);
    }
};
