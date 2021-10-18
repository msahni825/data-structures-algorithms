class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> answer;
        unordered_map<string,int> mp;
        unordered_map<string,int>::iterator it;
        if(s.size()<10){
            return {};
        }
        //DNA seq is 10-letter-long sequence
        for(int i=0;i<s.size()-9;i++){
            mp[s.substr(i,10)]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>1){
                answer.push_back(it->first);
            }
        }
        cout<<mp.size()<<" ";
        return answer;
    }
};
