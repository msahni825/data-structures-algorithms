class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        //if in-degree is zero add to output vector
        vector<int> ans;
        vector<int> degree(n,0);
        for(int i=0;i<edges.size();i++){
            degree[edges[i][1]]=1;
        }
        for(int i=0;i<n;i++){
            if(degree[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
