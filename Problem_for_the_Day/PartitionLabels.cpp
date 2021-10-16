class Solution {
public:
    vector<int> partitionLabels(string s) {
      //take a map that stores char and last position of each character in string( and ~freq)
        /*now traverse the map, using two pointer such that when repetitive char appears we 
        consider it part of a single partition, else add it new partition*/ 
        vector<int> sz;
        int n=s.length();
        int d=0;
        unordered_map<char,int> mp;
        unordered_map<char,int>:: iterator it;
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
           // d++;
        }
        for(it=mp.begin();it!=mp.end();it++){
            cout<<it->first<<" "<<it->second<<"\n";
        }
       // cout<<d<<" ";
        int visited=0;
        int i=0;
        while(i<n){
            int currLimit=mp[s[i]];
            while(i<=currLimit){
                currLimit=max(currLimit,mp[s[i]]);
                i++;
            }
            sz.push_back(i-visited);
            visited=i;
        }
       return sz; 
    }
// };
// class Solution {
// public:
//     vector<int> partitionLabels(string S) {
//         if(S.empty()){
//             return vector<int>();
//         }
//         vector<int> result;
//         int charLastIndexMap[26]={0};
//         for(int i=0;i<S.size();i++){
//             charLastIndexMap[S[i]-'a']=i;
//         }
//         int startIndex=0;
//         int endIndex=0;
//         for(int i=0;i<S.size();i++){
//             if(i==startIndex){
//                 endIndex=charLastIndexMap[S[i]-'a'];
//             }
//             if(i==endIndex){
//                 result.push_back(endIndex-startIndex+1);
//                 startIndex=endIndex+1;
//             }
//             else if(i<endIndex){
//                 endIndex=max(charLastIndexMap[S[i]-'a'],endIndex);
//             }
//         }
//         return result;
//     }
// };
