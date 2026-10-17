class Solution {
public:


    int maxProfitTwoPointerSolution(vector<int>& prices)
    {
       int result = 0;
       
       int l = 0;
       int r = 1;

       while (r < prices.size())
       {
           if (prices[l] < prices[r])
           {
               int currentProfit = prices[r] - prices[l];
               if (currentProfit > result) result = currentProfit;
           }
           else
           {
               l = r;
           }
           r++;
       }

        return result;
    }


    int maxProfit(vector<int>& prices)
    {
        int result = 0;

 
        int minBuy = prices[0];

        for (int& price : prices)
        {
            minBuy = min(minBuy, price);
            result = max(result, price - minBuy);
        }

        return result;
    }

};

