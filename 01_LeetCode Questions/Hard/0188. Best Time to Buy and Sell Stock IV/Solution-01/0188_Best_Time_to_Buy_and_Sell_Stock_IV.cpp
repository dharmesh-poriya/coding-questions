class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(0==k || 0==prices.size()) return 0;
        
        vector<vector<int>> dp(k+1,vector<int>(prices.size()));
        for(int i=0;k+1>i;i++) dp[i][0] = 0;
        for(int j=0;prices.size()>j;j++) dp[0][j] = 0;
        
        for(int i=1;k+1>i;i++){
            int mx = INT_MIN;
            for(int j=1;prices.size()>j;j++){
                if(dp[i-1][j-1]-prices[j-1]>mx){
                    mx = dp[i-1][j-1]-prices[j-1];
                }
                dp[i][j] = max(mx+prices[j],dp[i][j-1]);
            }
        }
        return dp[k][prices.size()-1];
    }
};