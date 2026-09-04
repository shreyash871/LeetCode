class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniprice = prices[0];
        int maxprofit = 0 ;

        for(int price : prices){

            int  currentprofit = price -  miniprice;
            maxprofit = max(currentprofit , maxprofit);
            miniprice = min(price , miniprice);
        }
        return maxprofit;
    }
};