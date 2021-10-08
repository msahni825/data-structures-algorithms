class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> result;
        //BFS
        queue<pair<int,int>> q; 
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push(make_pair(i,j));
                }
                else{
                    mat[i][j]=-1;
                }
            }
        }
        while(!q.empty()){
            int s=q.size();
            while(s--){
                pair p=q.front();
                int i=p.first;
                int j=p.second;
                q.pop();
                if(i-1>=0 && mat[i-1][j]==-1){
                    mat[i-1][j]=1+mat[i][j];
                    q.push(make_pair(i-1,j));
                }
                if(j-1>=0 && mat[i][j-1]==-1){
                    mat[i][j-1]=1+mat[i][j];
                    q.push(make_pair(i,j-1));
                }
                if(i+1<mat.size() && mat[i+1][j]==-1){
                    mat[i+1][j]=1+mat[i][j];
                    q.push(make_pair(i+1,j));
                }
                if(j+1<mat[0].size() && mat[i][j+1]==-1){
                    mat[i][j+1]=1+mat[i][j];
                    q.push(make_pair(i,j+1));
                }
            }
        }
        return mat;
    }
};
