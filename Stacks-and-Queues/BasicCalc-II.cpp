class Solution {
public:
    int calculate(string s) {
        char op='+';
        vector<int> stk;
        int curr=0;
        
        for(int i=0;i<s.size();++i){
            if(isdigit(s[i])){
                curr=curr*10+(s[i]-'0');
            }
            if(i==s.size()-1 || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                if(op=='+')
                    stk.push_back(curr);
                else if(op=='-')
                    stk.push_back((-curr));
                else if(op=='*'){
                    int num=stk.back();
                    stk.pop_back();
                    stk.push_back(num*curr); 
                }
                else if(op=='/'){
                    int num=stk.back();
                    stk.pop_back();
                    stk.push_back(num/curr);
                }
                curr=0;
                op=s[i];
            }
        }
        return accumulate(stk.begin(),stk.end(),0);
    }
};
/*
            3+2*2
1. set precedence for (+,-,*,/)
2. compute value as per precedence 
*/
