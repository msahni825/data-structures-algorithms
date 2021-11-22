class Solution {
public:
    void dfs(vector<int> adj[],vector<bool>& v, int source){
        v[source]=1;
        for(auto x:adj[source]){
            if(v[x]==0){
                dfs(adj,v,x);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> adj[n];
        vector<bool> visited(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                ans++;
                dfs(adj,visited,i);
            }
        }
        return ans;
    }
};
