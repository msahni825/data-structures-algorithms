class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy_price=INT_MAX;  //we want min value
        int sell_price=INT_MIN; //we want max value
        int n=prices.size();
        if(n==1){
            return 0;
        }
        for(int i=0;i<n;i++){
            int curr_price=prices[i];
            if(curr_price<buy_price && i<=n-2){
                buy_price=curr_price;
                sell_price=INT_MIN;
            }
            else if(curr_price>sell_price){
                sell_price=curr_price;
                profit=max((sell_price-buy_price),profit);
            }
        }
        return profit;
    }
};
