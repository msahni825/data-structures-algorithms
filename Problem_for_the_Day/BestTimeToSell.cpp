class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        //[1,3,2,8,4,9]
        /*
            3-1-2=0 | 2-1-2=-1 | 8-1-2=5 
        */
        int bought=INT_MIN;
        int sold=0;
        for(auto x:prices){
            int prev_sold=sold;
            sold=max(bought+x,sold);
            bought=max(bought,prev_sold-x-fee);
        }
        return sold;
    }
};
