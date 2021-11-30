class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int> stk;
            
        for(int i=0;i<n;i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int val1=stk.top();
                stk.pop();
                int val2=stk.top();
                stk.pop();
                if(tokens[i]=="+"){
                    stk.push(val1+val2);
                }
                else if(tokens[i]=="-"){
                    stk.push(val2-val1);
                }
                else if(tokens[i]=="*"){
                    stk.push(val1*val2);
                }
                else{
                    stk.push(val2/val1);
                }
            }
            else{
                stk.push(stoi(tokens[i]));
            }
        }
        return stk.top();
    }
};
