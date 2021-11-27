class Solution {
public:
    bool isCyclic(vector<vector<int>> &adj, vector<int> &visited, int curr){
        if(visited[curr]==2){
            return true;
        }
        visited[curr]=2;
        for(int i=0;i<adj[curr].size();i++){
            if(visited[adj[curr][i]]!=1){
                if(isCyclic(adj,visited,adj[curr][i])){
                    return true;
                }
            }
        }
        visited[curr]=1;
        return false;
    }
    void util(vector<bool> &visited, vector<int> adj[], stack<int> &st, int i){
        visited[i]=true;
        for(auto x:adj[i]){
            if(!visited[x]){
                util(visited,adj,st,x);
            }
        }
        st.push(i);
    }
    vector<int> topsort(int V, vector<int> adj[]){
        vector<int> ans;
        stack<int> st;
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
           if(!visited[i]){
               util(visited,adj,st,i);
           }
        }
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<vector<int>> gg(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            gg[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int> visited(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(visited[i]==0){
                if(isCyclic(gg,visited,i)){
                    return {};
                }
            }
        }
        return topsort(numCourses,adj);
    }
};
