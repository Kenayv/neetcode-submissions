class Solution 
{
public:
    int maxProfit(vector<int>& prices)
    {
        int result = 0;

        int l = 0;
        int r = 1;

        while (r < prices.size())
        {
            if (prices[r] < prices[l])
            {
                l = r;
            }
            else
            {
                int profit = prices[r] - prices[l];
                result = max(result, profit);
            }
            r++;
        }

        return result;
    }
};
