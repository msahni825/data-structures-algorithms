class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MIN;
        int sell=0;
        int prev_buy=0;
        int prev_sell=0;
        if(n==0){
            return 0;
        }
        for(auto p:prices){
            prev_buy=buy;
            buy=max(prev_sell-p,buy);
            prev_sell=sell;
            sell=max(prev_buy+p,sell);
        }
        return sell;
    }
};
