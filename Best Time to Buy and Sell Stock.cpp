class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int menor = INT_MAX;
        int profit = 0;
        int day=0;
        for (int i=0;i<prices.size(); i++){
            if(prices[i]< menor){
                menor = prices[i];
            }
           day = prices[i] - menor;
           if(profit < day){
               profit = day;
           }
        }
        return profit;
    }
};
