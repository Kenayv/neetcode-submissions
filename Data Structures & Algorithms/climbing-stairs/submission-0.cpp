class Solution 
{
public:
    int climbStairs(int n)
    {
        int l = 1;
        int r = 1;

        for (int i = n; i > 1; i--)
        {
            int temp = l;
            l = l + r;
            r = temp;
        }

        return l;
    }
};