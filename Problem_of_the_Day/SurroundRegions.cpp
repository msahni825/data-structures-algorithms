class Solution {
public:
    
    void DFS(int i, int j, vector<vector<char>> & board){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!='O'){
            return;
        }   
        if(board[i][j]=='O'){
            board[i][j]='*';
        }
        DFS(i+1,j,board);
        DFS(i,j+1,board);
        DFS(i-1,j,board);
        DFS(i,j-1,board);
    }
    
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
            if(board[i][j]=='O' && (i==0 || i==n-1 || j==0 || j==m-1)){
                DFS(i,j,board);
            }    
               
           }
       }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='*'){
                    board[i][j]='O';
                }
            }
        }
    }
};
