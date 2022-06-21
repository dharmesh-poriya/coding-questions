class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp1(n);
        vector<int> dp2(n);
        
        dp1[0] = 0;
        int mnbuy = prices[0];
        for(int i=1;i<n;i++){
            int currentp = prices[i]-mnbuy;
            dp1[i] = max(dp1[i-1],currentp);
            mnbuy = min(mnbuy,prices[i]);
        }
        
        int mxsell = prices[n-1];
        dp2[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            int currentp = mxsell-prices[i];
            dp2[i] = max(dp2[i],currentp);
            mxsell = max(mxsell,prices[i]);
        }
        
        int mxp = 0;
        for(int i=0;i<n;i++){
            mxp = max(mxp,dp1[i]+dp2[i]);
        }
        return mxp;
    }
};
