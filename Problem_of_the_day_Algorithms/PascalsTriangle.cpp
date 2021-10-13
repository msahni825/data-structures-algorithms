class Solution {
public:
    //time:  O(row_idx^2)
    //space: O(row_idx)
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex+1,0);
        result[0]=1;
        
        for(int i=1;i<=rowIndex;i++){
            for(int j=i;j>0;j--){
                if(j==i){
                    result[j]=1;
                    
                }
                else{
                    result[j]=result[j]+result[j-1];
                }
            }
        }
        return result;
    }
};
