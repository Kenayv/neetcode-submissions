
class Solution
{
public:
    int findMin(vector<int>& nums)
    {
        if (nums.size() == 1 || nums[0] < nums[nums.size()-1])  return nums[0];

        int l = 0;
        int r = nums.size() - 1;
        
        while (l <= r)
        {
            int m = (l + r) / 2;

            if (m+1 < nums.size() && nums[m] > nums[m + 1])
            {
                return nums[m+1];
            }
            if (m>=1 && nums[m - 1] > nums[m])
            {
                return nums[m];
            }
 
            if (nums[l] < nums[m])
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return nums[l];
    }
};
