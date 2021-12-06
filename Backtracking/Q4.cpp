class Solution {
public:
    vector<string> result;
    void compute(string &curr, int open, int n){
        if(n==0){
            if(open>0){
                for(int i=0;i<open;i++){
                    curr+=")";
                }
            }
            result.push_back(curr);
        }
        else{
            //adding new paranthesis
            string curr_new = curr + "(";
            compute(curr_new,open+1,n-1);
            //close existed paranthesis
            if(open>0){
                curr_new=curr+")";
                compute(curr_new,open-1,n);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        //backtracking
        string curr="";
        compute(curr,0,n);
        return result;
    }
};
