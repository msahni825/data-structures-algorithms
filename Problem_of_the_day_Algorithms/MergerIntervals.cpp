class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        int j=0;
        result.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=result[j][1]){
                result[j][0]=min(intervals[i][0],result[j][0]);
                result[j][1]=max(result[j][1],intervals[i][1]);    
            }
            else{
                result.push_back(intervals[i]);
                j++;
            }
        }
        return result;
    }
};
