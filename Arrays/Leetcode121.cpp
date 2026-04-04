class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        
        int maxprofit=0;
        int minprice=prices[0];
        for(int price : prices)
        {
            if(price<minprice)
            {
                minprice=price;
            }
            else
            {
            maxprofit=max(maxprofit, price-minprice);
            }
        }
        return maxprofit;
    }
};
