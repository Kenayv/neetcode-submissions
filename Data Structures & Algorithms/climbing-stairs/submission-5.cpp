
class Solution
{
public:
    int climbStairs(int n)
    {
        int one = 1;
        int two = 1;

        for (int i = n; i > 1; i--)
        {
            int temp = one;
            one = one + two;
            two = temp;
        }

        return one;
    }

};