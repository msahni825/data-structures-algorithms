class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        //edge case: corners
        //graph as adjacency matrix: O(nm)
        if(grid.empty()){
            return 0;
        }
        int days=0;
        int c=0;
        int total=0;
        
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> r;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    total++;
                }
                if(grid[i][j]==2){
                    r.push({i,j});
                }
            }
        }
        cout<<r.size()<<" total: "<<total<<"\n";
            int x[4]={0,0,1,-1};
            int y[4]={1,-1,0,0};
            while(!r.empty()){
                int k=r.size();
                c+=k;
                for(int i=0;i<k;i++){
                    int xx=r.front().first;
                    int yy=r.front().second;
                    r.pop();
            
                for(int j=0;j<4;j++){
                    int nx=xx+x[j];
                    int ny=yy+y[j];
                    if(nx<0 || ny<0 || nx>=n || ny>=m || grid[nx][ny]!=1){
                        continue;
                    }
                    grid[nx][ny]=2;
                    r.push({nx,ny});
                }
            }
    
        if(!r.empty()){
            days++;
        }
            }
        return (c==total)?days:-1;
    }
};
