class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> v(n,vector<int>());
        v[0].push_back(1);
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j>0 && j!=i){
                    v[i].push_back(v[i-1][j]+v[i-1][j-1]);
                }
                else{
                    v[i].push_back(1);
                }
            }
        }
        return v;
    }
};
