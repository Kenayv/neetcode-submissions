
class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int> result(nums.size(), 1);

        result[0] = 1;

        int prefix = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            prefix *= nums[i - 1];
            result[i] *= prefix;
        }

        int postFix = 1;
        for (int i = nums.size()-2; i >= 0; i--)
        {
            postFix *= nums[i + 1];
            result[i] *= postFix;
        }
        return result;
    }
};
