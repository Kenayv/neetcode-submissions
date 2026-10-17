
class Solution
{
public:
    int minEatingSpeed(vector<int>& piles, int h)
    {
        sort(piles.begin(), piles.end());

        int l = 1;
        int r = piles[piles.size() - 1];

        int eatRate = r;
        int minEatRate = r;

        while (l <= r)
        {
            eatRate = (l + r) / 2;
            int currentH = 0;

            for (int& bananas : piles)
            {
                currentH += (bananas + eatRate - 1) / eatRate;
            }

            if (currentH > h)
            {
                l = eatRate + 1;
            }
            else
            {
                minEatRate = eatRate;
                r = eatRate - 1;
            }
        }
        return minEatRate;
    }
};
