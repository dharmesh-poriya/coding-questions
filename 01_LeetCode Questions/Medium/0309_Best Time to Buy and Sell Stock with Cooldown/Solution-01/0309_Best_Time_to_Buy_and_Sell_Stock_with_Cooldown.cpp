class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int obsp = -prices[0]; // old bought state profit
        int ossp = 0; // old sold state profit
        int ocsp = 0; // old cool down state profit
        
        for(int i=1;i<prices.size();i++){
            int nbsp = 0; // new bought state profit
            int nssp = 0; // new sold state profit
            int ncsp = 0; // new cool down state profit 
            
            if(ocsp-prices[i]>obsp){
                nbsp = ocsp-prices[i];
            }else{
                nbsp = obsp;
            }
            
            if(obsp+prices[i]>ossp){
                nssp = obsp+prices[i];
            }else{
                nssp = ossp;
            }
            
            if(ocsp<ossp){
                ncsp = ossp;
            }else{
                ncsp = ocsp;
            }
            
            obsp = nbsp;
            ossp = nssp;
            ocsp = ncsp;
        }
        return ossp;
    }
};