class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string numToLetters[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        
        for(char ch:digits){  //2(abc), 3(def)
            string letters=numToLetters[ch-'0'];//convert digit to int(index)  |    abc
            int size=ans.size();
            for(int i=0;i<size;i++){
                string temp=ans[i]; //temp=abc
                cout<<"temp: "<<temp<<"\n";
                ans[i]+=letters[0]; //ans[0]=letters[0] | ans[0]=a
                for(int j=1;j<letters.size();j++){
                   // cout<<"letters[j]: "<<letters[j]<<"\n";
                    ans.push_back(temp+letters[j]); //a+letters[1]
                }
            }
            if(size==0){
                for(char c:letters){
                    string temp="";
                    ans.push_back(temp+c); //ans = abc
                }
            }
        }
        return ans;
    }
};
/*
2(abc)3(def)
ad,ae,af,bd,be,bf,cd,ce,cf

when trials come things that are important becomes really clear :)
*/
