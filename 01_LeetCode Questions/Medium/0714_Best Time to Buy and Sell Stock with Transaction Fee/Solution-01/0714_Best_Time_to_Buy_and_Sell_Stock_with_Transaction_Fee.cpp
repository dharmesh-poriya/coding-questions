class Solution {        
public:
    int maxProfit(vector<int>& prices, int fee) {
        int old_buy_state_profit = -prices[0];
        int old_sell_state_profit = 0;
        for(int i=1;i<prices.size();i++){
            int new_buy_state_profit = old_buy_state_profit;
            int new_sell_state_profit = old_sell_state_profit;
            if(old_buy_state_profit<old_sell_state_profit-prices[i]){
                new_buy_state_profit = old_sell_state_profit-prices[i];
            }
            if(old_sell_state_profit<prices[i]+old_buy_state_profit-fee){
                new_sell_state_profit = prices[i]+old_buy_state_profit-fee;
            }
            old_buy_state_profit = new_buy_state_profit;
            old_sell_state_profit = new_sell_state_profit;
        }
        return old_sell_state_profit;
    }
};