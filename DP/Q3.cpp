class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> min_cost(cost.size()+1);
        
        for(int i=0;i<cost.size();i++){
            if(i<2){
                min_cost[i]=cost[i];
            }
            else{
                min_cost[i]=cost[i]+min(min_cost[i-1],min_cost[i-2]);
            }
        }
        return min(min_cost[cost.size()-1],min_cost[cost.size()-2]);
    }
};
