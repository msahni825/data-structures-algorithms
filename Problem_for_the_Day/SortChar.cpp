class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;    
        }
        //t-> 1, r-> 1, e-> 2
        priority_queue<pair<int,char>> pq;
        for(auto i:freq){
            pq.push({i.second,i.first});
        }
        string result="";
        pair<int,char> c;
        while(!pq.empty()){
            // long long v=pq.top().first;
            // while(v--){
            //     result=result+pq.top().second;   
            // }
            c=pq.top();
            pq.pop();
            result+=string(c.first,c.second);
        }
        return result;
    }
};
