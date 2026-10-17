class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        int result = r;

        while (l <= r)
        {
            int k = (l + r) / 2;

            long long eatTime = 0;
            for (int p : piles)
            {
                eatTime += ceil(double(p) / k);
            }

            if (eatTime <= h)
            {
                result = k;
                r = k - 1;
            }
            else
            {
                l = k + 1;
            }
        }
        return result;
    }
};
