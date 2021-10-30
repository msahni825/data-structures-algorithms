class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> result;
        priority_queue<pair<int, pair<int, int>>> pq;
        int distance=0;
       
        for(int i=0;i<points.size();i++){
            int x=(points[i][0]);
            int y=(points[i][1]);
            distance=x*x+y*y;
            pq.push({-distance,{x,y}});
        }
        
        pair<vector<int>, int> curr;
        while(k--){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            result.push_back({x,y});
            pq.pop();
        }
        return result;
    }
};
