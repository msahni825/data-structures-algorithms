class Solution {
public:
    bool isVow(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    
    int countVowelSubstrings(string word) {
        //len-5+1
        int n=word.size();
        int c=0;
        
        for(int j=0;j<n;j++){
            unordered_set<char> vow;
             for(int i=j;i<n;i++){
                if(!isVow(word[i])){
                    break;
                }
                vow.insert(word[i]);
                if(vow.size()==5){
                    c++;
                } 
            }
        }
       
        return c;
    }
};
