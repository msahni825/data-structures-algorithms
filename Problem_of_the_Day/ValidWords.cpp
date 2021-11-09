class Solution {
public:
    int maskWord(string word){
        int mask=0;
        for(auto w:word){
            mask |= (1 << w-'a');   //syntactic sugar for a = a | b; 
                                    //'|' bitwise OR '^' bitwise XOR
        }
        return mask;
    }
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        vector<int> ans;
        //use fact that puzzles[i].length is 7
        //use 'bit-masks' to represent the word and puzzle strings
        //for each puzzle (count the # of words) whose (bit-mask is sub-mask) of (puzzle's bit-mask)
        
        unordered_map<int,int> mp;
        for(auto word:words){
            mp[maskWord(word)]++;
        }        
        for(auto pz:puzzles){
            int mask=maskWord(pz);
            int submask=mask;
            int first=(1 << pz[0]-'a');
            int curr=0;
            
            while(submask){
                if(submask & first){
                    curr+=mp[submask];
                }
                submask=(submask-1) & mask;
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
