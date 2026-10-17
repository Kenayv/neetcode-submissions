class Solution {
public:
    vector<vector<int>> result;

    vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
        backtrack(0, 0, target, {}, nums);

        return result;
    }

    void backtrack(int i, int total, int target, vector<int> current, const vector<int>& nums)
    {
        if (total == target)
        {
            result.push_back(current);
            return;
        }

        if (i >= nums.size() || total > target)
        {
            return;
        }

        current.push_back(nums[i]);
        backtrack(i, total + nums[i], target, current, nums);

        current.pop_back();
        backtrack(i + 1, total, target, current, nums);
    }
};
