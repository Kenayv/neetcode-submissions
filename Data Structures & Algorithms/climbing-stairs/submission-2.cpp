class Solution
{
public:
    int climbStairs(int n)
    {
        int result = 0;
        dp(0, n, result);
        return result;
    }

    void dp(int curr, int top, int& res)
    {
        if (curr >= top)
        {
            if (curr == top) res++;
            return;
        }

        dp(curr + 1, top, res);
        dp(curr + 2, top, res);
    }
};
