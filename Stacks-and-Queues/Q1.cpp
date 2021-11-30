class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int area=0;
        if(matrix.size()==0){
            return 0;
        }
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> grid(row,vector<int>(col,0));
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(i==0){
                    grid[i][j]=matrix[i][j]-'0';
                }
                else{
                    if(matrix[i][j]=='0'){
                        grid[i][j]=0;
                    }
                    else{
                        grid[i][j]=1+grid[i-1][j];
                    }
                }
            }
            vector<int> left(col), right(col);
            stack<int> stk;
            for(int j=0;j<col;j++){
                int curr=grid[i][j];
                while(!stk.empty() && grid[i][stk.top()]>=curr){
                    stk.pop();
                }
                if(stk.empty()){
                    left[j]=-1;
                }
                else{
                    left[j]=stk.top();
                }
                stk.push(j);
            }
            while(!stk.empty()){
                stk.pop();
            }
            for(int j=col-1;j>=0;j--){
                int curr=grid[i][j];
                while(!stk.empty() && grid[i][stk.top()]>=curr){
                    stk.pop();
                }
                if(stk.empty()){
                    right[j]=col;
                }
                else{
                    right[j]=stk.top();
                }
                stk.push(j);
            }
            for(int j=0;j<col;++j){
                area=max(area,(grid[i][j]*(right[j]-left[j]-1)));
            }
        }
        return area;
    }
};
