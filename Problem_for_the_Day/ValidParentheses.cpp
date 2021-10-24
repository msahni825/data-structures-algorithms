class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stk;
        // int open_c=0;
        // int close_c=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stk.push(i);
               // close_c++;
            }
            else if(s[i]==')'){
                //stk.pop();
                //open_c++;
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    s[i]='*';
                }
            }
        }
      while(!stk.empty()){
          s[stk.top()]='*';
          stk.pop();
      }
        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        return s;
    }
};
