class Solution:
    def DFS(self, i, j, board):
        if(i<0 or i>=len(board) or j<0 or j>=len(board[0]) or board[i][j]!='O'):
            return
        if board[i][j]=='O':
            board[i][j]='*'
        self.DFS(i+1,j,board)
        self.DFS(i,j+1,board)
        self.DFS(i-1,j,board)
        self.DFS(i,j-1,board)
        
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        n = len(board)
        m = len(board[0])
        for i in range(0,n):
            for j in range(0,m):
                if(board[i][j]=='O' and (i==0 or j==0 or i==n-1 or j==m-1)):
                    self.DFS(i,j,board)
        for i in range(0,n):
            for j in range(0,m):
                if(board[i][j]=='O'):
                    board[i][j]='X'
                if(board[i][j]=='*'):
                    board[i][j]='O'
