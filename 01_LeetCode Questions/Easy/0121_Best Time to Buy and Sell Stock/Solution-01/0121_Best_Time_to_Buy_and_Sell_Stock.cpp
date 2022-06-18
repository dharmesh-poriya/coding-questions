class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int sell : prices){
            buy = min(buy,sell);
            profit = max(profit,sell-buy);
        }
        return profit;
    }
};
