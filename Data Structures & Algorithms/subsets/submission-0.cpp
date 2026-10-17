class Solution {
public:

    vector<vector<int>> result;
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int> subset;

        backtrack(0, nums, subset);

        return result;
    }

    void backtrack(int i, vector<int> nums, vector<int> subset)
    {
        if(i >= nums.size())
        {
            result.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        backtrack(i+1, nums, subset);

        subset.pop_back();
        backtrack(i+1, nums, subset);
    }
};
