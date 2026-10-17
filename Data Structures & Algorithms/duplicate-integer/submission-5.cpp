class Solution {
public:
    bool hasDuplicate(vector<int>& nums)
    {
        return (unordered_set<int>(nums.begin(), nums.end()).size() != nums.size());
    }


    bool hash_hasDuplicate(vector<int>& nums)
    {
        unordered_set<int> uniqueNums;

        for (int& num : nums)
        {
            if (uniqueNums.count(num)) return false;

            uniqueNums.insert(num);
        }
        
        return true;
    }

    bool sorting_hasDuplicate(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1]) return false;
        }

        return true;
    }
};
