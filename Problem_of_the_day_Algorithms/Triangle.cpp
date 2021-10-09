class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //int finalsum=0;
        for(int i=triangle.size()-2;i>=0;i--){
           for(int j=0;j<triangle[i].size();j++){
               cout<<triangle[i+1][j]<<"\n";
               cout<<triangle[i+1][j+1]<<"\n";
               cout<<"---"<<"\n";
               triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
               cout<<triangle[i][j]<<"\n";
               cout<<"***"<<"\n";
           }
        }
        return triangle[0][0];
    }
};
