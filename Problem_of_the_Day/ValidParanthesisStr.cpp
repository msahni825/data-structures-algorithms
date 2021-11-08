class Solution {
public:
    bool checkValidString(string s) {
        stack<int> star;
        stack<int> bracket;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                bracket.push(i);
            }
            else if(ch=='*'){
                star.push(i);
            }
            else if(ch==')'){
                if(bracket.empty() && star.empty()){
                    return false;
                }
                if(bracket.empty()){
                    star.pop();
                }
                else{
                    bracket.pop();
                }
            }
        }
        while(bracket.empty()==false){
            if(!star.empty() && bracket.top()<star.top()){
                bracket.pop();
                star.pop();
            }
            else{
                return false;
            }
        }
        return bracket.empty();
    }
};
