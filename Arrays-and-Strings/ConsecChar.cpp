class Solution {
public:
    int maxPower(string s) {
        int ans=1;
        int power=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){//i=1
                ans++;//ans=2
                power=max(ans,power);//power=2
            }
            else{
                ans=1;
            }
        }
        return power;
    }
};
/*
||
leetcode
*/
