class Solution 
{
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            int m = i;
            while (m)
            {
                if(m & 1) ans[i]++;
                m >>= 1;
            }
        }
        return ans;
    }
};
