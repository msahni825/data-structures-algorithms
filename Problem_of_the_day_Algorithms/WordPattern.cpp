class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char,string> char_mp;  //a->dog
        unordered_map<string,char> word_mp;  //dog->a
        
        stringstream s(str);
        string word;
        int n=pattern.size();
        int i=0;
        
        //A new word separated by space
        while(s >> word){
            if(i==n){
                //we have more words then # of characters
                return false;
            }
            char c=pattern[i];
            if(char_mp.count(c) != word_mp.count(word)){
                return false;
            }
            if(char_mp.count(c)){
                if((word_mp[word]!=c) || (char_mp[c]!=word)){
                    return false;
                }
            }
                else
                {
                    char_mp.insert({c,word});
                    word_mp.insert({word,c});
                }
            i++;
        }
        return i==n;
    }
};
