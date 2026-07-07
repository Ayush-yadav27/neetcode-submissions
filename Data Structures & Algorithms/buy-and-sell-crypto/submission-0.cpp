class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int buy=0;
        int sell=1;
        int n=prices.size();
        while(buy<n && sell<n){
            if(prices[buy] < prices[sell]){
                int profit=prices[sell]-prices[buy];
                max_profit=max(profit,max_profit);
            }
            else{
                buy=sell;
            }
            sell++;
        }
        return max_profit;
    }
};
