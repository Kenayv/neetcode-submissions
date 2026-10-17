class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
       int result = 0;
       int l = 0;
       int r = 1;

       while (r < prices.size())
       {
           if (prices[l] < prices[r])
           {
               int profit = prices[r] - prices[l];
               if (result < profit) result = profit;
               
           }
           else
           {
               l = r ;
           }

           r++;
       }
       

        return result;
    }
};
