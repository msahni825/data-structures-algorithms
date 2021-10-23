class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        
        int score_max=0;
        int max_left=values[0]+0;
        for(int j=1;j<n;j++){
            score_max=max(score_max,max_left+values[j]-j);
            max_left=max(max_left,values[j]+j);
        }
        return score_max;
    }
};
