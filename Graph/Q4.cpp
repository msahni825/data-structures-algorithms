class Solution {
public:
    bool isValid(int &x, int &y, int &n, int &m){
        return (x>=0 && x<m && y>=0 && y<n);
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        //moving in 8 directions
        vector<vector<int>> moves={{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0}};
        int n=grid.size();
        int m=grid[0].size();
         //edge case                          
        if(grid[0][0]==1 || grid[n-1][m-1]==-1){
            return -1;
        }           
         //using queue to implement BFS 
         queue<vector<int>> q;
         //adding first index(0,0) with value 1                          
         q.push({0,0,1});                          
         while(!q.empty()){
             vector<int> top=q.front(); 
             q.pop();
             if(top[0]==m-1 && top[1]==n-1){
                 return top[2];// reached the detination
             }
             //check for each value
             for(auto i:moves){
             //check 4 other directions
             int a=top[0]+i[0];
             int b=top[1]+i[1];    
             if(isValid(a,b,n,m) && grid[a][b]==0){
                 grid[a][b]=1;
                 q.push({a,b,top[2]+1});
                }
            }
         }
        return -1;
    }
};
