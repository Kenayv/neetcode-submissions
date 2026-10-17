class Solution 
{
public:
    // bit manipulation - OPTIMAL
 vector<int> countBits(int n)
 {
     vector<int> ans(n + 1, 0);

     for (int i = 1; i <= n; i++)
     {
         int m = i;
         while (m)
         {
             m &= (m - 1);
             ans[i]++;   
         }
     }
     return ans;
 }
};
