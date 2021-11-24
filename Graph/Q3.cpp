class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int row, int col, int& perimeter){
        grid[i][j]=2;//mark visisted;
        if(i==0 || grid[i-1][j]==0){
            perimeter++;
        }
        if(i==row || grid[i+1][j]==0){
            perimeter++;
        }
        if(j==0 || grid[i][j-1]==0){
            perimeter++;
        }
        if(j==col || grid[i][j+1]==0){
            perimeter++;
        }
        //check if island present in all 4 directions and recursively call DFS
        if(i>0 && grid[i-1][j]==1){
            dfs(grid,i-1,j,row,col,perimeter);
        }
        if(i<row && grid[i+1][j]==1){
            dfs(grid,i+1,j,row,col,perimeter);
        }
        if(j>0 && grid[i][j-1]==1){
            dfs(grid,i,j-1,row,col,perimeter);
        }
        if(j<col && grid[i][j+1]==1){
            dfs(grid,i,j+1,row,col,perimeter);
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int perimeter=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j,row-1,col-1,perimeter);
                    break;
                }
            }
        }
        return perimeter;
    }
};
