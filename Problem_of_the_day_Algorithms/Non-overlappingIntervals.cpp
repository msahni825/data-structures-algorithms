class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int answer=0;
        //sort on the basis of end points of intervals
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<intervals.size();i++){
            if(intervals[i-1][1]>intervals[i][0]){
                answer++;
                intervals[i][1]=min(intervals[i][1],intervals[i-1][1]);
            }
        }
        return answer;
    }
};
