class Solution {
public:

    bool hasDuplicate(vector<int>& nums)
    {
        unordered_set<int> uniqueNums;

        for (int& num : nums)
        {
            if (uniqueNums.count(num)) return true;

            uniqueNums.insert(num);
        }
        
        return false;
    }

    bool sorting_hasDuplicate(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1]) return true;
        }

        return false;
    }
};