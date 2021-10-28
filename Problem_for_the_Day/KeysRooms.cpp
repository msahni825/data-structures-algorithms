class Solution {
public:
    void dfs(vector<vector<int>>& rooms, vector<int>& v, int node){
        v[node]=1;
        for(auto it:rooms[node]){
            if(v[it]==0){
                dfs(rooms,v,it);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
     int n=rooms.size();
     vector<int> v(n,0);
     dfs(rooms,v,0);
     for(auto it:v){
         if(it==0){
             return false;
         }
     }
        return true;
    }
};
