class Solution
{
public:
    int minEatingSpeed(vector<int>& piles, int h)
    {
        sort(piles.begin(), piles.end());

        int l = 1;
        int r = piles[piles.size() - 1];

        while (l <= r)
        {
            int m = (l + r) / 2;
            int currentH = 0;

            for (int& bananas : piles)
            {
                currentH += (bananas + m - 1) / m;
            }

            if (currentH > h)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return l;
    }
};
