class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=n-1;
        while(low>=0 && low<m && high>=0 && high<n){
           // int mid=(low+high)/2;
            if(matrix[low][high]==target){
                return true;
            }
            else if(matrix[low][high]<target){
                low++;
            }
            else if(matrix[low][high]>target){
                high--;
            }
            //cout<<mid<<"\n";
        }
        return false;
    }
};
