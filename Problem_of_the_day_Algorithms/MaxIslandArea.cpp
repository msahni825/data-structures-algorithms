class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, int& c){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!=1){
            return;
        }
        //cells that are visited are marked as -1
        grid[i][j]=-1;
        c++;
        
        dfs(i+1,j,grid,c);
        dfs(i,j+1,grid,c);
        dfs(i-1,j,grid,c);
        dfs(i,j-1,grid,c);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int c=0;
                if(grid[i][j]==1){
                    dfs(i,j,grid,c);
                    result=max(result,c);
                }
            }
        }
        return result;
    }
};
