class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int result=0;
        vector<vector<int>> matrix;
        for(int i=0;i<m;i++){
            vector<int> v;
            for(int j=0;j<n;j++){
                v.push_back((i+1)*(j+1));
            }
           matrix.push_back(v);
        }
        vector<int> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
                ans.push_back(matrix[i][j]);
            }
            cout<<"\n";
        }
        //O(nlgn)=> TLE
        //use binary search=> O(lgn)
        sort(ans.begin(),ans.end());
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        result=ans[k-1];
        return result;
    }
};
