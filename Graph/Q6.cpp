class Solution {
public:
    vector<vector<int>> result;
    void dfs(vector<vector<int>>& graph, int i, vector<int> &path){
        path.push_back(i);
        if(i==graph.size()-1){
            result.push_back(path);
        }
        for(int j=0;j<graph[i].size();j++){
            dfs(graph,graph[i][j],path);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> visited;    //using DFS
        vector<int> path={};
        dfs(graph,0,path);
        return result;
    }
};
