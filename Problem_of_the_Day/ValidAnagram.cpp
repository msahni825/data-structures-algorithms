class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        if(s.size()!=t.size()){
            return false;
        }
        for(auto i:s){
            mp[i]++;
        }
        for(auto j:t){
            if(mp[j]>0){
                mp[j]--;
            }
        }
        cout<<mp.size();
        for(auto i:mp){
            if(i.second!=0){
                return false;
            }
        }
        /*
         a->2
         n->0
         g->1
         r->1
         m->1
        */
       // sort(s.begin(),s.end());
       // sort(t.begin(),t.end());
       //  if(s==t){
       //      return true;
       //  }
        return true;
    }
};
