class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int> prefix(nums.size());
        vector<int> postfix(nums.size());

        prefix[0] = 1;
        postfix[postfix.size() - 1] = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            postfix[i] = postfix[i + 1] * nums[i + 1];
        }

        vector<int> result(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            result[i] = postfix[i] * prefix[i];
        }

        return result;
    }
};
