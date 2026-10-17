class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        sort(piles.begin(), piles.end());

        int l = 1;
        int r = piles[piles.size() - 1];
        
        int minEatRate = r;

        while (l <= r)
        {
            int eatRate = (l + r) / 2;

            int reqH = 0;

            for (int& pile : piles) reqH += ceil((double)pile / eatRate);

            if (reqH <= h)
            {
                r = eatRate - 1;
                minEatRate = min(minEatRate, eatRate);
            }
            else
            {
                l = eatRate + 1;
            }
        }
        return minEatRate;
    }
};

