class Solution {
    void reverseWord(string &s, int start, int end){
        int mid=(start+end)/2;
        for(int i=start;i<=mid;i++,end--){
            swap(s[i],s[end]);
        }
    }
public:
    string reverseWords(string s) {
        int n=s.size();
        for(int i=0;i<n;){
            int start=i;
            while(i<n && s[i]!=' '){
               i++;
            }
            reverseWord(s,start,i-1);
            i++;
        }
        return s;
    }
};
